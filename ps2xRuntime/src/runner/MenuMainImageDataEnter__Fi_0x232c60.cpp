#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainImageDataEnter__Fi
// Address: 0x232c60 - 0x232cb8
void MenuMainImageDataEnter__Fi_0x232c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainImageDataEnter__Fi_0x232c60");
#endif

    switch (ctx->pc) {
        case 0x232c74u: goto label_232c74;
        case 0x232c94u: goto label_232c94;
        case 0x232ca8u: goto label_232ca8;
        default: break;
    }

    ctx->pc = 0x232c60u;

    // 0x232c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232c6c: 0xc08d1c8  jal         func_234720
    ctx->pc = 0x232C6Cu;
    SET_GPR_U32(ctx, 31, 0x232C74u);
    ctx->pc = 0x232C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232C6Cu;
            // 0x232c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234720u;
    if (runtime->hasFunction(0x234720u)) {
        auto targetFn = runtime->lookupFunction(0x234720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232C74u; }
        if (ctx->pc != 0x232C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIMGPtr__Fv_0x234720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232C74u; }
        if (ctx->pc != 0x232C74u) { return; }
    }
    ctx->pc = 0x232C74u;
label_232c74:
    // 0x232c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c78: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x232C78u;
    {
        const bool branch_taken_0x232c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C78u;
            // 0x232c7c: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c78) {
            ctx->pc = 0x232CA8u;
            goto label_232ca8;
        }
    }
    ctx->pc = 0x232C80u;
    // 0x232c80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c84: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x232c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x232c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c8c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x232C8Cu;
    SET_GPR_U32(ctx, 31, 0x232C94u);
    ctx->pc = 0x232C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232C8Cu;
            // 0x232c90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232C94u; }
        if (ctx->pc != 0x232C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232C94u; }
        if (ctx->pc != 0x232C94u) { return; }
    }
    ctx->pc = 0x232C94u;
label_232c94:
    // 0x232c94: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x232c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x232c98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x232c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x232c9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ca0: 0xc08aa58  jal         func_22A960
    ctx->pc = 0x232CA0u;
    SET_GPR_U32(ctx, 31, 0x232CA8u);
    ctx->pc = 0x232CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232CA0u;
            // 0x232ca4: 0x24a5a760  addiu       $a1, $a1, -0x58A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A960u;
    if (runtime->hasFunction(0x22A960u)) {
        auto targetFn = runtime->lookupFunction(0x22A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CA8u; }
        if (ctx->pc != 0x232CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureBlockNo__14CPosDataManageFPci_0x22a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CA8u; }
        if (ctx->pc != 0x232CA8u) { return; }
    }
    ctx->pc = 0x232CA8u;
label_232ca8:
    // 0x232ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x232CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232CB0u;
            // 0x232cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232CB8u;
}
