// Copyright Edwin Villanueva 2022.


#include "WorldCylinder.h"

// Sets default values for this component's properties
UWorldCylinder::UWorldCylinder()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldCylinder::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWorldCylinder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

