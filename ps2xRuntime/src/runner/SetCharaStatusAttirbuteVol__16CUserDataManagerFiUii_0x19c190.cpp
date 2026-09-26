#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharaStatusAttirbuteVol__16CUserDataManagerFiUii
// Address: 0x19c190 - 0x19c2b4
void SetCharaStatusAttirbuteVol__16CUserDataManagerFiUii_0x19c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharaStatusAttirbuteVol__16CUserDataManagerFiUii_0x19c190");
#endif

    switch (ctx->pc) {
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c270u: goto label_19c270;
        default: break;
    }

    ctx->pc = 0x19c190u;

    // 0x19c190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19c194: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19c198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19c198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19c19c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c1a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19c1a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c1a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19c1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c1b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19c1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19c1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c1bc: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x19C1BCu;
    SET_GPR_U32(ctx, 31, 0x19C1C4u);
    ctx->pc = 0x19C1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1BCu;
            // 0x19c1c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1C4u; }
        if (ctx->pc != 0x19C1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1C4u; }
        if (ctx->pc != 0x19C1C4u) { return; }
    }
    ctx->pc = 0x19C1C4u;
label_19c1c4:
    // 0x19c1c4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C1C4u;
    {
        const bool branch_taken_0x19c1c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1C4u;
            // 0x19c1c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1c4) {
            ctx->pc = 0x19C1D8u;
            goto label_19c1d8;
        }
    }
    ctx->pc = 0x19C1CCu;
    // 0x19c1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c1d0: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19C1D0u;
    {
        const bool branch_taken_0x19c1d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1D0u;
            // 0x19c1d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1d0) {
            ctx->pc = 0x19C21Cu;
            goto label_19c21c;
        }
    }
    ctx->pc = 0x19C1D8u;
label_19c1d8:
    // 0x19c1d8: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C1D8u;
    {
        const bool branch_taken_0x19c1d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1D8u;
            // 0x19c1dc: 0x268342d4  addiu       $v1, $s4, 0x42D4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1d8) {
            ctx->pc = 0x19C1E4u;
            goto label_19c1e4;
        }
    }
    ctx->pc = 0x19C1E0u;
    // 0x19c1e0: 0x26833f48  addiu       $v1, $s4, 0x3F48
    ctx->pc = 0x19c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16200));
label_19c1e4:
    // 0x19c1e4: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x19c1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x19c1e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C1E8u;
    {
        const bool branch_taken_0x19c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1E8u;
            // 0x19c1ec: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1e8) {
            ctx->pc = 0x19C1F4u;
            goto label_19c1f4;
        }
    }
    ctx->pc = 0x19C1F0u;
    // 0x19c1f0: 0xa471000c  sh          $s1, 0xC($v1)
    ctx->pc = 0x19c1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 17));
label_19c1f4:
    // 0x19c1f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C1F4u;
    {
        const bool branch_taken_0x19c1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1F4u;
            // 0x19c1f8: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1f4) {
            ctx->pc = 0x19C200u;
            goto label_19c200;
        }
    }
    ctx->pc = 0x19C1FCu;
    // 0x19c1fc: 0xa471000e  sh          $s1, 0xE($v1)
    ctx->pc = 0x19c1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 17));
label_19c200:
    // 0x19c200: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C200u;
    {
        const bool branch_taken_0x19c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C200u;
            // 0x19c204: 0x32420020  andi        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c200) {
            ctx->pc = 0x19C20Cu;
            goto label_19c20c;
        }
    }
    ctx->pc = 0x19C208u;
    // 0x19c208: 0xa4710010  sh          $s1, 0x10($v1)
    ctx->pc = 0x19c208u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 17));
label_19c20c:
    // 0x19c20c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C20Cu;
    {
        const bool branch_taken_0x19c20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c20c) {
            ctx->pc = 0x19C218u;
            goto label_19c218;
        }
    }
    ctx->pc = 0x19C214u;
    // 0x19c214: 0xa4710012  sh          $s1, 0x12($v1)
    ctx->pc = 0x19c214u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 17));
