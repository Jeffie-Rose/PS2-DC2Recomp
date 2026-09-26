#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ANGLE_LIMIT__FP12RS_STACKDATAi
// Address: 0x2e3930 - 0x2e397c
void ps2__ANGLE_LIMIT__FP12RS_STACKDATAi_0x2e3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ANGLE_LIMIT__FP12RS_STACKDATAi_0x2e3930");
#endif

    switch (ctx->pc) {
        case 0x2e395cu: goto label_2e395c;
        case 0x2e3968u: goto label_2e3968;
        default: break;
    }

    ctx->pc = 0x2e3930u;

    // 0x2e3930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e393c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3940: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3940u;
    {
        const bool branch_taken_0x2e3940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3940u;
            // 0x2e3944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3940) {
            ctx->pc = 0x2E3950u;
            goto label_2e3950;
        }
    }
    ctx->pc = 0x2E3948u;
    // 0x2e3948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3948u;
    {
        const bool branch_taken_0x2e3948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3948u;
            // 0x2e394c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3948) {
            ctx->pc = 0x2E396Cu;
            goto label_2e396c;
        }
    }
    ctx->pc = 0x2E3950u;
label_2e3950:
    // 0x2e3950: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e3950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e3954: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E3954u;
    SET_GPR_U32(ctx, 31, 0x2E395Cu);
    ctx->pc = 0x2E3958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3954u;
            // 0x2e3958: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E395Cu; }
        if (ctx->pc != 0x2E395Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E395Cu; }
        if (ctx->pc != 0x2E395Cu) { return; }
    }
    ctx->pc = 0x2E395Cu;
label_2e395c:
    // 0x2e395c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3960: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3960u;
    SET_GPR_U32(ctx, 31, 0x2E3968u);
    ctx->pc = 0x2E3964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3960u;
            // 0x2e3964: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3968u; }
        if (ctx->pc != 0x2E3968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3968u; }
        if (ctx->pc != 0x2E3968u) { return; }
    }
    ctx->pc = 0x2E3968u;
label_2e3968:
    // 0x2e3968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e396c:
    // 0x2e396c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3974: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3974u;
            // 0x2e3978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E397Cu;
}
