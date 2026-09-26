#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEohFramePos__12CSceneObjSeqFiPciPf
// Address: 0x25cbe0 - 0x25cc64
void SetEohFramePos__12CSceneObjSeqFiPciPf_0x25cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEohFramePos__12CSceneObjSeqFiPciPf_0x25cbe0");
#endif

    switch (ctx->pc) {
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc44u: goto label_25cc44;
        default: break;
    }

    ctx->pc = 0x25cbe0u;

    // 0x25cbe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25cbe4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25cbe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25cbec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25cbf0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25cbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25cbf8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25cbf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cc00: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25cc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc04: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x25cc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc08: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CC08u;
    SET_GPR_U32(ctx, 31, 0x25CC10u);
    ctx->pc = 0x25CC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC08u;
            // 0x25cc0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC10u; }
        if (ctx->pc != 0x25CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC10u; }
        if (ctx->pc != 0x25CC10u) { return; }
    }
    ctx->pc = 0x25CC10u;
label_25cc10:
    // 0x25cc10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cc10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc14: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x25CC14u;
    {
        const bool branch_taken_0x25cc14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc14) {
            ctx->pc = 0x25CC44u;
            goto label_25cc44;
        }
    }
    ctx->pc = 0x25CC1Cu;
    // 0x25cc1c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25cc20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25cc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25cc28: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x25cc2c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25CC2Cu;
    SET_GPR_U32(ctx, 31, 0x25CC34u);
    ctx->pc = 0x25CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC2Cu;
            // 0x25cc30: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC34u; }
        if (ctx->pc != 0x25CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC34u; }
        if (ctx->pc != 0x25CC34u) { return; }
    }
    ctx->pc = 0x25CC34u;
label_25cc34:
    // 0x25cc34: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25cc38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc3c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CC3Cu;
    SET_GPR_U32(ctx, 31, 0x25CC44u);
    ctx->pc = 0x25CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC3Cu;
            // 0x25cc40: 0xae120024  sw          $s2, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC44u; }
        if (ctx->pc != 0x25CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC44u; }
        if (ctx->pc != 0x25CC44u) { return; }
    }
    ctx->pc = 0x25CC44u;
label_25cc44:
    // 0x25cc44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25cc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cc48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25cc48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cc4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25cc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cc50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cc50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cc54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC5Cu;
            // 0x25cc60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CC64u;
}
