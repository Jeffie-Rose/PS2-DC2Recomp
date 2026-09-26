#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsBattleStyleDist__11CMonsterManFv
// Address: 0x1db210 - 0x1db328
void IsBattleStyleDist__11CMonsterManFv_0x1db210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsBattleStyleDist__11CMonsterManFv_0x1db210");
#endif

    switch (ctx->pc) {
        case 0x1db238u: goto label_1db238;
        case 0x1db270u: goto label_1db270;
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2bcu: goto label_1db2bc;
        default: break;
    }

    ctx->pc = 0x1db210u;

    // 0x1db210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1db214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1db214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1db218: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1db218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1db21c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1db21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1db220: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1db220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1db224: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1db228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1db22c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db230: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1DB230u;
    SET_GPR_U32(ctx, 31, 0x1DB238u);
    ctx->pc = 0x1DB234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB230u;
            // 0x1db234: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB238u; }
        if (ctx->pc != 0x1DB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB238u; }
        if (ctx->pc != 0x1DB238u) { return; }
    }
    ctx->pc = 0x1DB238u;
label_1db238:
    // 0x1db238: 0x8f838da0  lw          $v1, -0x7260($gp)
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1db23c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1db23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1db240: 0x84510002  lh          $s1, 0x2($v0)
    ctx->pc = 0x1db240u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1db244: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1db244u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1db248: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1db248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x1db24c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db250: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB250u;
    {
        const bool branch_taken_0x1db250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB250u;
            // 0x1db254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db250) {
            ctx->pc = 0x1DB264u;
            goto label_1db264;
        }
    }
    ctx->pc = 0x1DB258u;
    // 0x1db258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db25c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB25Cu;
    {
        const bool branch_taken_0x1db25c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB25Cu;
            // 0x1db260: 0x3c024974  lui         $v0, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db25c) {
            ctx->pc = 0x1DB294u;
            goto label_1db294;
        }
    }
    ctx->pc = 0x1DB264u;
label_1db264:
    // 0x1db264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db268: 0xc077434  jal         func_1DD0D0
    ctx->pc = 0x1DB268u;
    SET_GPR_U32(ctx, 31, 0x1DB270u);
    ctx->pc = 0x1DB26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB268u;
            // 0x1db26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0D0u;
    if (runtime->hasFunction(0x1DD0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB270u; }
        if (ctx->pc != 0x1DB270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPriorityLevelIndex__11CMonsterManFiPi_0x1dd0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB270u; }
        if (ctx->pc != 0x1DB270u) { return; }
    }
    ctx->pc = 0x1DB270u;
label_1db270:
    // 0x1db270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB270u;
    {
        const bool branch_taken_0x1db270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db270) {
            ctx->pc = 0x1DB280u;
            goto label_1db280;
        }
    }
    ctx->pc = 0x1DB278u;
    // 0x1db278: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1DB278u;
    {
        const bool branch_taken_0x1db278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB278u;
            // 0x1db27c: 0xc44012f4  lwc1        $f0, 0x12F4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db278) {
            ctx->pc = 0x1DB304u;
            goto label_1db304;
        }
    }
    ctx->pc = 0x1DB280u;
label_1db280:
    // 0x1db280: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1db280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x1db284: 0x344223f0  ori         $v0, $v0, 0x23F0
    ctx->pc = 0x1db284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x1db288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db28c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DB28Cu;
    {
        const bool branch_taken_0x1db28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB28Cu;
            // 0x1db290: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db28c) {
            ctx->pc = 0x1DB308u;
            goto label_1db308;
        }
    }
    ctx->pc = 0x1DB294u;
label_1db294:
    // 0x1db294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db298: 0x344223f0  ori         $v0, $v0, 0x23F0
    ctx->pc = 0x1db298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x1db29c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1db29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1db2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1db2a4:
    // 0x1db2a4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1db2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1db2a8: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1db2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1db2ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB2ACu;
    {
        const bool branch_taken_0x1db2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2ACu;
            // 0x1db2b0: 0x24540484  addiu       $s4, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2ac) {
            ctx->pc = 0x1DB2F0u;
            goto label_1db2f0;
        }
    }
    ctx->pc = 0x1DB2B4u;
    // 0x1db2b4: 0xc0766cc  jal         func_1D9B30
    ctx->pc = 0x1DB2B4u;
    SET_GPR_U32(ctx, 31, 0x1DB2BCu);
    ctx->pc = 0x1DB2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2B4u;
            // 0x1db2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B30u;
    if (runtime->hasFunction(0x1D9B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2BCu; }
        if (ctx->pc != 0x1DB2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsDraw__14CActiveMonsterFi_0x1d9b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2BCu; }
        if (ctx->pc != 0x1DB2BCu) { return; }
    }
    ctx->pc = 0x1DB2BCu;
label_1db2bc:
    // 0x1db2bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB2BCu;
    {
        const bool branch_taken_0x1db2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db2bc) {
            ctx->pc = 0x1DB2F0u;
            goto label_1db2f0;
        }
    }
    ctx->pc = 0x1DB2C4u;
    // 0x1db2c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1db2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1db2c8: 0x8c621150  lw          $v0, 0x1150($v1)
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4432)));
    // 0x1db2cc: 0x80420054  lb          $v0, 0x54($v0)
    ctx->pc = 0x1db2ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1db2d0: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB2D0u;
    {
        const bool branch_taken_0x1db2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1db2d0) {
            ctx->pc = 0x1DB2F0u;
            goto label_1db2f0;
        }
    }
    ctx->pc = 0x1DB2D8u;
    // 0x1db2d8: 0xc46012f4  lwc1        $f0, 0x12F4($v1)
    ctx->pc = 0x1db2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2dc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1db2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db2e0: 0x0  nop
    ctx->pc = 0x1db2e0u;
    // NOP
    // 0x1db2e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB2E4u;
    {
        const bool branch_taken_0x1db2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db2e4) {
            ctx->pc = 0x1DB2F0u;
            goto label_1db2f0;
        }
    }
    ctx->pc = 0x1DB2ECu;
    // 0x1db2ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db2ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1db2f0:
    // 0x1db2f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1db2f4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1db2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1db2f8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DB2F8u;
    {
        const bool branch_taken_0x1db2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2F8u;
            // 0x1db2fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2f8) {
            ctx->pc = 0x1DB2A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db2a4;
        }
    }
    ctx->pc = 0x1DB300u;
    // 0x1db300: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1db300u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1db304:
    // 0x1db304: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1db304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1db308:
    // 0x1db308: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1db308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db30c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db30cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db310: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1db310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db314: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1db314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1db318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db31c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db320: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB320u;
            // 0x1db324: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB328u;
}
