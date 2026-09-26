#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PictureSeiton__FP17USER_PICTURE_INFOPci
// Address: 0x1fe200 - 0x1fe558
void PictureSeiton__FP17USER_PICTURE_INFOPci_0x1fe200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PictureSeiton__FP17USER_PICTURE_INFOPci_0x1fe200");
#endif

    switch (ctx->pc) {
        case 0x1fe250u: goto label_1fe250;
        case 0x1fe27cu: goto label_1fe27c;
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe478u: goto label_1fe478;
        case 0x1fe488u: goto label_1fe488;
        case 0x1fe498u: goto label_1fe498;
        case 0x1fe4a8u: goto label_1fe4a8;
        case 0x1fe4b8u: goto label_1fe4b8;
        default: break;
    }

    ctx->pc = 0x1fe200u;

    // 0x1fe200: 0x27bddf30  addiu       $sp, $sp, -0x20D0
    ctx->pc = 0x1fe200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958896));
    // 0x1fe204: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fe204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fe208: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1fe208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1fe20c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fe20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1fe210: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fe210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fe214: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fe214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fe218: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fe218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe21c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fe21cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fe220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe230: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1fe230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x1fe234: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1fe234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1fe238: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x1FE238u;
    {
        const bool branch_taken_0x1fe238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE238u;
            // 0x1fe23c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe238) {
            ctx->pc = 0x1FE528u;
            goto label_1fe528;
        }
    }
    ctx->pc = 0x1FE240u;
    // 0x1fe240: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1fe240u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1fe244: 0x102000b0  beqz        $at, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1FE244u;
    {
        const bool branch_taken_0x1fe244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE244u;
            // 0x1fe248: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe244) {
            ctx->pc = 0x1FE508u;
            goto label_1fe508;
        }
    }
    ctx->pc = 0x1FE24Cu;
    // 0x1fe24c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1fe24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1fe250:
    // 0x1fe250: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x1fe250u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe254: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe258: 0x2f5082a  slt         $at, $s7, $s5
    ctx->pc = 0x1fe258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1fe25c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1fe25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe260: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1fe260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1fe264: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1FE264u;
    {
        const bool branch_taken_0x1fe264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE264u;
            // 0x1fe268: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe264) {
            ctx->pc = 0x1FE4F4u;
            goto label_1fe4f4;
        }
    }
    ctx->pc = 0x1FE26Cu;
    // 0x1fe26c: 0x171840  sll         $v1, $s7, 1
    ctx->pc = 0x1fe26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x1fe270: 0x17b340  sll         $s6, $s7, 13
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 13));
    // 0x1fe274: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x1fe274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1fe278: 0x3f0c0  sll         $fp, $v1, 3
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fe27c:
    // 0x1fe27c: 0x0  nop
    ctx->pc = 0x1fe27cu;
    // NOP
    // 0x1fe280: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1fe280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1fe284: 0x7e9021  addu        $s2, $v1, $fp
    ctx->pc = 0x1fe284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1fe288: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe28c: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1FE28Cu;
    {
        const bool branch_taken_0x1fe28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe28c) {
            ctx->pc = 0x1FE4E0u;
            goto label_1fe4e0;
        }
    }
    ctx->pc = 0x1FE294u;
    // 0x1fe294: 0x838490e4  lb          $a0, -0x6F1C($gp)
    ctx->pc = 0x1fe294u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938852)));
    // 0x1fe298: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FE298u;
    {
        const bool branch_taken_0x1fe298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE298u;
            // 0x1fe29c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe298) {
            ctx->pc = 0x1FE300u;
            goto label_1fe300;
        }
    }
    ctx->pc = 0x1FE2A0u;
    // 0x1fe2a0: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x1fe2a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe2a4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE2A4u;
    {
        const bool branch_taken_0x1fe2a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2A4u;
            // 0x1fe2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2a4) {
            ctx->pc = 0x1FE2B8u;
            goto label_1fe2b8;
        }
    }
    ctx->pc = 0x1FE2ACu;
    // 0x1fe2ac: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE2ACu;
    {
        const bool branch_taken_0x1fe2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fe2ac) {
            ctx->pc = 0x1FE2B8u;
            goto label_1fe2b8;
        }
    }
    ctx->pc = 0x1FE2B4u;
    // 0x1fe2b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fe2b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2b8:
    // 0x1fe2b8: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1fe2bc: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE2BCu;
    {
        const bool branch_taken_0x1fe2bc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fe2bc) {
            ctx->pc = 0x1FE2D8u;
            goto label_1fe2d8;
        }
    }
    ctx->pc = 0x1FE2C4u;
    // 0x1fe2c4: 0x8645000a  lh          $a1, 0xA($s2)
    ctx->pc = 0x1fe2c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1fe2c8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1fe2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe2cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE2CCu;
    {
        const bool branch_taken_0x1fe2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2cc) {
            ctx->pc = 0x1FE2D8u;
            goto label_1fe2d8;
        }
    }
    ctx->pc = 0x1FE2D4u;
    // 0x1fe2d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe2d8:
    // 0x1fe2d8: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x1fe2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fe2dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE2DCu;
    {
        const bool branch_taken_0x1fe2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2dc) {
            ctx->pc = 0x1FE300u;
            goto label_1fe300;
        }
    }
    ctx->pc = 0x1FE2E4u;
    // 0x1fe2e4: 0x8645000a  lh          $a1, 0xA($s2)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1fe2e8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1fe2e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe2ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE2ECu;
    {
        const bool branch_taken_0x1fe2ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE2ECu;
            // 0x1fe2f0: 0xa6082a  slt         $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2ec) {
            ctx->pc = 0x1FE300u;
            goto label_1fe300;
        }
    }
    ctx->pc = 0x1FE2F4u;
    // 0x1fe2f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE2F4u;
    {
        const bool branch_taken_0x1fe2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2f4) {
            ctx->pc = 0x1FE300u;
            goto label_1fe300;
        }
    }
    ctx->pc = 0x1FE2FCu;
    // 0x1fe2fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe2fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe300:
    // 0x1fe300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe304: 0x1486001a  bne         $a0, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE304u;
    {
        const bool branch_taken_0x1fe304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1fe304) {
            ctx->pc = 0x1FE370u;
            goto label_1fe370;
        }
    }
    ctx->pc = 0x1FE30Cu;
    // 0x1fe30c: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe310: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE310u;
    {
        const bool branch_taken_0x1fe310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe310) {
            ctx->pc = 0x1FE324u;
            goto label_1fe324;
        }
    }
    ctx->pc = 0x1FE318u;
    // 0x1fe318: 0x14660002  bne         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE318u;
    {
        const bool branch_taken_0x1fe318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1fe318) {
            ctx->pc = 0x1FE324u;
            goto label_1fe324;
        }
    }
    ctx->pc = 0x1FE320u;
    // 0x1fe320: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fe320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe324:
    // 0x1fe324: 0x0  nop
    ctx->pc = 0x1fe324u;
    // NOP
    // 0x1fe328: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1fe32c: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE32Cu;
    {
        const bool branch_taken_0x1fe32c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fe32c) {
            ctx->pc = 0x1FE348u;
            goto label_1fe348;
        }
    }
    ctx->pc = 0x1FE334u;
    // 0x1fe334: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x1fe334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1fe338: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x1fe338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe33c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE33Cu;
    {
        const bool branch_taken_0x1fe33c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe33c) {
            ctx->pc = 0x1FE348u;
            goto label_1fe348;
        }
    }
    ctx->pc = 0x1FE344u;
    // 0x1fe344: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe348:
    // 0x1fe348: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x1fe348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe34c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE34Cu;
    {
        const bool branch_taken_0x1fe34c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe34c) {
            ctx->pc = 0x1FE370u;
            goto label_1fe370;
        }
    }
    ctx->pc = 0x1FE354u;
    // 0x1fe354: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x1fe354u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1fe358: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x1fe358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe35c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE35Cu;
    {
        const bool branch_taken_0x1fe35c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE35Cu;
            // 0x1fe360: 0xa6082a  slt         $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe35c) {
            ctx->pc = 0x1FE370u;
            goto label_1fe370;
        }
    }
    ctx->pc = 0x1FE364u;
    // 0x1fe364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE364u;
    {
        const bool branch_taken_0x1fe364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe364) {
            ctx->pc = 0x1FE370u;
            goto label_1fe370;
        }
    }
    ctx->pc = 0x1FE36Cu;
    // 0x1fe36c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe36cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe370:
    // 0x1fe370: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe374: 0x1485001a  bne         $a0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE374u;
    {
        const bool branch_taken_0x1fe374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fe374) {
            ctx->pc = 0x1FE3E0u;
            goto label_1fe3e0;
        }
    }
    ctx->pc = 0x1FE37Cu;
    // 0x1fe37c: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe380: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE380u;
    {
        const bool branch_taken_0x1fe380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE380u;
            // 0x1fe384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe380) {
            ctx->pc = 0x1FE394u;
            goto label_1fe394;
        }
    }
    ctx->pc = 0x1FE388u;
    // 0x1fe388: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE388u;
    {
        const bool branch_taken_0x1fe388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fe388) {
            ctx->pc = 0x1FE394u;
            goto label_1fe394;
        }
    }
    ctx->pc = 0x1FE390u;
    // 0x1fe390: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fe390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe394:
    // 0x1fe394: 0x0  nop
    ctx->pc = 0x1fe394u;
    // NOP
    // 0x1fe398: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x1fe398u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fe39c: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE39Cu;
    {
        const bool branch_taken_0x1fe39c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fe39c) {
            ctx->pc = 0x1FE3B8u;
            goto label_1fe3b8;
        }
    }
    ctx->pc = 0x1FE3A4u;
    // 0x1fe3a4: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fe3a8: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x1fe3a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe3ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE3ACu;
    {
        const bool branch_taken_0x1fe3ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3ac) {
            ctx->pc = 0x1FE3B8u;
            goto label_1fe3b8;
        }
    }
    ctx->pc = 0x1FE3B4u;
    // 0x1fe3b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe3b8:
    // 0x1fe3b8: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x1fe3b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe3bc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE3BCu;
    {
        const bool branch_taken_0x1fe3bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3bc) {
            ctx->pc = 0x1FE3E0u;
            goto label_1fe3e0;
        }
    }
    ctx->pc = 0x1FE3C4u;
    // 0x1fe3c4: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x1fe3c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fe3c8: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x1fe3c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe3cc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE3CCu;
    {
        const bool branch_taken_0x1fe3cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3CCu;
            // 0x1fe3d0: 0xa6082a  slt         $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3cc) {
            ctx->pc = 0x1FE3E0u;
            goto label_1fe3e0;
        }
    }
    ctx->pc = 0x1FE3D4u;
    // 0x1fe3d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE3D4u;
    {
        const bool branch_taken_0x1fe3d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3d4) {
            ctx->pc = 0x1FE3E0u;
            goto label_1fe3e0;
        }
    }
    ctx->pc = 0x1FE3DCu;
    // 0x1fe3dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe3dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe3e0:
    // 0x1fe3e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fe3e4: 0x1485001a  bne         $a0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE3E4u;
    {
        const bool branch_taken_0x1fe3e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fe3e4) {
            ctx->pc = 0x1FE450u;
            goto label_1fe450;
        }
    }
    ctx->pc = 0x1FE3ECu;
    // 0x1fe3ec: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1fe3ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe3f0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE3F0u;
    {
        const bool branch_taken_0x1fe3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3F0u;
            // 0x1fe3f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3f0) {
            ctx->pc = 0x1FE404u;
            goto label_1fe404;
        }
    }
    ctx->pc = 0x1FE3F8u;
    // 0x1fe3f8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE3F8u;
    {
        const bool branch_taken_0x1fe3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fe3f8) {
            ctx->pc = 0x1FE404u;
            goto label_1fe404;
        }
    }
    ctx->pc = 0x1FE400u;
    // 0x1fe400: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fe400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe404:
    // 0x1fe404: 0x0  nop
    ctx->pc = 0x1fe404u;
    // NOP
    // 0x1fe408: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1fe40c: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE40Cu;
    {
        const bool branch_taken_0x1fe40c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1fe40c) {
            ctx->pc = 0x1FE428u;
            goto label_1fe428;
        }
    }
    ctx->pc = 0x1FE414u;
    // 0x1fe414: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x1fe414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1fe418: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x1fe418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe41c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE41Cu;
    {
        const bool branch_taken_0x1fe41c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe41c) {
            ctx->pc = 0x1FE428u;
            goto label_1fe428;
        }
    }
    ctx->pc = 0x1FE424u;
    // 0x1fe424: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe428:
    // 0x1fe428: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x1fe428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe42c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE42Cu;
    {
        const bool branch_taken_0x1fe42c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe42c) {
            ctx->pc = 0x1FE450u;
            goto label_1fe450;
        }
    }
    ctx->pc = 0x1FE434u;
    // 0x1fe434: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x1fe434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1fe438: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x1fe438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fe43c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE43Cu;
    {
        const bool branch_taken_0x1fe43c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE43Cu;
            // 0x1fe440: 0x64082a  slt         $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe43c) {
            ctx->pc = 0x1FE450u;
            goto label_1fe450;
        }
    }
    ctx->pc = 0x1FE444u;
    // 0x1fe444: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE444u;
    {
        const bool branch_taken_0x1fe444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe444) {
            ctx->pc = 0x1FE450u;
            goto label_1fe450;
        }
    }
    ctx->pc = 0x1FE44Cu;
    // 0x1fe44c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe450:
    // 0x1fe450: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FE450u;
    {
        const bool branch_taken_0x1fe450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe450) {
            ctx->pc = 0x1FE4CCu;
            goto label_1fe4cc;
        }
    }
    ctx->pc = 0x1FE458u;
    // 0x1fe458: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1fe458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fe45c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe460: 0xc049c18  jal         func_127060
    ctx->pc = 0x1FE460u;
    SET_GPR_U32(ctx, 31, 0x1FE468u);
    ctx->pc = 0x1FE464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE460u;
            // 0x1fe464: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE468u; }
        if (ctx->pc != 0x1FE468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE468u; }
        if (ctx->pc != 0x1FE468u) { return; }
    }
    ctx->pc = 0x1FE468u;
