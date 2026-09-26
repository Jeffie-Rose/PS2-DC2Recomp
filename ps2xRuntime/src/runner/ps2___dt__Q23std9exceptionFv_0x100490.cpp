#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __dt__Q23std9exceptionFv
// Address: 0x100490 - 0x1004dc
void ps2___dt__Q23std9exceptionFv_0x100490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dt__Q23std9exceptionFv_0x100490");
#endif

    switch (ctx->pc) {
        case 0x1004c8u: goto label_1004c8;
        default: break;
    }

    ctx->pc = 0x100490u;

    // 0x100490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10049c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10049cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1004A0u;
    {
        const bool branch_taken_0x1004a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004A0u;
            // 0x1004a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004a0) {
            ctx->pc = 0x1004CCu;
            goto label_1004cc;
        }
    }
    ctx->pc = 0x1004A8u;
    // 0x1004a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1004a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1004ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1004acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1004b0: 0x24634e40  addiu       $v1, $v1, 0x4E40
    ctx->pc = 0x1004b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20032));
    // 0x1004b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1004b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1004b8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1004B8u;
    {
        const bool branch_taken_0x1004b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1004BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004B8u;
            // 0x1004bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004b8) {
            ctx->pc = 0x1004C8u;
            goto label_1004c8;
        }
    }
    ctx->pc = 0x1004C0u;
    // 0x1004c0: 0xc040110  jal         func_100440
    ctx->pc = 0x1004C0u;
    SET_GPR_U32(ctx, 31, 0x1004C8u);
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004C8u; }
        if (ctx->pc != 0x1004C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dl__FPv_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004C8u; }
        if (ctx->pc != 0x1004C8u) { return; }
    }
    ctx->pc = 0x1004C8u;
label_1004c8:
    // 0x1004c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1004c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1004cc:
    // 0x1004cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1004ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1004d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1004d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1004D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004D4u;
            // 0x1004d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1004DCu;
}
