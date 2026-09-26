#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFormStep__16CMenuPosDataFormFv
// Address: 0x2285e0 - 0x228838
void MenuFormStep__16CMenuPosDataFormFv_0x2285e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFormStep__16CMenuPosDataFormFv_0x2285e0");
#endif

    switch (ctx->pc) {
        case 0x228620u: goto label_228620;
        case 0x228694u: goto label_228694;
        case 0x228784u: goto label_228784;
        case 0x228798u: goto label_228798;
        case 0x2287b0u: goto label_2287b0;
        case 0x2287d4u: goto label_2287d4;
        default: break;
    }

    ctx->pc = 0x2285e0u;

    // 0x2285e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2285e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2285e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2285e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2285e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2285ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2285ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2285f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2285f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2285f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2285f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2285f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2285f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2285fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2285fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228600: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228604: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x228604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x228608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228608u;
    {
        const bool branch_taken_0x228608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228608u;
            // 0x22860c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228608) {
            ctx->pc = 0x228618u;
            goto label_228618;
        }
    }
    ctx->pc = 0x228610u;
    // 0x228610: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x228610u;
    {
        const bool branch_taken_0x228610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228610u;
            // 0x228614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228610) {
            ctx->pc = 0x228814u;
            goto label_228814;
        }
    }
    ctx->pc = 0x228618u;
label_228618:
    // 0x228618: 0xc08a26c  jal         func_2289B0
    ctx->pc = 0x228618u;
    SET_GPR_U32(ctx, 31, 0x228620u);
    ctx->pc = 0x22861Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228618u;
            // 0x22861c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2289B0u;
    if (runtime->hasFunction(0x2289B0u)) {
        auto targetFn = runtime->lookupFunction(0x2289B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228620u; }
        if (ctx->pc != 0x228620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextMovePos__16CMenuPosDataFormFPi_0x2289b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228620u; }
        if (ctx->pc != 0x228620u) { return; }
    }
    ctx->pc = 0x228620u;
label_228620:
    // 0x228620: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228624: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x228624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x228628: 0x342186a1  ori         $at, $at, 0x86A1
    ctx->pc = 0x228628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34465);
    // 0x22862c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228630: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x228630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x228634: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228638: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x228638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x22863c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22863Cu;
    {
        const bool branch_taken_0x22863c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22863c) {
            ctx->pc = 0x228648u;
            goto label_228648;
        }
    }
    ctx->pc = 0x228644u;
    // 0x228644: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x228644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_228648:
    // 0x228648: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x228648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22864c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x22864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x228650: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228650u;
    {
        const bool branch_taken_0x228650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228650u;
            // 0x228654: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228650) {
            ctx->pc = 0x228660u;
            goto label_228660;
        }
    }
    ctx->pc = 0x228658u;
    // 0x228658: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228658u;
    {
        const bool branch_taken_0x228658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x228658) {
            ctx->pc = 0x228674u;
            goto label_228674;
        }
    }
    ctx->pc = 0x228660u;
label_228660:
    // 0x228660: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x228660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228664: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x228664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x228668: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x228668u;
    {
        const bool branch_taken_0x228668 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228668u;
            // 0x22866c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228668) {
            ctx->pc = 0x228674u;
            goto label_228674;
        }
    }
    ctx->pc = 0x228670u;
    // 0x228670: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x228670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_228674:
    // 0x228674: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x228674u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x228678: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x228678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22867c: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x22867Cu;
    {
        const bool branch_taken_0x22867c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22867Cu;
            // 0x228680: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22867c) {
            ctx->pc = 0x228774u;
            goto label_228774;
        }
    }
    ctx->pc = 0x228684u;
    // 0x228684: 0x8e12006c  lw          $s2, 0x6C($s0)
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x228688: 0x92450018  lbu         $a1, 0x18($s2)
    ctx->pc = 0x228688u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x22868c: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22868Cu;
    SET_GPR_U32(ctx, 31, 0x228694u);
    ctx->pc = 0x228690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22868Cu;
            // 0x228690: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228694u; }
        if (ctx->pc != 0x228694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228694u; }
        if (ctx->pc != 0x228694u) { return; }
    }
    ctx->pc = 0x228694u;
