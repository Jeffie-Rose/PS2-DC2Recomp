#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__7CPiyoriFP9mgCObjectffs
// Address: 0x1c9830 - 0x1c98c0
void Set__7CPiyoriFP9mgCObjectffs_0x1c9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__7CPiyoriFP9mgCObjectffs_0x1c9830");
#endif

    switch (ctx->pc) {
        case 0x1c9868u: goto label_1c9868;
        case 0x1c987cu: goto label_1c987c;
        default: break;
    }

    ctx->pc = 0x1c9830u;

    // 0x1c9830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c9838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c983c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c9840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9844: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C9844u;
    {
        const bool branch_taken_0x1c9844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9844u;
            // 0x1c9848: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9844) {
            ctx->pc = 0x1C98A8u;
            goto label_1c98a8;
        }
    }
    ctx->pc = 0x1C984Cu;
    // 0x1c984c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1c984cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1c9850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c9850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9854: 0xe64c0014  swc1        $f12, 0x14($s2)
    ctx->pc = 0x1c9854u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1c9858: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c985c: 0xe64d0018  swc1        $f13, 0x18($s2)
    ctx->pc = 0x1c985cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1c9860: 0xa646001c  sh          $a2, 0x1C($s2)
    ctx->pc = 0x1c9860u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c9864: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1c9864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1c9868:
    // 0x1c9868: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c9868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c986c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c9870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c9870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9874: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C9874u;
    SET_GPR_U32(ctx, 31, 0x1C987Cu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C987Cu; }
        if (ctx->pc != 0x1C987Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C987Cu; }
        if (ctx->pc != 0x1C987Cu) { return; }
    }
    ctx->pc = 0x1C987Cu;
label_1c987c:
    // 0x1c987c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c9880: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x1c9880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c9884: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c9884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c988c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c988cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9890: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c9890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c9894: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9898: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1c9898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c989c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C989Cu;
    {
        const bool branch_taken_0x1c989c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C989Cu;
            // 0x1c98a0: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c989c) {
            ctx->pc = 0x1C9868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9868;
        }
    }
    ctx->pc = 0x1C98A4u;
    // 0x1c98a4: 0xa640001e  sh          $zero, 0x1E($s2)
    ctx->pc = 0x1c98a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 0));
label_1c98a8:
    // 0x1c98a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c98a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c98ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c98acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c98b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c98b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c98b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c98b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C98B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98B8u;
            // 0x1c98bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C98C0u;
}
