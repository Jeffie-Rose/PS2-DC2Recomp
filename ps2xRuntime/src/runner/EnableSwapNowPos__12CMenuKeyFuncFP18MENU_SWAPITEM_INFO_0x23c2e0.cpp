#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO
// Address: 0x23c2e0 - 0x23c908
void EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO_0x23c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO_0x23c2e0");
#endif

    switch (ctx->pc) {
        case 0x23c338u: goto label_23c338;
        case 0x23c344u: goto label_23c344;
        case 0x23c470u: goto label_23c470;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c590u: goto label_23c590;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c6a4u: goto label_23c6a4;
        case 0x23c6ccu: goto label_23c6cc;
        case 0x23c6e0u: goto label_23c6e0;
        case 0x23c750u: goto label_23c750;
        case 0x23c78cu: goto label_23c78c;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7f0u: goto label_23c7f0;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c848u: goto label_23c848;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c884u: goto label_23c884;
        case 0x23c88cu: goto label_23c88c;
        default: break;
    }

    ctx->pc = 0x23c2e0u;

    // 0x23c2e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23c2e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x23c2e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x23c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x23c2ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23c2f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23c2f4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23c2f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c2f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23c2fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23c2fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c300: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23c304: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23c304u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23c30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23c318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c31c: 0x849400c2  lh          $s4, 0xC2($a0)
    ctx->pc = 0x23c31cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x23c320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23c320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c324: 0x849300c0  lh          $s3, 0xC0($a0)
    ctx->pc = 0x23c324u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x23c328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23c328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c32c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x23c330: 0xc0655dc  jal         func_195770
    ctx->pc = 0x23C330u;
    SET_GPR_U32(ctx, 31, 0x23C338u);
    ctx->pc = 0x23C334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C330u;
            // 0x23c334: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C338u; }
        if (ctx->pc != 0x23C338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C338u; }
        if (ctx->pc != 0x23C338u) { return; }
    }
    ctx->pc = 0x23C338u;
label_23c338:
    // 0x23c338: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23c338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c33c: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x23C33Cu;
    SET_GPR_U32(ctx, 31, 0x23C344u);
    ctx->pc = 0x23C340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C33Cu;
            // 0x23c340: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C344u; }
        if (ctx->pc != 0x23C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C344u; }
        if (ctx->pc != 0x23C344u) { return; }
    }
    ctx->pc = 0x23C344u;
label_23c344:
    // 0x23c344: 0x86a40006  lh          $a0, 0x6($s5)
    ctx->pc = 0x23c344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x23c348: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x23c348u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c34c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c350: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23C350u;
    {
        const bool branch_taken_0x23c350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c350) {
            ctx->pc = 0x23C38Cu;
            goto label_23c38c;
        }
    }
    ctx->pc = 0x23C358u;
    // 0x23c358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c35c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C35Cu;
    {
        const bool branch_taken_0x23c35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c35c) {
            ctx->pc = 0x23C374u;
            goto label_23c374;
        }
    }
    ctx->pc = 0x23C364u;
    // 0x23c364: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C364u;
    {
        const bool branch_taken_0x23c364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c364) {
            ctx->pc = 0x23C374u;
            goto label_23c374;
        }
    }
    ctx->pc = 0x23C36Cu;
    // 0x23c36c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23C36Cu;
    {
        const bool branch_taken_0x23c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C36Cu;
            // 0x23c370: 0x86a60002  lh          $a2, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c36c) {
            ctx->pc = 0x23C39Cu;
            goto label_23c39c;
        }
    }
    ctx->pc = 0x23C374u;
label_23c374:
    // 0x23c374: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x23c378: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c37c: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x23c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x23c380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23C384u;
    {
        const bool branch_taken_0x23c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C384u;
            // 0x23c388: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c384) {
            ctx->pc = 0x23C398u;
            goto label_23c398;
        }
    }
    ctx->pc = 0x23C38Cu;
label_23c38c:
    // 0x23c38c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23c38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23c390: 0x8c37d8c8  lw          $s7, -0x2738($at)
    ctx->pc = 0x23c390u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23c394: 0x0  nop
    ctx->pc = 0x23c394u;
    // NOP