label_228694:
    // 0x228694: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x228694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228698: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228698u;
    {
        const bool branch_taken_0x228698 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x22869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228698u;
            // 0x22869c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228698) {
            ctx->pc = 0x2286ACu;
            goto label_2286ac;
        }
    }
    ctx->pc = 0x2286A0u;
    // 0x2286a0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2286A0u;
    {
        const bool branch_taken_0x2286a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2286a0) {
            ctx->pc = 0x2286ACu;
            goto label_2286ac;
        }
    }
    ctx->pc = 0x2286A8u;
    // 0x2286a8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2286a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2286ac:
    // 0x2286ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2286ACu;
    {
        const bool branch_taken_0x2286ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2286ac) {
            ctx->pc = 0x2286D4u;
            goto label_2286d4;
        }
    }
    ctx->pc = 0x2286B4u;
    // 0x2286b4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2286b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2286b8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2286b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2286bc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2286bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2286c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2286c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2286c4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2286c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2286c8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2286c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2286cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2286ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2286d0: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x2286d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_2286d4:
    // 0x2286d4: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2286d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2286d8: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2286D8u;
    {
        const bool branch_taken_0x2286d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2286d8) {
            ctx->pc = 0x228700u;
            goto label_228700;
        }
    }
    ctx->pc = 0x2286E0u;
    // 0x2286e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2286e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2286e4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2286e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2286e8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2286e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2286ec: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2286ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2286f0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2286F0u;
    {
        const bool branch_taken_0x2286f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2286f0) {
            ctx->pc = 0x228720u;
            goto label_228720;
        }
    }
    ctx->pc = 0x2286F8u;
    // 0x2286f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2286F8u;
    {
        const bool branch_taken_0x2286f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2286F8u;
            // 0x2286fc: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286f8) {
            ctx->pc = 0x228720u;
            goto label_228720;
        }
    }
    ctx->pc = 0x228700u;
label_228700:
    // 0x228700: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x228700u;
    {
        const bool branch_taken_0x228700 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x228700) {
            ctx->pc = 0x228720u;
            goto label_228720;
        }
    }
    ctx->pc = 0x228708u;
    // 0x228708: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x228708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22870c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22870Cu;
    {
        const bool branch_taken_0x22870c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x22870c) {
            ctx->pc = 0x228720u;
            goto label_228720;
        }
    }
    ctx->pc = 0x228714u;
    // 0x228714: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x228714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x228718: 0x31823  negu        $v1, $v1
    ctx->pc = 0x228718u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x22871c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x22871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_228720:
    // 0x228720: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x228720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x228724: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x228724u;
    {
        const bool branch_taken_0x228724 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x228724) {
            ctx->pc = 0x228750u;
            goto label_228750;
        }
    }
    ctx->pc = 0x22872Cu;
    // 0x22872c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x228730: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x228730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x228734: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228738: 0x21023  negu        $v0, $v0
    ctx->pc = 0x228738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x22873c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x22873cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x228740: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x228740u;
    {
        const bool branch_taken_0x228740 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x228744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228740u;
            // 0x228744: 0x27b50074  addiu       $s5, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228740) {
            ctx->pc = 0x228788u;
            goto label_228788;
        }
    }
    ctx->pc = 0x228748u;
    // 0x228748: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x228748u;
    {
        const bool branch_taken_0x228748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228748u;
            // 0x22874c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228748) {
            ctx->pc = 0x228784u;
            goto label_228784;
        }
    }
    ctx->pc = 0x228750u;
label_228750:
    // 0x228750: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x228750u;
    {
        const bool branch_taken_0x228750 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x228754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228750u;
            // 0x228754: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228750) {
            ctx->pc = 0x228784u;
            goto label_228784;
        }
    }
    ctx->pc = 0x228758u;
    // 0x228758: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22875c: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22875Cu;
    {
        const bool branch_taken_0x22875c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x22875c) {
            ctx->pc = 0x228784u;
            goto label_228784;
        }
    }
    ctx->pc = 0x228764u;
    // 0x228764: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x228764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x228768: 0x21023  negu        $v0, $v0
    ctx->pc = 0x228768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x22876c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22876Cu;
    {
        const bool branch_taken_0x22876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22876Cu;
            // 0x228770: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22876c) {
            ctx->pc = 0x228784u;
            goto label_228784;
        }
    }
    ctx->pc = 0x228774u;
