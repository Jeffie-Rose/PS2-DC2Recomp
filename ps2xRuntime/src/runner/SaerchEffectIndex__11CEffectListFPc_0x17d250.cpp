#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaerchEffectIndex__11CEffectListFPc
// Address: 0x17d250 - 0x17d2d4
void SaerchEffectIndex__11CEffectListFPc_0x17d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaerchEffectIndex__11CEffectListFPc_0x17d250");
#endif

    switch (ctx->pc) {
        case 0x17d27cu: goto label_17d27c;
        case 0x17d28cu: goto label_17d28c;
        default: break;
    }

    ctx->pc = 0x17d250u;

    // 0x17d250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17d258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d25c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d260: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17d260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d268: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d270: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d274: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17D274u;
    {
        const bool branch_taken_0x17d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D274u;
            // 0x17d278: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d274) {
            ctx->pc = 0x17D2A4u;
            goto label_17d2a4;
        }
    }
    ctx->pc = 0x17D27Cu;
label_17d27c:
    // 0x17d27c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x17d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17d280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17d280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d284: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x17D284u;
    SET_GPR_U32(ctx, 31, 0x17D28Cu);
    ctx->pc = 0x17D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D284u;
            // 0x17d288: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D28Cu; }
        if (ctx->pc != 0x17D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D28Cu; }
        if (ctx->pc != 0x17D28Cu) { return; }
    }
    ctx->pc = 0x17D28Cu;
label_17d28c:
    // 0x17d28c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D28Cu;
    {
        const bool branch_taken_0x17d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D28Cu;
            // 0x17d290: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d28c) {
            ctx->pc = 0x17D29Cu;
            goto label_17d29c;
        }
    }
    ctx->pc = 0x17D294u;
    // 0x17d294: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D294u;
    {
        const bool branch_taken_0x17d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D294u;
            // 0x17d298: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d294) {
            ctx->pc = 0x17D2BCu;
            goto label_17d2bc;
        }
    }
    ctx->pc = 0x17D29Cu;
label_17d29c:
    // 0x17d29c: 0x26310184  addiu       $s1, $s1, 0x184
    ctx->pc = 0x17d29cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
    // 0x17d2a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17d2a4:
    // 0x17d2a4: 0x0  nop
    ctx->pc = 0x17d2a4u;
    // NOP
    // 0x17d2a8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x17d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17d2ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17d2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d2b0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17D2B0u;
    {
        const bool branch_taken_0x17d2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2B0u;
            // 0x17d2b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2b0) {
            ctx->pc = 0x17D27Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d27c;
        }
    }
    ctx->pc = 0x17D2B8u;
    // 0x17d2b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17d2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17d2bc:
    // 0x17d2bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d2bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d2c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d2c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d2c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2CCu;
            // 0x17d2d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D2D4u;
}