label_23c398:
    // 0x23c398: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x23c398u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_23c39c:
    // 0x23c39c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23c3a0: 0x10c20111  beq         $a2, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x23C3A0u;
    {
        const bool branch_taken_0x23c3a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c3a0) {
            ctx->pc = 0x23C7E8u;
            goto label_23c7e8;
        }
    }
    ctx->pc = 0x23C3A8u;
    // 0x23c3a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23c3ac: 0x10c200d3  beq         $a2, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x23C3ACu;
    {
        const bool branch_taken_0x23c3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c3ac) {
            ctx->pc = 0x23C6FCu;
            goto label_23c6fc;
        }
    }
    ctx->pc = 0x23C3B4u;
    // 0x23c3b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23c3b8: 0x10c500d0  beq         $a2, $a1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x23C3B8u;
    {
        const bool branch_taken_0x23c3b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x23c3b8) {
            ctx->pc = 0x23C6FCu;
            goto label_23c6fc;
        }
    }
    ctx->pc = 0x23C3C0u;
    // 0x23c3c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c3c4: 0x10c200cd  beq         $a2, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x23C3C4u;
    {
        const bool branch_taken_0x23c3c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c3c4) {
            ctx->pc = 0x23C6FCu;
            goto label_23c6fc;
        }
    }
    ctx->pc = 0x23C3CCu;
    // 0x23c3cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c3d0: 0x10c20090  beq         $a2, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x23C3D0u;
    {
        const bool branch_taken_0x23c3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c3d0) {
            ctx->pc = 0x23C614u;
            goto label_23c614;
        }
    }
    ctx->pc = 0x23C3D8u;
    // 0x23c3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c3dc: 0x10c30041  beq         $a2, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x23C3DCu;
    {
        const bool branch_taken_0x23c3dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c3dc) {
            ctx->pc = 0x23C4E4u;
            goto label_23c4e4;
        }
    }
    ctx->pc = 0x23C3E4u;
    // 0x23c3e4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C3E4u;
    {
        const bool branch_taken_0x23c3e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3e4) {
            ctx->pc = 0x23C3F4u;
            goto label_23c3f4;
        }
    }
    ctx->pc = 0x23C3ECu;
    // 0x23c3ec: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x23C3ECu;
    {
        const bool branch_taken_0x23c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C3ECu;
            // 0x23c3f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3ec) {
            ctx->pc = 0x23C8D8u;
            goto label_23c8d8;
        }
    }
    ctx->pc = 0x23C3F4u;
label_23c3f4:
    // 0x23c3f4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C3F4u;
    {
        const bool branch_taken_0x23c3f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3f4) {
            ctx->pc = 0x23C410u;
            goto label_23c410;
        }
    }
    ctx->pc = 0x23C3FCu;
    // 0x23c3fc: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x23c3fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x23c400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C400u;
    {
        const bool branch_taken_0x23c400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c400) {
            ctx->pc = 0x23C410u;
            goto label_23c410;
        }
    }
    ctx->pc = 0x23C408u;
    // 0x23c408: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x23C408u;
    {
        const bool branch_taken_0x23c408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C408u;
            // 0x23c40c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c408) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C410u;
label_23c410:
    // 0x23c410: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C410u;
    {
        const bool branch_taken_0x23c410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c410) {
            ctx->pc = 0x23C430u;
            goto label_23c430;
        }
    }
    ctx->pc = 0x23C418u;
    // 0x23c418: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x23c418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23c41c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C41Cu;
    {
        const bool branch_taken_0x23c41c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x23c41c) {
            ctx->pc = 0x23C430u;
            goto label_23c430;
        }
    }
    ctx->pc = 0x23C424u;
    // 0x23c424: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x23c424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23c428: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C428u;
    {
        const bool branch_taken_0x23c428 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C428u;
            // 0x23c42c: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c428) {
            ctx->pc = 0x23C43Cu;
            goto label_23c43c;
        }
    }
    ctx->pc = 0x23C430u;
label_23c430:
    // 0x23c430: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x23C430u;
    {
        const bool branch_taken_0x23c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C430u;
            // 0x23c434: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c430) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C438u;
    // 0x23c438: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23c438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_23c43c:
    // 0x23c43c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c440: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c444: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23c444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c44c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23c450: 0x2451002c  addiu       $s1, $v0, 0x2C
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x23c454: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C454u;
    {
        const bool branch_taken_0x23c454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C454u;
            // 0x23c458: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c454) {
            ctx->pc = 0x23C468u;
            goto label_23c468;
        }
    }
    ctx->pc = 0x23C45Cu;
    // 0x23c45c: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x23C45Cu;
    {
        const bool branch_taken_0x23c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C45Cu;
            // 0x23c460: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c45c) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C464u;
    // 0x23c464: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23c464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c468:
    // 0x23c468: 0xc065948  jal         func_196520
    ctx->pc = 0x23C468u;
    SET_GPR_U32(ctx, 31, 0x23C470u);
    ctx->pc = 0x196520u;
    if (runtime->hasFunction(0x196520u)) {
        auto targetFn = runtime->lookupFunction(0x196520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C470u; }
        if (ctx->pc != 0x23C470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemEquip__Fii_0x196520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C470u; }
        if (ctx->pc != 0x23C470u) { return; }
    }
    ctx->pc = 0x23C470u;
label_23c470:
    // 0x23c470: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C470u;
    {
        const bool branch_taken_0x23c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C470u;
            // 0x23c474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c470) {
            ctx->pc = 0x23C484u;
            goto label_23c484;
        }
    }
    ctx->pc = 0x23C478u;
    // 0x23c478: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x23C478u;
    {
        const bool branch_taken_0x23c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C478u;
            // 0x23c47c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c478) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C480u;
    // 0x23c480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c484:
    // 0x23c484: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23C484u;
    SET_GPR_U32(ctx, 31, 0x23C48Cu);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C48Cu; }
        if (ctx->pc != 0x23C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C48Cu; }
        if (ctx->pc != 0x23C48Cu) { return; }
    }
    ctx->pc = 0x23C48Cu;
