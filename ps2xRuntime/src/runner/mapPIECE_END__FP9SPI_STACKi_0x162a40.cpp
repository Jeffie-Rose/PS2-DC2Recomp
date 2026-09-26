#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_END__FP9SPI_STACKi
// Address: 0x162a40 - 0x162aa0
void mapPIECE_END__FP9SPI_STACKi_0x162a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_END__FP9SPI_STACKi_0x162a40");
#endif

    switch (ctx->pc) {
        case 0x162a74u: goto label_162a74;
        case 0x162a90u: goto label_162a90;
        default: break;
    }

    ctx->pc = 0x162a40u;

    // 0x162a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162a48: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x162a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x162a4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162A4Cu;
    {
        const bool branch_taken_0x162a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A4Cu;
            // 0x162a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a4c) {
            ctx->pc = 0x162A64u;
            goto label_162a64;
        }
    }
    ctx->pc = 0x162A54u;
    // 0x162a54: 0x8f82891c  lw          $v0, -0x76E4($gp)
    ctx->pc = 0x162a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x162a58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162A58u;
    {
        const bool branch_taken_0x162a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162a58) {
            ctx->pc = 0x162A6Cu;
            goto label_162a6c;
        }
    }
    ctx->pc = 0x162A60u;
    // 0x162a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x162a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162a64:
    // 0x162a64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162A64u;
    {
        const bool branch_taken_0x162a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A64u;
            // 0x162a68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a64) {
            ctx->pc = 0x162A98u;
            goto label_162a98;
        }
    }
    ctx->pc = 0x162A6Cu;
label_162a6c:
    // 0x162a6c: 0xc05874c  jal         func_161D30
    ctx->pc = 0x162A6Cu;
    SET_GPR_U32(ctx, 31, 0x162A74u);
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A74u; }
        if (ctx->pc != 0x162A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A74u; }
        if (ctx->pc != 0x162A74u) { return; }
    }
    ctx->pc = 0x162A74u;
label_162a74:
    // 0x162a74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162A74u;
    {
        const bool branch_taken_0x162a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162a74) {
            ctx->pc = 0x162A84u;
            goto label_162a84;
        }
    }
    ctx->pc = 0x162A7Cu;
    // 0x162a7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x162A7Cu;
    {
        const bool branch_taken_0x162a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A7Cu;
            // 0x162a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a7c) {
            ctx->pc = 0x162A94u;
            goto label_162a94;
        }
    }
    ctx->pc = 0x162A84u;
label_162a84:
    // 0x162a84: 0x8f85891c  lw          $a1, -0x76E4($gp)
    ctx->pc = 0x162a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x162a88: 0xc059908  jal         func_166420
    ctx->pc = 0x162A88u;
    SET_GPR_U32(ctx, 31, 0x162A90u);
    ctx->pc = 0x162A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A88u;
            // 0x162a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166420u;
    if (runtime->hasFunction(0x166420u)) {
        auto targetFn = runtime->lookupFunction(0x166420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A90u; }
        if (ctx->pc != 0x162A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPiece__9CMapPartsFP17CList_9CMapPiece__0x166420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A90u; }
        if (ctx->pc != 0x162A90u) { return; }
    }
    ctx->pc = 0x162A90u;
label_162a90:
    // 0x162a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162a94:
    // 0x162a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162a98:
    // 0x162a98: 0x3e00008  jr          $ra
    ctx->pc = 0x162A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A98u;
            // 0x162a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162AA0u;
}
