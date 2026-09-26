#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTalkRect__13CVillagerMngrFiPf
// Address: 0x2cdd10 - 0x2cddb0
void GetTalkRect__13CVillagerMngrFiPf_0x2cdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTalkRect__13CVillagerMngrFiPf_0x2cdd10");
#endif

    switch (ctx->pc) {
        case 0x2cdd30u: goto label_2cdd30;
        case 0x2cdd48u: goto label_2cdd48;
        case 0x2cdd7cu: goto label_2cdd7c;
        default: break;
    }

    ctx->pc = 0x2cdd10u;

    // 0x2cdd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cdd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cdd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cdd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cdd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdd20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cdd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd24: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2cdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2cdd28: 0xc0b34e0  jal         func_2CD380
    ctx->pc = 0x2CDD28u;
    SET_GPR_U32(ctx, 31, 0x2CDD30u);
    ctx->pc = 0x2CDD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD28u;
            // 0x2cdd2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD380u;
    if (runtime->hasFunction(0x2CD380u)) {
        auto targetFn = runtime->lookupFunction(0x2CD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD30u; }
        if (ctx->pc != 0x2CDD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchDataIDatCharaID__13CVillagerMngrFi_0x2cd380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD30u; }
        if (ctx->pc != 0x2CDD30u) { return; }
    }
    ctx->pc = 0x2CDD30u;
label_2cdd30:
    // 0x2cdd30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD30u;
    {
        const bool branch_taken_0x2cdd30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CDD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD30u;
            // 0x2cdd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd30) {
            ctx->pc = 0x2CDD40u;
            goto label_2cdd40;
        }
    }
    ctx->pc = 0x2CDD38u;
    // 0x2cdd38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CDD38u;
    {
        const bool branch_taken_0x2cdd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD38u;
            // 0x2cdd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd38) {
            ctx->pc = 0x2CDD9Cu;
            goto label_2cdd9c;
        }
    }
    ctx->pc = 0x2CDD40u;
label_2cdd40:
    // 0x2cdd40: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CDD40u;
    SET_GPR_U32(ctx, 31, 0x2CDD48u);
    ctx->pc = 0x2CDD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD40u;
            // 0x2cdd44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD48u; }
        if (ctx->pc != 0x2CDD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD48u; }
        if (ctx->pc != 0x2CDD48u) { return; }
    }
    ctx->pc = 0x2CDD48u;
label_2cdd48:
    // 0x2cdd48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD48u;
    {
        const bool branch_taken_0x2cdd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd48) {
            ctx->pc = 0x2CDD58u;
            goto label_2cdd58;
        }
    }
    ctx->pc = 0x2CDD50u;
    // 0x2cdd50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CDD50u;
    {
        const bool branch_taken_0x2cdd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD50u;
            // 0x2cdd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd50) {
            ctx->pc = 0x2CDD9Cu;
            goto label_2cdd9c;
        }
    }
    ctx->pc = 0x2CDD58u;
label_2cdd58:
    // 0x2cdd58: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2cdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cdd5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD5Cu;
    {
        const bool branch_taken_0x2cdd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd5c) {
            ctx->pc = 0x2CDD6Cu;
            goto label_2cdd6c;
        }
    }
    ctx->pc = 0x2CDD64u;
    // 0x2cdd64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CDD64u;
    {
        const bool branch_taken_0x2cdd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD64u;
            // 0x2cdd68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd64) {
            ctx->pc = 0x2CDD9Cu;
            goto label_2cdd9c;
        }
    }
    ctx->pc = 0x2CDD6Cu;
label_2cdd6c:
    // 0x2cdd6c: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2cdd6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cdd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd74: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2CDD74u;
    SET_GPR_U32(ctx, 31, 0x2CDD7Cu);
    ctx->pc = 0x2CDD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD74u;
            // 0x2cdd78: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD7Cu; }
        if (ctx->pc != 0x2CDD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD7Cu; }
        if (ctx->pc != 0x2CDD7Cu) { return; }
    }
    ctx->pc = 0x2CDD7Cu;
label_2cdd7c:
    // 0x2cdd7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cdd7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdd80: 0x0  nop
    ctx->pc = 0x2cdd80u;
    // NOP
    // 0x2cdd84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cdd84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cdd88: 0x0  nop
    ctx->pc = 0x2cdd88u;
    // NOP
    // 0x2cdd8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CDD8Cu;
    {
        const bool branch_taken_0x2cdd8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD8Cu;
            // 0x2cdd90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd8c) {
            ctx->pc = 0x2CDD98u;
            goto label_2cdd98;
        }
    }
    ctx->pc = 0x2CDD94u;
    // 0x2cdd94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdd98:
    // 0x2cdd98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cdd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cdd9c:
    // 0x2cdd9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cdd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cdda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cdda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDDA8u;
            // 0x2cddac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDDB0u;
}