label_23c48c:
    // 0x23c48c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C48Cu;
    {
        const bool branch_taken_0x23c48c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c48c) {
            ctx->pc = 0x23C4A8u;
            goto label_23c4a8;
        }
    }
    ctx->pc = 0x23C494u;
    // 0x23c494: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23c494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c498: 0x1420010e  bnez        $at, . + 4 + (0x10E << 2)
    ctx->pc = 0x23C498u;
    {
        const bool branch_taken_0x23c498 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c498) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C4A0u;
    // 0x23c4a0: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x23C4A0u;
    {
        const bool branch_taken_0x23c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4A0u;
            // 0x23c4a4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4a0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C4A8u;
label_23c4a8:
    // 0x23c4a8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x23c4ac: 0x12820109  beq         $s4, $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x23C4ACu;
    {
        const bool branch_taken_0x23c4ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c4ac) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C4B4u;
    // 0x23c4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c4b8: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C4B8u;
    {
        const bool branch_taken_0x23c4b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4B8u;
            // 0x23c4bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4b8) {
            ctx->pc = 0x23C4DCu;
            goto label_23c4dc;
        }
    }
    ctx->pc = 0x23C4C0u;
    // 0x23c4c0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23c4c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x23c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c4c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C4C8u;
    {
        const bool branch_taken_0x23c4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c4c8) {
            ctx->pc = 0x23C4D8u;
            goto label_23c4d8;
        }
    }
    ctx->pc = 0x23C4D0u;
    // 0x23c4d0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x23C4D0u;
    {
        const bool branch_taken_0x23c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4D0u;
            // 0x23c4d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4d0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C4D8u;
label_23c4d8:
    // 0x23c4d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23c4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c4dc:
    // 0x23c4dc: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x23C4DCu;
    {
        const bool branch_taken_0x23c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c4dc) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C4E4u;
label_23c4e4:
    // 0x23c4e4: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x23C4E4u;
    {
        const bool branch_taken_0x23c4e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c4e4) {
            ctx->pc = 0x23C518u;
            goto label_23c518;
        }
    }
    ctx->pc = 0x23C4ECu;
    // 0x23c4ec: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C4ECu;
    {
        const bool branch_taken_0x23c4ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4ECu;
            // 0x23c4f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4ec) {
            ctx->pc = 0x23C510u;
            goto label_23c510;
        }
    }
    ctx->pc = 0x23C4F4u;
    // 0x23c4f4: 0x2662fffb  addiu       $v0, $s3, -0x5
    ctx->pc = 0x23c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x23c4f8: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x23c4f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x23c4fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C50Cu;
            goto label_23c50c;
        }
    }
    ctx->pc = 0x23C504u;
    // 0x23c504: 0x16650004  bne         $s3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C504u;
    {
        const bool branch_taken_0x23c504 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        if (branch_taken_0x23c504) {
            ctx->pc = 0x23C518u;
            goto label_23c518;
        }
    }
    ctx->pc = 0x23C50Cu;
label_23c50c:
    // 0x23c50c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23c50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c510:
    // 0x23c510: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x23C510u;
    {
        const bool branch_taken_0x23c510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c510) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C518u;
