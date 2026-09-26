#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuReturnMsg__Fv
// Address: 0x2bfd60 - 0x2bfdb0
void DrawMenuReturnMsg__Fv_0x2bfd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuReturnMsg__Fv_0x2bfd60");
#endif

    switch (ctx->pc) {
        case 0x2bfd94u: goto label_2bfd94;
        case 0x2bfd9cu: goto label_2bfd9c;
        case 0x2bfda4u: goto label_2bfda4;
        default: break;
    }

    ctx->pc = 0x2bfd60u;

    // 0x2bfd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bfd68: 0x93839c60  lbu         $v1, -0x63A0($gp)
    ctx->pc = 0x2bfd68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941792)));
    // 0x2bfd6c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2BFD6Cu;
    {
        const bool branch_taken_0x2bfd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd6c) {
            ctx->pc = 0x2BFDA4u;
            goto label_2bfda4;
        }
    }
    ctx->pc = 0x2BFD74u;
    // 0x2bfd74: 0x8f839c5c  lw          $v1, -0x63A4($gp)
    ctx->pc = 0x2bfd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfd78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BFD78u;
    {
        const bool branch_taken_0x2bfd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD78u;
            // 0x2bfd7c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd78) {
            ctx->pc = 0x2BFDA4u;
            goto label_2bfda4;
        }
    }
    ctx->pc = 0x2BFD80u;
    // 0x2bfd80: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bfd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2bfd84: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2bfd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2bfd88: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2bfd8c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2BFD8Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD94u);
    ctx->pc = 0x2BFD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD8Cu;
            // 0x2bfd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD94u; }
        if (ctx->pc != 0x2BFD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD94u; }
        if (ctx->pc != 0x2BFD94u) { return; }
    }
    ctx->pc = 0x2BFD94u;
label_2bfd94:
    // 0x2bfd94: 0xc087898  jal         func_21E260
    ctx->pc = 0x2BFD94u;
    SET_GPR_U32(ctx, 31, 0x2BFD9Cu);
    ctx->pc = 0x2BFD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD94u;
            // 0x2bfd98: 0x8f849c5c  lw          $a0, -0x63A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD9Cu; }
        if (ctx->pc != 0x2BFD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD9Cu; }
        if (ctx->pc != 0x2BFD9Cu) { return; }
    }
    ctx->pc = 0x2BFD9Cu;
label_2bfd9c:
    // 0x2bfd9c: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2BFD9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFDA4u);
    ctx->pc = 0x2BFDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD9Cu;
            // 0x2bfda0: 0x8f849c5c  lw          $a0, -0x63A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFDA4u; }
        if (ctx->pc != 0x2BFDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFDA4u; }
        if (ctx->pc != 0x2BFDA4u) { return; }
    }
    ctx->pc = 0x2BFDA4u;
label_2bfda4:
    // 0x2bfda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bfda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDA8u;
            // 0x2bfdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFDB0u;
}