label_228774:
    // 0x228774: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228774u;
    {
        const bool branch_taken_0x228774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228774u;
            // 0x228778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228774) {
            ctx->pc = 0x228784u;
            goto label_228784;
        }
    }
    ctx->pc = 0x22877Cu;
    // 0x22877c: 0xc0899dc  jal         func_226770
    ctx->pc = 0x22877Cu;
    SET_GPR_U32(ctx, 31, 0x228784u);
    ctx->pc = 0x226770u;
    if (runtime->hasFunction(0x226770u)) {
        auto targetFn = runtime->lookupFunction(0x226770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228784u; }
        if (ctx->pc != 0x228784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPartsStep__16CMenuPosDataFormFv_0x226770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228784u; }
        if (ctx->pc != 0x228784u) { return; }
    }
    ctx->pc = 0x228784u;
label_228784:
    // 0x228784: 0x27b50074  addiu       $s5, $sp, 0x74
    ctx->pc = 0x228784u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_228788:
    // 0x228788: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x228788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22878c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x22878cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x228790: 0xc08a210  jal         func_228840
    ctx->pc = 0x228790u;
    SET_GPR_U32(ctx, 31, 0x228798u);
    ctx->pc = 0x228794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228790u;
            // 0x228794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228840u;
    if (runtime->hasFunction(0x228840u)) {
        auto targetFn = runtime->lookupFunction(0x228840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228798u; }
        if (ctx->pc != 0x228798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoveEnd__16CMenuPosDataFormFii_0x228840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228798u; }
        if (ctx->pc != 0x228798u) { return; }
    }
    ctx->pc = 0x228798u;
label_228798:
    // 0x228798: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228798u;
    {
        const bool branch_taken_0x228798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228798u;
            // 0x22879c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228798) {
            ctx->pc = 0x2287ACu;
            goto label_2287ac;
        }
    }
    ctx->pc = 0x2287A0u;
    // 0x2287a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2287a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2287a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2287a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2287a8: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x2287a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_2287ac:
    // 0x2287ac: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2287acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2287b0:
    // 0x2287b0: 0x80650051  lb          $a1, 0x51($v1)
    ctx->pc = 0x2287b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 81)));
    // 0x2287b4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2287B4u;
    {
        const bool branch_taken_0x2287b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2287B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2287B4u;
            // 0x2287b8: 0x24730051  addiu       $s3, $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287b4) {
            ctx->pc = 0x2287E8u;
            goto label_2287e8;
        }
    }
    ctx->pc = 0x2287BCu;
    // 0x2287bc: 0x90620055  lbu         $v0, 0x55($v1)
    ctx->pc = 0x2287bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 85)));
    // 0x2287c0: 0x24740055  addiu       $s4, $v1, 0x55
    ctx->pc = 0x2287c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x2287c4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2287c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2287c8: 0x90660059  lbu         $a2, 0x59($v1)
    ctx->pc = 0x2287c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 89)));
    // 0x2287cc: 0xc094558  jal         func_251560
    ctx->pc = 0x2287CCu;
    SET_GPR_U32(ctx, 31, 0x2287D4u);
    ctx->pc = 0x2287D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2287CCu;
            // 0x2287d0: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2287D4u; }
        if (ctx->pc != 0x2287D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2287D4u; }
        if (ctx->pc != 0x2287D4u) { return; }
    }
    ctx->pc = 0x2287D4u;
label_2287d4:
    // 0x2287d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2287D4u;
    {
        const bool branch_taken_0x2287d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2287d4) {
            ctx->pc = 0x2287E0u;
            goto label_2287e0;
        }
    }
    ctx->pc = 0x2287DCu;
    // 0x2287dc: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2287dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_2287e0:
    // 0x2287e0: 0x83a2007c  lb          $v0, 0x7C($sp)
    ctx->pc = 0x2287e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2287e4: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2287e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_2287e8:
    // 0x2287e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2287e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2287ec: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2287ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2287f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2287F0u;
    {
        const bool branch_taken_0x2287f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2287F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2287F0u;
            // 0x2287f4: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287f0) {
            ctx->pc = 0x2287B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2287b0;
        }
    }
    ctx->pc = 0x2287F8u;
    // 0x2287f8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2287f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2287fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2287fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228804: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x228804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x228808: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x228808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22880c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228810: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x228810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_228814:
    // 0x228814: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x228814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228818: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x228818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22881c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22881cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x228820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x228824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22882c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22882cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228830: 0x3e00008  jr          $ra
    ctx->pc = 0x228830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228830u;
            // 0x228834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228838u;
}
