#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_WAKUTYPE__FP9SPI_STACKi
// Address: 0x254bd0 - 0x254c10
void ps2__MENU_WAKUTYPE__FP9SPI_STACKi_0x254bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_WAKUTYPE__FP9SPI_STACKi_0x254bd0");
#endif

    switch (ctx->pc) {
        case 0x254bf4u: goto label_254bf4;
        case 0x254c00u: goto label_254c00;
        default: break;
    }

    ctx->pc = 0x254bd0u;

    // 0x254bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254bd8: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254BDCu;
    {
        const bool branch_taken_0x254bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254BDCu;
            // 0x254be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bdc) {
            ctx->pc = 0x254BECu;
            goto label_254bec;
        }
    }
    ctx->pc = 0x254BE4u;
    // 0x254be4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254BE4u;
    {
        const bool branch_taken_0x254be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254BE4u;
            // 0x254be8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254be4) {
            ctx->pc = 0x254C08u;
            goto label_254c08;
        }
    }
    ctx->pc = 0x254BECu;
label_254bec:
    // 0x254bec: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254BECu;
    SET_GPR_U32(ctx, 31, 0x254BF4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254BF4u; }
        if (ctx->pc != 0x254BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254BF4u; }
        if (ctx->pc != 0x254BF4u) { return; }
    }
    ctx->pc = 0x254BF4u;
label_254bf4:
    // 0x254bf4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x254bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x254bf8: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x254BF8u;
    SET_GPR_U32(ctx, 31, 0x254C00u);
    ctx->pc = 0x254BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254BF8u;
            // 0x254bfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C00u; }
        if (ctx->pc != 0x254C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C00u; }
        if (ctx->pc != 0x254C00u) { return; }
    }
    ctx->pc = 0x254C00u;
label_254c00:
    // 0x254c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254c08:
    // 0x254c08: 0x3e00008  jr          $ra
    ctx->pc = 0x254C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C08u;
            // 0x254c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254C10u;
}