label_23c518:
    // 0x23c518: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C518u;
    {
        const bool branch_taken_0x23c518 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c518) {
            ctx->pc = 0x23C528u;
            goto label_23c528;
        }
    }
    ctx->pc = 0x23C520u;
    // 0x23c520: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x23C520u;
    {
        const bool branch_taken_0x23c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C520u;
            // 0x23c524: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c520) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C528u;
label_23c528:
    // 0x23c528: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x23c528u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c52c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x23c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x23c530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C530u;
    {
        const bool branch_taken_0x23c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C530u;
            // 0x23c534: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c530) {
            ctx->pc = 0x23C544u;
            goto label_23c544;
        }
    }
    ctx->pc = 0x23C538u;
    // 0x23c538: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x23C538u;
    {
        const bool branch_taken_0x23c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C538u;
            // 0x23c53c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c538) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C540u;
    // 0x23c540: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x23c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_23c544:
    // 0x23c544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C544u;
    {
        const bool branch_taken_0x23c544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C544u;
            // 0x23c548: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c544) {
            ctx->pc = 0x23C558u;
            goto label_23c558;
        }
    }
    ctx->pc = 0x23C54Cu;
    // 0x23c54c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x23C54Cu;
    {
        const bool branch_taken_0x23c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C54Cu;
            // 0x23c550: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c54c) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C554u;
    // 0x23c554: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x23c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_23c558:
    // 0x23c558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C558u;
    {
        const bool branch_taken_0x23c558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c558) {
            ctx->pc = 0x23C568u;
            goto label_23c568;
        }
    }
    ctx->pc = 0x23C560u;
    // 0x23c560: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x23C560u;
    {
        const bool branch_taken_0x23c560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C560u;
            // 0x23c564: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c560) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C568u;
label_23c568:
    // 0x23c568: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C568u;
    {
        const bool branch_taken_0x23c568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C568u;
            // 0x23c56c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c568) {
            ctx->pc = 0x23C57Cu;
            goto label_23c57c;
        }
    }
    ctx->pc = 0x23C570u;
    // 0x23c570: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23C570u;
    {
        const bool branch_taken_0x23c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C570u;
            // 0x23c574: 0x86a50004  lh          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c570) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C578u;
    // 0x23c578: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x23c578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c57c:
    // 0x23c57c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x23C57Cu;
    {
        const bool branch_taken_0x23c57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c57c) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C584u;
    // 0x23c584: 0x86a50004  lh          $a1, 0x4($s5)
    ctx->pc = 0x23c584u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23c588:
    // 0x23c588: 0xc068460  jal         func_1A1180
    ctx->pc = 0x23C588u;
    SET_GPR_U32(ctx, 31, 0x23C590u);
    ctx->pc = 0x1A1180u;
    if (runtime->hasFunction(0x1A1180u)) {
        auto targetFn = runtime->lookupFunction(0x1A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C590u; }
        if (ctx->pc != 0x23C590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquipType__Fii_0x1a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C590u; }
        if (ctx->pc != 0x23C590u) { return; }
    }
    ctx->pc = 0x23C590u;
label_23c590:
    // 0x23c590: 0x17c2000c  bne         $fp, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23C590u;
    {
        const bool branch_taken_0x23c590 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c590) {
            ctx->pc = 0x23C5C4u;
            goto label_23c5c4;
        }
    }
    ctx->pc = 0x23C598u;
    // 0x23c598: 0x26c400c0  addiu       $a0, $s6, 0xC0
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x23c59c: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x23C59Cu;
    SET_GPR_U32(ctx, 31, 0x23C5A4u);
    ctx->pc = 0x23C5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C59Cu;
            // 0x23c5a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5A4u; }
        if (ctx->pc != 0x23C5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5A4u; }
        if (ctx->pc != 0x23C5A4u) { return; }
    }
    ctx->pc = 0x23C5A4u;
label_23c5a4:
    // 0x23c5a4: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x23C5A4u;
    {
        const bool branch_taken_0x23c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5a4) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C5ACu;
    // 0x23c5ac: 0xc08e94c  jal         func_23A530
    ctx->pc = 0x23C5ACu;
    SET_GPR_U32(ctx, 31, 0x23C5B4u);
    ctx->pc = 0x23A530u;
    if (runtime->hasFunction(0x23A530u)) {
        auto targetFn = runtime->lookupFunction(0x23A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5B4u; }
        if (ctx->pc != 0x23C5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishCondition__Fv_0x23a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5B4u; }
        if (ctx->pc != 0x23C5B4u) { return; }
    }
    ctx->pc = 0x23C5B4u;
label_23c5b4:
    // 0x23c5b4: 0x144000c7  bnez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x23C5B4u;
    {
        const bool branch_taken_0x23c5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c5b4) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C5BCu;
    // 0x23c5bc: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x23C5BCu;
    {
        const bool branch_taken_0x23c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C5BCu;
            // 0x23c5c0: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5bc) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C5C4u;
label_23c5c4:
    // 0x23c5c4: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x23c5c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23c5c8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23c5cc: 0x26c500c0  addiu       $a1, $s6, 0xC0
    ctx->pc = 0x23c5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x23c5d0: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x23c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x23c5d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23c5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c5d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23c5dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c5e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c5e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c5ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23c5f0: 0xc087d14  jal         func_21F450
    ctx->pc = 0x23C5F0u;
    SET_GPR_U32(ctx, 31, 0x23C5F8u);
    ctx->pc = 0x23C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C5F0u;
            // 0x23c5f4: 0x24470170  addiu       $a3, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5F8u; }
        if (ctx->pc != 0x23C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5F8u; }
        if (ctx->pc != 0x23C5F8u) { return; }
    }
    ctx->pc = 0x23C5F8u;