label_19c218:
    // 0x19c218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c21c:
    // 0x19c21c: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19C21Cu;
    {
        const bool branch_taken_0x19c21c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C21Cu;
            // 0x19c220: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c21c) {
            ctx->pc = 0x19C254u;
            goto label_19c254;
        }
    }
    ctx->pc = 0x19C224u;
    // 0x19c224: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x19c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x19c228: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C228u;
    {
        const bool branch_taken_0x19c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C228u;
            // 0x19c22c: 0x26834660  addiu       $v1, $s4, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 18016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c228) {
            ctx->pc = 0x19C234u;
            goto label_19c234;
        }
    }
    ctx->pc = 0x19C230u;
    // 0x19c230: 0xa47101e0  sh          $s1, 0x1E0($v1)
    ctx->pc = 0x19c230u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 480), (uint16_t)GPR_U32(ctx, 17));
label_19c234:
    // 0x19c234: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x19c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x19c238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C238u;
    {
        const bool branch_taken_0x19c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C238u;
            // 0x19c23c: 0x32420020  andi        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c238) {
            ctx->pc = 0x19C244u;
            goto label_19c244;
        }
    }
    ctx->pc = 0x19C240u;
    // 0x19c240: 0xa47101e2  sh          $s1, 0x1E2($v1)
    ctx->pc = 0x19c240u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 482), (uint16_t)GPR_U32(ctx, 17));
label_19c244:
    // 0x19c244: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C244u;
    {
        const bool branch_taken_0x19c244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c244) {
            ctx->pc = 0x19C250u;
            goto label_19c250;
        }
    }
    ctx->pc = 0x19C24Cu;
    // 0x19c24c: 0xa47101e4  sh          $s1, 0x1E4($v1)
    ctx->pc = 0x19c24cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 484), (uint16_t)GPR_U32(ctx, 17));
label_19c250:
    // 0x19c250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19c254:
    // 0x19c254: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19C254u;
    {
        const bool branch_taken_0x19c254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C254u;
            // 0x19c258: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c254) {
            ctx->pc = 0x19C294u;
            goto label_19c294;
        }
    }
    ctx->pc = 0x19C25Cu;
    // 0x19c25c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19c260: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19c260u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19c264: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x19c268: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x19C268u;
    SET_GPR_U32(ctx, 31, 0x19C270u);
    ctx->pc = 0x19C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C268u;
            // 0x19c26c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C270u; }
        if (ctx->pc != 0x19C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C270u; }
        if (ctx->pc != 0x19C270u) { return; }
    }
    ctx->pc = 0x19C270u;
label_19c270:
    // 0x19c270: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C270u;
    {
        const bool branch_taken_0x19c270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C270u;
            // 0x19c274: 0x32430010  andi        $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c270) {
            ctx->pc = 0x19C290u;
            goto label_19c290;
        }
    }
    ctx->pc = 0x19C278u;
    // 0x19c278: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C278u;
    {
        const bool branch_taken_0x19c278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C278u;
            // 0x19c27c: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c278) {
            ctx->pc = 0x19C284u;
            goto label_19c284;
        }
    }
    ctx->pc = 0x19C280u;
    // 0x19c280: 0xa451003e  sh          $s1, 0x3E($v0)
    ctx->pc = 0x19c280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 17));
label_19c284:
    // 0x19c284: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C284u;
    {
        const bool branch_taken_0x19c284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c284) {
            ctx->pc = 0x19C290u;
            goto label_19c290;
        }
    }
    ctx->pc = 0x19C28Cu;
    // 0x19c28c: 0xa451003c  sh          $s1, 0x3C($v0)
    ctx->pc = 0x19c28cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 17));
label_19c290:
    // 0x19c290: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c294:
    // 0x19c294: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19c294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c298: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c29c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c2a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19C2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2ACu;
            // 0x19c2b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C2B4u;
}