label_1fe468:
    // 0x1fe468: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1fe468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fe46c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1fe46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fe470: 0xc049c18  jal         func_127060
    ctx->pc = 0x1FE470u;
    SET_GPR_U32(ctx, 31, 0x1FE478u);
    ctx->pc = 0x1FE474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE470u;
            // 0x1fe474: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE478u; }
        if (ctx->pc != 0x1FE478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE478u; }
        if (ctx->pc != 0x1FE478u) { return; }
    }
    ctx->pc = 0x1FE478u;
label_1fe478:
    // 0x1fe478: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fe47c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1fe47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe480: 0xc049c18  jal         func_127060
    ctx->pc = 0x1FE480u;
    SET_GPR_U32(ctx, 31, 0x1FE488u);
    ctx->pc = 0x1FE484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE480u;
            // 0x1fe484: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE488u; }
        if (ctx->pc != 0x1FE488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE488u; }
        if (ctx->pc != 0x1FE488u) { return; }
    }
    ctx->pc = 0x1FE488u;
label_1fe488:
    // 0x1fe488: 0x27a420b0  addiu       $a0, $sp, 0x20B0
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8368));
    // 0x1fe48c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe490: 0xc049c18  jal         func_127060
    ctx->pc = 0x1FE490u;
    SET_GPR_U32(ctx, 31, 0x1FE498u);
    ctx->pc = 0x1FE494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE490u;
            // 0x1fe494: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE498u; }
        if (ctx->pc != 0x1FE498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE498u; }
        if (ctx->pc != 0x1FE498u) { return; }
    }
    ctx->pc = 0x1FE498u;