label_23c5f8:
    // 0x23c5f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C5F8u;
    {
        const bool branch_taken_0x23c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C5F8u;
            // 0x23c5fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5f8) {
            ctx->pc = 0x23C60Cu;
            goto label_23c60c;
        }
    }
    ctx->pc = 0x23C600u;
    // 0x23c600: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x23C600u;
    {
        const bool branch_taken_0x23c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C600u;
            // 0x23c604: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c600) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C608u;
    // 0x23c608: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23c608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c60c:
    // 0x23c60c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x23C60Cu;
    {
        const bool branch_taken_0x23c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c60c) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C614u;
label_23c614:
    // 0x23c614: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C614u;
    {
        const bool branch_taken_0x23c614 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c614) {
            ctx->pc = 0x23C63Cu;
            goto label_23c63c;
        }
    }
    ctx->pc = 0x23C61Cu;
    // 0x23c61c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23c620: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C620u;
    {
        const bool branch_taken_0x23c620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c620) {
            ctx->pc = 0x23C63Cu;
            goto label_23c63c;
        }
    }
    ctx->pc = 0x23C628u;
    // 0x23c628: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c62c: 0x12700003  beq         $s3, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C62Cu;
    {
        const bool branch_taken_0x23c62c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x23c62c) {
            ctx->pc = 0x23C63Cu;
            goto label_23c63c;
        }
    }
    ctx->pc = 0x23C634u;
    // 0x23c634: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x23C634u;
    {
        const bool branch_taken_0x23c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c634) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C63Cu;
label_23c63c:
    // 0x23c63c: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C63Cu;
    {
        const bool branch_taken_0x23c63c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C63Cu;
            // 0x23c640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c63c) {
            ctx->pc = 0x23C650u;
            goto label_23c650;
        }
    }
    ctx->pc = 0x23C644u;
    // 0x23c644: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x23C644u;
    {
        const bool branch_taken_0x23c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C644u;
            // 0x23c648: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c644) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C64Cu;
    // 0x23c64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c650:
    // 0x23c650: 0x12660008  beq         $s3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C650u;
    {
        const bool branch_taken_0x23c650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        if (branch_taken_0x23c650) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C658u;
    // 0x23c658: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C658u;
    {
        const bool branch_taken_0x23c658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C658u;
            // 0x23c65c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c658) {
            ctx->pc = 0x23C66Cu;
            goto label_23c66c;
        }
    }
    ctx->pc = 0x23C660u;
    // 0x23c660: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23C660u;
    {
        const bool branch_taken_0x23c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C660u;
            // 0x23c664: 0x86a50004  lh          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c660) {
            ctx->pc = 0x23C6C4u;
            goto label_23c6c4;
        }
    }
    ctx->pc = 0x23C668u;
    // 0x23c668: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c66c:
    // 0x23c66c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x23C66Cu;
    {
        const bool branch_taken_0x23c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c66c) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C674u;
label_23c674:
    // 0x23c674: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23c678: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23c678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23c67c: 0x26c500c0  addiu       $a1, $s6, 0xC0
    ctx->pc = 0x23c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x23c680: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x23c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x23c684: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23c684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23c688: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c68c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c690: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c698: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x23c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x23c69c: 0xc087d14  jal         func_21F450
    ctx->pc = 0x23C69Cu;
    SET_GPR_U32(ctx, 31, 0x23C6A4u);
    ctx->pc = 0x23C6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C69Cu;
            // 0x23c6a0: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6A4u; }
        if (ctx->pc != 0x23C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6A4u; }
        if (ctx->pc != 0x23C6A4u) { return; }
    }
    ctx->pc = 0x23C6A4u;
