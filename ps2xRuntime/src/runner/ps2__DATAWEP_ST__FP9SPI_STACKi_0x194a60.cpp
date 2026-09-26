#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP_ST__FP9SPI_STACKi
// Address: 0x194a60 - 0x194ab4
void ps2__DATAWEP_ST__FP9SPI_STACKi_0x194a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP_ST__FP9SPI_STACKi_0x194a60");
#endif

    switch (ctx->pc) {
        case 0x194a88u: goto label_194a88;
        case 0x194a98u: goto label_194a98;
        default: break;
    }

    ctx->pc = 0x194a60u;

    // 0x194a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194a6c: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194a70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194A70u;
    {
        const bool branch_taken_0x194a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A70u;
            // 0x194a74: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a70) {
            ctx->pc = 0x194A80u;
            goto label_194a80;
        }
    }
    ctx->pc = 0x194A78u;
    // 0x194a78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x194A78u;
    {
        const bool branch_taken_0x194a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A78u;
            // 0x194a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a78) {
            ctx->pc = 0x194AA4u;
            goto label_194aa4;
        }
    }
    ctx->pc = 0x194A80u;
label_194a80:
    // 0x194a80: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194A80u;
    SET_GPR_U32(ctx, 31, 0x194A88u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A88u; }
        if (ctx->pc != 0x194A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A88u; }
        if (ctx->pc != 0x194A88u) { return; }
    }
    ctx->pc = 0x194A88u;
label_194a88:
    // 0x194a88: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a90: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194A90u;
    SET_GPR_U32(ctx, 31, 0x194A98u);
    ctx->pc = 0x194A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194A90u;
            // 0x194a94: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A98u; }
        if (ctx->pc != 0x194A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A98u; }
        if (ctx->pc != 0x194A98u) { return; }
    }
    ctx->pc = 0x194A98u;
label_194a98:
    // 0x194a98: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194a9c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x194a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x194aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194aa4:
    // 0x194aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194aac: 0x3e00008  jr          $ra
    ctx->pc = 0x194AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194AACu;
            // 0x194ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194AB4u;
}