label_1fe498:
    // 0x1fe498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe49c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4a0: 0xc049c18  jal         func_127060
    ctx->pc = 0x1FE4A0u;
    SET_GPR_U32(ctx, 31, 0x1FE4A8u);
    ctx->pc = 0x1FE4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4A0u;
            // 0x1fe4a4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4A8u; }
        if (ctx->pc != 0x1FE4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4A8u; }
        if (ctx->pc != 0x1FE4A8u) { return; }
    }
    ctx->pc = 0x1FE4A8u;
label_1fe4a8:
    // 0x1fe4a8: 0x27a520b0  addiu       $a1, $sp, 0x20B0
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8368));
    // 0x1fe4ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4b0: 0xc049c18  jal         func_127060
    ctx->pc = 0x1FE4B0u;
    SET_GPR_U32(ctx, 31, 0x1FE4B8u);
    ctx->pc = 0x1FE4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4B0u;
            // 0x1fe4b4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4B8u; }
        if (ctx->pc != 0x1FE4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE4B8u; }
        if (ctx->pc != 0x1FE4B8u) { return; }
    }
    ctx->pc = 0x1FE4B8u;
label_1fe4b8:
    // 0x1fe4b8: 0x102340  sll         $a0, $s0, 13
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 13));
    // 0x1fe4bc: 0x2961821  addu        $v1, $s4, $s6
    ctx->pc = 0x1fe4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x1fe4c0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1fe4c4: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1fe4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1fe4c8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1fe4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_1fe4cc:
    // 0x1fe4cc: 0x0  nop
    ctx->pc = 0x1fe4ccu;
    // NOP
    // 0x1fe4d0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE4D0u;
    {
        const bool branch_taken_0x1fe4d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4d0) {
            ctx->pc = 0x1FE4E0u;
            goto label_1fe4e0;
        }
    }
    ctx->pc = 0x1FE4D8u;
    // 0x1fe4d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE4D8u;
    {
        const bool branch_taken_0x1fe4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4D8u;
            // 0x1fe4dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4d8) {
            ctx->pc = 0x1FE4F4u;
            goto label_1fe4f4;
        }
    }
    ctx->pc = 0x1FE4E0u;