label_23c6a4:
    // 0x23c6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C6A4u;
    {
        const bool branch_taken_0x23c6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6A4u;
            // 0x23c6a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6a4) {
            ctx->pc = 0x23C6B8u;
            goto label_23c6b8;
        }
    }
    ctx->pc = 0x23C6ACu;
    // 0x23c6ac: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x23C6ACu;
    {
        const bool branch_taken_0x23c6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6ACu;
            // 0x23c6b0: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6ac) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C6B4u;
    // 0x23c6b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c6b8:
    // 0x23c6b8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x23C6B8u;
    {
        const bool branch_taken_0x23c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6b8) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C6C0u;
    // 0x23c6c0: 0x86a50004  lh          $a1, 0x4($s5)
    ctx->pc = 0x23c6c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23c6c4:
    // 0x23c6c4: 0xc068460  jal         func_1A1180
    ctx->pc = 0x23C6C4u;
    SET_GPR_U32(ctx, 31, 0x23C6CCu);
    ctx->pc = 0x23C6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6C4u;
            // 0x23c6c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1180u;
    if (runtime->hasFunction(0x1A1180u)) {
        auto targetFn = runtime->lookupFunction(0x1A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6CCu; }
        if (ctx->pc != 0x23C6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquipType__Fii_0x1a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6CCu; }
        if (ctx->pc != 0x23C6CCu) { return; }
    }
    ctx->pc = 0x23C6CCu;
label_23c6cc:
    // 0x23c6cc: 0x17c20009  bne         $fp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C6CCu;
    {
        const bool branch_taken_0x23c6cc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6CCu;
            // 0x23c6d0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6cc) {
            ctx->pc = 0x23C6F4u;
            goto label_23c6f4;
        }
    }
    ctx->pc = 0x23C6D4u;
    // 0x23c6d4: 0x26c400c0  addiu       $a0, $s6, 0xC0
    ctx->pc = 0x23c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x23c6d8: 0xc08e9a0  jal         func_23A680
    ctx->pc = 0x23C6D8u;
    SET_GPR_U32(ctx, 31, 0x23C6E0u);
    ctx->pc = 0x23C6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6D8u;
            // 0x23c6dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A680u;
    if (runtime->hasFunction(0x23A680u)) {
        auto targetFn = runtime->lookupFunction(0x23A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6E0u; }
        if (ctx->pc != 0x23C6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEnableChangeRoboParts__FP13CGameDataUsed_0x23a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6E0u; }
        if (ctx->pc != 0x23C6E0u) { return; }
    }
    ctx->pc = 0x23C6E0u;
label_23c6e0:
    // 0x23c6e0: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x23C6E0u;
    {
        const bool branch_taken_0x23c6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c6e0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C6E8u;
    // 0x23c6e8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x23C6E8u;
    {
        const bool branch_taken_0x23c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6E8u;
            // 0x23c6ec: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6e8) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C6F0u;
    // 0x23c6f0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x23c6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23c6f4:
    // 0x23c6f4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x23C6F4u;
    {
        const bool branch_taken_0x23c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6f4) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C6FCu;
label_23c6fc:
    // 0x23c6fc: 0x86a40004  lh          $a0, 0x4($s5)
    ctx->pc = 0x23c6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23c700: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23c700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23c704: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x23c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x23c708: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x23c708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23c70c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x23c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23c710: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c714: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23c714u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23c718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c71c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x23c71cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c720: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C720u;
    {
        const bool branch_taken_0x23c720 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c720) {
            ctx->pc = 0x23C730u;
            goto label_23c730;
        }
    }
    ctx->pc = 0x23C728u;
    // 0x23c728: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x23C728u;
    {
        const bool branch_taken_0x23c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C728u;
            // 0x23c72c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c728) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C730u;
label_23c730:
    // 0x23c730: 0x86510000  lh          $s1, 0x0($s2)
    ctx->pc = 0x23c730u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23c734: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23c738: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x23c73c: 0x26c500c0  addiu       $a1, $s6, 0xC0
    ctx->pc = 0x23c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x23c740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23c740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c744: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23c744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c748: 0xc087d14  jal         func_21F450
    ctx->pc = 0x23C748u;
    SET_GPR_U32(ctx, 31, 0x23C750u);
    ctx->pc = 0x23C74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C748u;
            // 0x23c74c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C750u; }
        if (ctx->pc != 0x23C750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C750u; }
        if (ctx->pc != 0x23C750u) { return; }
    }
    ctx->pc = 0x23C750u;
label_23c750:
    // 0x23c750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C750u;
    {
        const bool branch_taken_0x23c750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C750u;
            // 0x23c754: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c750) {
            ctx->pc = 0x23C764u;
            goto label_23c764;
        }
    }
    ctx->pc = 0x23C758u;
    // 0x23c758: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x23C758u;
    {
        const bool branch_taken_0x23c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C758u;
            // 0x23c75c: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c758) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C760u;
    // 0x23c760: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x23c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c764:
    // 0x23c764: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C764u;
    {
        const bool branch_taken_0x23c764 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C764u;
            // 0x23c768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c764) {
            ctx->pc = 0x23C784u;
            goto label_23c784;
        }
    }
    ctx->pc = 0x23C76Cu;
    // 0x23c76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c770: 0x16620058  bne         $s3, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x23C770u;
    {
        const bool branch_taken_0x23c770 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c770) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C778u;
    // 0x23c778: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x23C778u;
    {
        const bool branch_taken_0x23c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c778) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C780u;
    // 0x23c780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c784:
    // 0x23c784: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x23C784u;
    SET_GPR_U32(ctx, 31, 0x23C78Cu);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C78Cu; }
        if (ctx->pc != 0x23C78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C78Cu; }
        if (ctx->pc != 0x23C78Cu) { return; }
    }
    ctx->pc = 0x23C78Cu;
