#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SlowLineVelo__Ff
// Address: 0x310890 - 0x310908
void SlowLineVelo__Ff_0x310890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SlowLineVelo__Ff_0x310890");
#endif

    switch (ctx->pc) {
        case 0x3108c0u: goto label_3108c0;
        case 0x3108dcu: goto label_3108dc;
        default: break;
    }

    ctx->pc = 0x310890u;

    // 0x310890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x310894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x310894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x310898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31089c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3108a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3108a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3108a4: 0x8f90a248  lw          $s0, -0x5DB8($gp)
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x3108a8: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x3108a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3108ac: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3108ACu;
    {
        const bool branch_taken_0x3108ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3108ACu;
            // 0x3108b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108ac) {
            ctx->pc = 0x3108ECu;
            goto label_3108ec;
        }
    }
    ctx->pc = 0x3108B4u;
    // 0x3108b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3108b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3108b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3108b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3108bc: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x3108bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3108c0:
    // 0x3108c0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3108c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3108c4: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x3108c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x3108c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3108c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3108cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3108ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3108d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3108d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3108d4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3108D4u;
    SET_GPR_U32(ctx, 31, 0x3108DCu);
    ctx->pc = 0x3108D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3108D4u;
            // 0x3108d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3108DCu; }
        if (ctx->pc != 0x3108DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3108DCu; }
        if (ctx->pc != 0x3108DCu) { return; }
    }
    ctx->pc = 0x3108DCu;
label_3108dc:
    // 0x3108dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3108dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3108e0: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x3108e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3108e4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3108E4u;
    {
        const bool branch_taken_0x3108e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3108E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3108E4u;
            // 0x3108e8: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108e4) {
            ctx->pc = 0x3108C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3108c0;
        }
    }
    ctx->pc = 0x3108ECu;
label_3108ec:
    // 0x3108ec: 0x0  nop
    ctx->pc = 0x3108ecu;
    // NOP
    // 0x3108f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3108f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3108f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3108f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3108f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3108f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3108fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3108fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310900: 0x3e00008  jr          $ra
    ctx->pc = 0x310900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310900u;
            // 0x310904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310908u;
}
