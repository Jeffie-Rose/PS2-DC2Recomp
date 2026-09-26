#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEvent__13CRandomCircleFPf
// Address: 0x28c020 - 0x28c0cc
void CheckEvent__13CRandomCircleFPf_0x28c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEvent__13CRandomCircleFPf_0x28c020");
#endif

    switch (ctx->pc) {
        case 0x28c050u: goto label_28c050;
        case 0x28c068u: goto label_28c068;
        default: break;
    }

    ctx->pc = 0x28c020u;

    // 0x28c020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28c024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28c028: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28c02c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c030: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28c030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c034: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c038: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28c038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c03c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c040: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28c040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c04c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c050:
    // 0x28c050: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x28c050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28c054: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x28c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x28c058: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C058u;
    {
        const bool branch_taken_0x28c058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C058u;
            // 0x28c05c: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c058) {
            ctx->pc = 0x28C090u;
            goto label_28c090;
        }
    }
    ctx->pc = 0x28C060u;
    // 0x28c060: 0xc04c018  jal         func_130060
    ctx->pc = 0x28C060u;
    SET_GPR_U32(ctx, 31, 0x28C068u);
    ctx->pc = 0x28C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C060u;
            // 0x28c064: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C068u; }
        if (ctx->pc != 0x28C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C068u; }
        if (ctx->pc != 0x28C068u) { return; }
    }
    ctx->pc = 0x28C068u;
label_28c068:
    // 0x28c068: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x28c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x28c06c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c070: 0x0  nop
    ctx->pc = 0x28c070u;
    // NOP
    // 0x28c074: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28c074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c078: 0x0  nop
    ctx->pc = 0x28c078u;
    // NOP
    // 0x28c07c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28C07Cu;
    {
        const bool branch_taken_0x28c07c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c07c) {
            ctx->pc = 0x28C090u;
            goto label_28c090;
        }
    }
    ctx->pc = 0x28C084u;
    // 0x28c084: 0xae90003c  sw          $s0, 0x3C($s4)
    ctx->pc = 0x28c084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 16));
    // 0x28c088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C088u;
    {
        const bool branch_taken_0x28c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C088u;
            // 0x28c08c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c088) {
            ctx->pc = 0x28C0ACu;
            goto label_28c0ac;
        }
    }
    ctx->pc = 0x28C090u;
label_28c090:
    // 0x28c090: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c094: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28c094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x28c098: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x28c098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28c09c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28C09Cu;
    {
        const bool branch_taken_0x28c09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C09Cu;
            // 0x28c0a0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c09c) {
            ctx->pc = 0x28C050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c050;
        }
    }
    ctx->pc = 0x28C0A4u;
    // 0x28c0a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c0a8: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x28c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_28c0ac:
    // 0x28c0ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c0b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c0b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c0b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c0b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c0b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c0bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c0c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x28C0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0C4u;
            // 0x28c0c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C0CCu;
}