label_23c78c:
    // 0x23c78c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x23C78Cu;
    {
        const bool branch_taken_0x23c78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c78c) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C794u;
    // 0x23c794: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23C794u;
    SET_GPR_U32(ctx, 31, 0x23C79Cu);
    ctx->pc = 0x23C798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C794u;
            // 0x23c798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C79Cu; }
        if (ctx->pc != 0x23C79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C79Cu; }
        if (ctx->pc != 0x23C79Cu) { return; }
    }
    ctx->pc = 0x23C79Cu;
label_23c79c:
    // 0x23c79c: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C79Cu;
    {
        const bool branch_taken_0x23c79c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C79Cu;
            // 0x23c7a0: 0x26c400c0  addiu       $a0, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c79c) {
            ctx->pc = 0x23C7BCu;
            goto label_23c7bc;
        }
    }
    ctx->pc = 0x23C7A4u;
    // 0x23c7a4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23c7a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c7a8: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x23C7A8u;
    {
        const bool branch_taken_0x23c7a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c7a8) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C7B0u;
    // 0x23c7b0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x23C7B0u;
    {
        const bool branch_taken_0x23c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C7B0u;
            // 0x23c7b4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7b0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C7B8u;
    // 0x23c7b8: 0x26c400c0  addiu       $a0, $s6, 0xC0
    ctx->pc = 0x23c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
label_23c7bc:
    // 0x23c7bc: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x23C7BCu;
    SET_GPR_U32(ctx, 31, 0x23C7C4u);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7C4u; }
        if (ctx->pc != 0x23C7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7C4u; }
        if (ctx->pc != 0x23C7C4u) { return; }
    }
    ctx->pc = 0x23C7C4u;
label_23c7c4:
    // 0x23c7c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C7C4u;
    {
        const bool branch_taken_0x23c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7c4) {
            ctx->pc = 0x23C7D4u;
            goto label_23c7d4;
        }
    }
    ctx->pc = 0x23C7CCu;
    // 0x23c7cc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x23C7CCu;
    {
        const bool branch_taken_0x23c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7cc) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C7D4u;
label_23c7d4:
    // 0x23c7d4: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x23c7d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x23c7d8: 0x1282003e  beq         $s4, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x23C7D8u;
    {
        const bool branch_taken_0x23c7d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c7d8) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C7E0u;
    // 0x23c7e0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23C7E0u;
    {
        const bool branch_taken_0x23c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7e0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C7E8u;
label_23c7e8:
    // 0x23c7e8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x23C7E8u;
    SET_GPR_U32(ctx, 31, 0x23C7F0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7F0u; }
        if (ctx->pc != 0x23C7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7F0u; }
        if (ctx->pc != 0x23C7F0u) { return; }
    }
    ctx->pc = 0x23C7F0u;
label_23c7f0:
    // 0x23c7f0: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x23C7F0u;
    SET_GPR_U32(ctx, 31, 0x23C7F8u);
    ctx->pc = 0x23C7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C7F0u;
            // 0x23c7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7F8u; }
        if (ctx->pc != 0x23C7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7F8u; }
        if (ctx->pc != 0x23C7F8u) { return; }
    }
    ctx->pc = 0x23C7F8u;
label_23c7f8:
    // 0x23c7f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23c7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7fc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C7FCu;
    {
        const bool branch_taken_0x23c7fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c7fc) {
            ctx->pc = 0x23C80Cu;
            goto label_23c80c;
        }
    }
    ctx->pc = 0x23C804u;
    // 0x23c804: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x23C804u;
    {
        const bool branch_taken_0x23c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C804u;
            // 0x23c808: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c804) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C80Cu;
label_23c80c:
    // 0x23c80c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C80Cu;
    {
        const bool branch_taken_0x23c80c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c80c) {
            ctx->pc = 0x23C81Cu;
            goto label_23c81c;
        }
    }
    ctx->pc = 0x23C814u;
    // 0x23c814: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x23C814u;
    {
        const bool branch_taken_0x23c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C814u;
            // 0x23c818: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c814) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C81Cu;
label_23c81c:
    // 0x23c81c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x23c81cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23c820: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23c824: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C824u;
    {
        const bool branch_taken_0x23c824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C824u;
            // 0x23c828: 0x26c400c0  addiu       $a0, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c824) {
            ctx->pc = 0x23C840u;
            goto label_23c840;
        }
    }
    ctx->pc = 0x23C82Cu;
    // 0x23c82c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x23c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x23c830: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23c834: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x23C834u;
    {
        const bool branch_taken_0x23c834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C834u;
            // 0x23c838: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c834) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C83Cu;
    // 0x23c83c: 0x26c400c0  addiu       $a0, $s6, 0xC0
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
label_23c840:
    // 0x23c840: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23C840u;
    SET_GPR_U32(ctx, 31, 0x23C848u);
    ctx->pc = 0x23C844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C840u;
            // 0x23c844: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C848u; }
        if (ctx->pc != 0x23C848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C848u; }
        if (ctx->pc != 0x23C848u) { return; }
    }
    ctx->pc = 0x23C848u;