label_1fe4e0:
    // 0x1fe4e0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fe4e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1fe4e4: 0x2f5182a  slt         $v1, $s7, $s5
    ctx->pc = 0x1fe4e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1fe4e8: 0x27de0018  addiu       $fp, $fp, 0x18
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x1fe4ec: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
    ctx->pc = 0x1FE4ECu;
    {
        const bool branch_taken_0x1fe4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE4ECu;
            // 0x1fe4f0: 0x26d62000  addiu       $s6, $s6, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ec) {
            ctx->pc = 0x1FE27Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe27c;
        }
    }
    ctx->pc = 0x1FE4F4u;
label_1fe4f4:
    // 0x1fe4f4: 0x0  nop
    ctx->pc = 0x1fe4f4u;
    // NOP
    // 0x1fe4f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe4fc: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1fe500: 0x1460ff53  bnez        $v1, . + 4 + (-0xAD << 2)
    ctx->pc = 0x1FE500u;
    {
        const bool branch_taken_0x1fe500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE500u;
            // 0x1fe504: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe500) {
            ctx->pc = 0x1FE250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe250;
        }
    }
    ctx->pc = 0x1FE508u;
label_1fe508:
    // 0x1fe508: 0x838390e4  lb          $v1, -0x6F1C($gp)
    ctx->pc = 0x1fe508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938852)));
    // 0x1fe50c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe510: 0xa38390e4  sb          $v1, -0x6F1C($gp)
    ctx->pc = 0x1fe510u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938852), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe514: 0x838390e4  lb          $v1, -0x6F1C($gp)
    ctx->pc = 0x1fe514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938852)));
    // 0x1fe518: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1fe518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fe51c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE51Cu;
    {
        const bool branch_taken_0x1fe51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe51c) {
            ctx->pc = 0x1FE528u;
            goto label_1fe528;
        }
    }
    ctx->pc = 0x1FE524u;
    // 0x1fe524: 0xa38090e4  sb          $zero, -0x6F1C($gp)
    ctx->pc = 0x1fe524u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938852), (uint8_t)GPR_U32(ctx, 0));
label_1fe528:
    // 0x1fe528: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fe528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe52c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1fe52cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe530: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fe530u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe534: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fe534u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe538: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fe538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe53c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fe53cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe540: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fe540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe550: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE550u;
            // 0x1fe554: 0x27bd20d0  addiu       $sp, $sp, 0x20D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE558u;
}
