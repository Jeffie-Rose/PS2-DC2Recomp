#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLIGHT_SET__FP9SPI_STACKi
// Address: 0x165260 - 0x165294
void mapLIGHT_SET__FP9SPI_STACKi_0x165260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLIGHT_SET__FP9SPI_STACKi_0x165260");
#endif

    switch (ctx->pc) {
        case 0x165270u: goto label_165270;
        case 0x16527cu: goto label_16527c;
        default: break;
    }

    ctx->pc = 0x165260u;

    // 0x165260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165268: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165268u;
    SET_GPR_U32(ctx, 31, 0x165270u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165270u; }
        if (ctx->pc != 0x165270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165270u; }
        if (ctx->pc != 0x165270u) { return; }
    }
    ctx->pc = 0x165270u;
label_165270:
    // 0x165270: 0x8f84895c  lw          $a0, -0x76A4($gp)
    ctx->pc = 0x165270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165274: 0xc059410  jal         func_165040
    ctx->pc = 0x165274u;
    SET_GPR_U32(ctx, 31, 0x16527Cu);
    ctx->pc = 0x165278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165274u;
            // 0x165278: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165040u;
    if (runtime->hasFunction(0x165040u)) {
        auto targetFn = runtime->lookupFunction(0x165040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16527Cu; }
        if (ctx->pc != 0x16527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingInfo__8CMapInfoFi_0x165040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16527Cu; }
        if (ctx->pc != 0x16527Cu) { return; }
    }
    ctx->pc = 0x16527Cu;
label_16527c:
    // 0x16527c: 0xaf82896c  sw          $v0, -0x7694($gp)
    ctx->pc = 0x16527cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 2));
    // 0x165280: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165288: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x165288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16528c: 0x3e00008  jr          $ra
    ctx->pc = 0x16528Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16528Cu;
            // 0x165290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165294u;
}