label_23c848:
    // 0x23c848: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23c848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c84c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x23C84Cu;
    {
        const bool branch_taken_0x23c84c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c84c) {
            ctx->pc = 0x23C87Cu;
            goto label_23c87c;
        }
    }
    ctx->pc = 0x23C854u;
    // 0x23c854: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23C854u;
    SET_GPR_U32(ctx, 31, 0x23C85Cu);
    ctx->pc = 0x23C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C854u;
            // 0x23c858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C85Cu; }
        if (ctx->pc != 0x23C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C85Cu; }
        if (ctx->pc != 0x23C85Cu) { return; }
    }
    ctx->pc = 0x23C85Cu;
label_23c85c:
    // 0x23c85c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23c85cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23c860: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C860u;
    {
        const bool branch_taken_0x23c860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c860) {
            ctx->pc = 0x23C87Cu;
            goto label_23c87c;
        }
    }
    ctx->pc = 0x23C868u;
    // 0x23c868: 0x86c300c2  lh          $v1, 0xC2($s6)
    ctx->pc = 0x23c868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 194)));
    // 0x23c86c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x23c86cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x23c870: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C870u;
    {
        const bool branch_taken_0x23c870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c870) {
            ctx->pc = 0x23C87Cu;
            goto label_23c87c;
        }
    }
    ctx->pc = 0x23C878u;
    // 0x23c878: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x23c878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c87c:
    // 0x23c87c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x23C87Cu;
    SET_GPR_U32(ctx, 31, 0x23C884u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C884u; }
        if (ctx->pc != 0x23C884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C884u; }
        if (ctx->pc != 0x23C884u) { return; }
    }
    ctx->pc = 0x23C884u;
label_23c884:
    // 0x23c884: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x23C884u;
    SET_GPR_U32(ctx, 31, 0x23C88Cu);
    ctx->pc = 0x23C888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C884u;
            // 0x23c888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C88Cu; }
        if (ctx->pc != 0x23C88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C88Cu; }
        if (ctx->pc != 0x23C88Cu) { return; }
    }
    ctx->pc = 0x23C88Cu;
label_23c88c:
    // 0x23c88c: 0x2403012f  addiu       $v1, $zero, 0x12F
    ctx->pc = 0x23c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x23c890: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C890u;
    {
        const bool branch_taken_0x23c890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23C894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C890u;
            // 0x23c894: 0x2403012e  addiu       $v1, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c890) {
            ctx->pc = 0x23C8B0u;
            goto label_23c8b0;
        }
    }
    ctx->pc = 0x23C898u;
    // 0x23c898: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x23c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x23c89c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x23c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x23c8a0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C8A0u;
    {
        const bool branch_taken_0x23c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8a0) {
            ctx->pc = 0x23C8ACu;
            goto label_23c8ac;
        }
    }
    ctx->pc = 0x23C8A8u;
    // 0x23c8a8: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x23c8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c8ac:
    // 0x23c8ac: 0x2403012e  addiu       $v1, $zero, 0x12E
    ctx->pc = 0x23c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_23c8b0:
    // 0x23c8b0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C8B0u;
    {
        const bool branch_taken_0x23c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c8b0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C8B8u;
    // 0x23c8b8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x23c8b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23c8bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23c8c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C8C0u;
    {
        const bool branch_taken_0x23c8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c8c0) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C8C8u;
    // 0x23c8c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23C8C8u;
    {
        const bool branch_taken_0x23c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8C8u;
            // 0x23c8cc: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8c8) {
            ctx->pc = 0x23C8D4u;
            goto label_23c8d4;
        }
    }
    ctx->pc = 0x23C8D0u;
    // 0x23c8d0: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x23c8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c8d4:
    // 0x23c8d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23c8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c8d8:
    // 0x23c8d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23c8dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x23c8dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23c8e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23c8e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23c8e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23c8e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23c8e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23c8e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23c8ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23c8ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c8f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23c8f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c8f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c900: 0x3e00008  jr          $ra
    ctx->pc = 0x23C900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C900u;
            // 0x23c904: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C908u;
}
