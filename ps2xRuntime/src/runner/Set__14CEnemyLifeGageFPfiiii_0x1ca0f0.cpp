#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__14CEnemyLifeGageFPfiiii
// Address: 0x1ca0f0 - 0x1ca190
void Set__14CEnemyLifeGageFPfiiii_0x1ca0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__14CEnemyLifeGageFPfiiii_0x1ca0f0");
#endif

    switch (ctx->pc) {
        case 0x1ca124u: goto label_1ca124;
        case 0x1ca140u: goto label_1ca140;
        default: break;
    }

    ctx->pc = 0x1ca0f0u;

    // 0x1ca0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ca0f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ca0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ca0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ca0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ca0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ca100: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ca100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca104: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca108: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ca108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca10c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca110: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ca110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca118: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1ca118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca11c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1CA11Cu;
    SET_GPR_U32(ctx, 31, 0x1CA124u);
    ctx->pc = 0x1CA120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA11Cu;
            // 0x1ca120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA124u; }
        if (ctx->pc != 0x1CA124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA124u; }
        if (ctx->pc != 0x1CA124u) { return; }
    }
    ctx->pc = 0x1CA124u;
label_1ca124:
    // 0x1ca124: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1ca124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1ca128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca12c: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x1ca12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x1ca130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca134: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1ca134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x1ca138: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ca13c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca140:
    // 0x1ca140: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1ca140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ca144: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA144u;
    {
        const bool branch_taken_0x1ca144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA144u;
            // 0x1ca148: 0x2074021  addu        $t0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca144) {
            ctx->pc = 0x1CA160u;
            goto label_1ca160;
        }
    }
    ctx->pc = 0x1CA14Cu;
    // 0x1ca14c: 0x81030024  lb          $v1, 0x24($t0)
    ctx->pc = 0x1ca14cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1ca150: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA150u;
    {
        const bool branch_taken_0x1ca150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA150u;
            // 0x1ca154: 0x25090024  addiu       $t1, $t0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca150) {
            ctx->pc = 0x1CA160u;
            goto label_1ca160;
        }
    }
    ctx->pc = 0x1CA158u;
    // 0x1ca158: 0xa1000025  sb          $zero, 0x25($t0)
    ctx->pc = 0x1ca158u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca15c: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x1ca15cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
label_1ca160:
    // 0x1ca160: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ca160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ca164: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x1ca164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ca168: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CA168u;
    {
        const bool branch_taken_0x1ca168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA168u;
            // 0x1ca16c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca168) {
            ctx->pc = 0x1CA140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca140;
        }
    }
    ctx->pc = 0x1CA170u;
    // 0x1ca170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ca170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ca174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ca178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca17c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca188: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA188u;
            // 0x1ca18c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA190u;
}
