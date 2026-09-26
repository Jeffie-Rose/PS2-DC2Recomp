#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNumberKeta__Fi
// Address: 0x2516c0 - 0x25171c
void GetNumberKeta__Fi_0x2516c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNumberKeta__Fi_0x2516c0");
#endif

    switch (ctx->pc) {
        case 0x2516d4u: goto label_2516d4;
        case 0x2516e4u: goto label_2516e4;
        default: break;
    }

    ctx->pc = 0x2516c0u;

    // 0x2516c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2516c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2516c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2516c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2516c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2516c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2516cc: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x2516CCu;
    SET_GPR_U32(ctx, 31, 0x2516D4u);
    ctx->pc = 0x2516D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2516CCu;
            // 0x2516d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2516D4u; }
        if (ctx->pc != 0x2516D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2516D4u; }
        if (ctx->pc != 0x2516D4u) { return; }
    }
    ctx->pc = 0x2516D4u;
label_2516d4:
    // 0x2516d4: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x2516d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2516d8: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2516D8u;
    {
        const bool branch_taken_0x2516d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2516DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2516D8u;
            // 0x2516dc: 0x3c036666  lui         $v1, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516d8) {
            ctx->pc = 0x251708u;
            goto label_251708;
        }
    }
    ctx->pc = 0x2516E0u;
    // 0x2516e0: 0x34646667  ori         $a0, $v1, 0x6667
    ctx->pc = 0x2516e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_2516e4:
    // 0x2516e4: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x2516e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2516e8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2516e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2516ec: 0x0  nop
    ctx->pc = 0x2516ecu;
    // NOP
    // 0x2516f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2516f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2516f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2516f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2516f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2516f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2516fc: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x2516fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x251700: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251700u;
    {
        const bool branch_taken_0x251700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251700u;
            // 0x251704: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251700) {
            ctx->pc = 0x2516E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2516e4;
        }
    }
    ctx->pc = 0x251708u;
label_251708:
    // 0x251708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x251708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25170c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251714: 0x3e00008  jr          $ra
    ctx->pc = 0x251714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251714u;
            // 0x251718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25171Cu;
}
