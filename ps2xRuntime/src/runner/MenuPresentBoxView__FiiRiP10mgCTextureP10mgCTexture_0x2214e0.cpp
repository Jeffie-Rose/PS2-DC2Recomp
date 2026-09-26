#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPresentBoxView__FiiRiP10mgCTextureP10mgCTexture
// Address: 0x2214e0 - 0x22187c
void MenuPresentBoxView__FiiRiP10mgCTextureP10mgCTexture_0x2214e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPresentBoxView__FiiRiP10mgCTextureP10mgCTexture_0x2214e0");
#endif

    switch (ctx->pc) {
        case 0x221538u: goto label_221538;
        case 0x221588u: goto label_221588;
        case 0x221610u: goto label_221610;
        case 0x221650u: goto label_221650;
        case 0x221674u: goto label_221674;
        case 0x22168cu: goto label_22168c;
        case 0x2216f4u: goto label_2216f4;
        case 0x22171cu: goto label_22171c;
        case 0x2217fcu: goto label_2217fc;
        case 0x221854u: goto label_221854;
        default: break;
    }

    ctx->pc = 0x2214e0u;

    // 0x2214e0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2214e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2214e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2214e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2214e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2214e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2214ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2214ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2214f0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2214f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2214f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2214f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2214f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2214fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x221500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221504: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x221504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22150c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22150cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221514: 0x8f839360  lw          $v1, -0x6CA0($gp)
    ctx->pc = 0x221514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939488)));
    // 0x221518: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x221518u;
    {
        const bool branch_taken_0x221518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221518u;
            // 0x22151c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221518) {
            ctx->pc = 0x221854u;
            goto label_221854;
        }
    }
    ctx->pc = 0x221520u;
    // 0x221520: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221524: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x221524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x221528: 0x148300ca  bne         $a0, $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x221528u;
    {
        const bool branch_taken_0x221528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221528u;
            // 0x22152c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221528) {
            ctx->pc = 0x221854u;
            goto label_221854;
        }
    }
    ctx->pc = 0x221530u;
    // 0x221530: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x221530u;
    SET_GPR_U32(ctx, 31, 0x221538u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221538u; }
        if (ctx->pc != 0x221538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221538u; }
        if (ctx->pc != 0x221538u) { return; }
    }
    ctx->pc = 0x221538u;
label_221538:
    // 0x221538: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x22153c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x22153cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x221540: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221540u;
    {
        const bool branch_taken_0x221540 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x221544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221540u;
            // 0x221544: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221540) {
            ctx->pc = 0x221550u;
            goto label_221550;
        }
    }
    ctx->pc = 0x221548u;
    // 0x221548: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x221548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22154c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22154cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_221550:
    // 0x221550: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x221550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x221554: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x221554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x221558: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x221558u;
    {
        const bool branch_taken_0x221558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221558) {
            ctx->pc = 0x221568u;
            goto label_221568;
        }
    }
    ctx->pc = 0x221560u;
    // 0x221560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x221560u;
    {
        const bool branch_taken_0x221560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221560u;
            // 0x221564: 0x26520038  addiu       $s2, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221560) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x221568u;
label_221568:
    // 0x221568: 0x2652ffba  addiu       $s2, $s2, -0x46
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967226));
label_22156c:
    // 0x22156c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x22156cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x221570: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x221570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x221574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221578: 0x2484cdd0  addiu       $a0, $a0, -0x3230
    ctx->pc = 0x221578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954448));
    // 0x22157c: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x22157cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x221580: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221580u;
    SET_GPR_U32(ctx, 31, 0x221588u);
    ctx->pc = 0x221584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221580u;
            // 0x221584: 0x24080038  addiu       $t0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221588u; }
        if (ctx->pc != 0x221588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221588u; }
        if (ctx->pc != 0x221588u) { return; }
    }
    ctx->pc = 0x221588u;
label_221588:
    // 0x221588: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x221588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22158c: 0x8c22cdd0  lw          $v0, -0x3230($at)
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954448)));
    // 0x221590: 0x2841015d  slti        $at, $v0, 0x15D
    ctx->pc = 0x221590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)349) ? 1 : 0);
    // 0x221594: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x221594u;
    {
        const bool branch_taken_0x221594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x221594) {
            ctx->pc = 0x2215A8u;
            goto label_2215a8;
        }
    }
    ctx->pc = 0x22159Cu;
    // 0x22159c: 0x2402015c  addiu       $v0, $zero, 0x15C
    ctx->pc = 0x22159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2215a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2215a4: 0xac22cdd0  sw          $v0, -0x3230($at)
    ctx->pc = 0x2215a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954448), GPR_U32(ctx, 2));
label_2215a8:
    // 0x2215a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2215ac: 0x8c22cdd0  lw          $v0, -0x3230($at)
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954448)));
    // 0x2215b0: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x2215b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2215b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2215B4u;
    {
        const bool branch_taken_0x2215b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215b4) {
            ctx->pc = 0x2215C8u;
            goto label_2215c8;
        }
    }
    ctx->pc = 0x2215BCu;
    // 0x2215bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2215bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2215c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2215c4: 0xac22cdd0  sw          $v0, -0x3230($at)
    ctx->pc = 0x2215c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954448), GPR_U32(ctx, 2));
label_2215c8:
    // 0x2215c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2215cc: 0x8c22cdd4  lw          $v0, -0x322C($at)
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954452)));
    // 0x2215d0: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x2215d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2215d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2215D4u;
    {
        const bool branch_taken_0x2215d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215d4) {
            ctx->pc = 0x2215E8u;
            goto label_2215e8;
        }
    }
    ctx->pc = 0x2215DCu;
    // 0x2215dc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2215dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2215e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2215e4: 0xac22cdd4  sw          $v0, -0x322C($at)
    ctx->pc = 0x2215e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954452), GPR_U32(ctx, 2));
label_2215e8:
    // 0x2215e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2215ec: 0x8c22cdd4  lw          $v0, -0x322C($at)
    ctx->pc = 0x2215ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954452)));
    // 0x2215f0: 0x28410155  slti        $at, $v0, 0x155
    ctx->pc = 0x2215f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)341) ? 1 : 0);
    // 0x2215f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2215F4u;
    {
        const bool branch_taken_0x2215f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2215F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2215F4u;
            // 0x2215f8: 0x24020154  addiu       $v0, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215f4) {
            ctx->pc = 0x221604u;
            goto label_221604;
        }
    }
    ctx->pc = 0x2215FCu;
    // 0x2215fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2215fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221600: 0xac22cdd4  sw          $v0, -0x322C($at)
    ctx->pc = 0x221600u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954452), GPR_U32(ctx, 2));
label_221604:
    // 0x221604: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x221604u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221608: 0xc08878c  jal         func_221E30
    ctx->pc = 0x221608u;
    SET_GPR_U32(ctx, 31, 0x221610u);
    ctx->pc = 0x22160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221608u;
            // 0x22160c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221610u; }
        if (ctx->pc != 0x221610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221610u; }
        if (ctx->pc != 0x221610u) { return; }
    }
    ctx->pc = 0x221610u;
label_221610:
    // 0x221610: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x221610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221614: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x221618: 0xc422cdd0  lwc1        $f2, -0x3230($at)
    ctx->pc = 0x221618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22161c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x22161cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x221620: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x221620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x221624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22162c: 0x24c603c0  addiu       $a2, $a2, 0x3C0
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
    // 0x221630: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x221630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221634: 0xc421cdd4  lwc1        $f1, -0x322C($at)
    ctx->pc = 0x221634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221638: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x221638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22163c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221640: 0xc420cdd8  lwc1        $f0, -0x3228($at)
    ctx->pc = 0x221640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221644: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x221644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x221648: 0xc0884d0  jal         func_221340
    ctx->pc = 0x221648u;
    SET_GPR_U32(ctx, 31, 0x221650u);
    ctx->pc = 0x22164Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221648u;
            // 0x22164c: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221340u;
    if (runtime->hasFunction(0x221340u)) {
        auto targetFn = runtime->lookupFunction(0x221340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221650u; }
        if (ctx->pc != 0x221650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWindowHelp__FP11mgCDrawPrimP10mgCTextureffffPs_0x221340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221650u; }
        if (ctx->pc != 0x221650u) { return; }
    }
    ctx->pc = 0x221650u;
label_221650:
    // 0x221650: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x221650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x221654: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x221654u;
    {
        const bool branch_taken_0x221654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221654) {
            ctx->pc = 0x221674u;
            goto label_221674;
        }
    }
    ctx->pc = 0x22165Cu;
    // 0x22165c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x22165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x221660: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221660u;
    {
        const bool branch_taken_0x221660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221660) {
            ctx->pc = 0x221674u;
            goto label_221674;
        }
    }
    ctx->pc = 0x221668u;
    // 0x221668: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x221668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22166c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x22166Cu;
    SET_GPR_U32(ctx, 31, 0x221674u);
    ctx->pc = 0x221670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22166Cu;
            // 0x221670: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221674u; }
        if (ctx->pc != 0x221674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221674u; }
        if (ctx->pc != 0x221674u) { return; }
    }
    ctx->pc = 0x221674u;
label_221674:
    // 0x221674: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x221674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221678: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x221678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22167c: 0x8c23cdd0  lw          $v1, -0x3230($at)
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954448)));
    // 0x221680: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x221680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221684: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x221684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221688: 0x2471000e  addiu       $s1, $v1, 0xE
    ctx->pc = 0x221688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_22168c:
    // 0x22168c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x221690: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x221690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221694: 0x2463cde0  addiu       $v1, $v1, -0x3220
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954464));
    // 0x221698: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x221698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x22169c: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x22169cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2216a0: 0x8423cdd4  lh          $v1, -0x322C($at)
    ctx->pc = 0x2216a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954452)));
    // 0x2216a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2216a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2216a8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x2216a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2216ac: 0x8f839360  lw          $v1, -0x6CA0($gp)
    ctx->pc = 0x2216acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939488)));
    // 0x2216b0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2216b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2216b4: 0x84630010  lh          $v1, 0x10($v1)
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2216b8: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2216B8u;
    {
        const bool branch_taken_0x2216b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2216BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2216B8u;
            // 0x2216bc: 0x24860002  addiu       $a2, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216b8) {
            ctx->pc = 0x22171Cu;
            goto label_22171c;
        }
    }
    ctx->pc = 0x2216C0u;
    // 0x2216c0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x2216c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2216c4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2216c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2216c8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x2216c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2216cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2216ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2216d0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2216d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2216d4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2216d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2216d8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2216d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2216dc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2216dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2216e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2216e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2216e4: 0x0  nop
    ctx->pc = 0x2216e4u;
    // NOP
    // 0x2216e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2216e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2216ec: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2216ECu;
    SET_GPR_U32(ctx, 31, 0x2216F4u);
    ctx->pc = 0x2216F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2216ECu;
            // 0x2216f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2216F4u; }
        if (ctx->pc != 0x2216F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2216F4u; }
        if (ctx->pc != 0x2216F4u) { return; }
    }
    ctx->pc = 0x2216F4u;
label_2216f4:
    // 0x2216f4: 0x8f829360  lw          $v0, -0x6CA0($gp)
    ctx->pc = 0x2216f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939488)));
    // 0x2216f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2216f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216fc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2216fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x221700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x221700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221704: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221708: 0x278982b0  addiu       $t1, $gp, -0x7D50
    ctx->pc = 0x221708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935216));
    // 0x22170c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x22170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x221710: 0x84460010  lh          $a2, 0x10($v0)
    ctx->pc = 0x221710u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221714: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x221714u;
    SET_GPR_U32(ctx, 31, 0x22171Cu);
    ctx->pc = 0x221718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221714u;
            // 0x221718: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22171Cu; }
        if (ctx->pc != 0x22171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22171Cu; }
        if (ctx->pc != 0x22171Cu) { return; }
    }
    ctx->pc = 0x22171Cu;
label_22171c:
    // 0x22171c: 0x0  nop
    ctx->pc = 0x22171cu;
    // NOP
    // 0x221720: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x221720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x221724: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x221724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x221728: 0x26310029  addiu       $s1, $s1, 0x29
    ctx->pc = 0x221728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 41));
    // 0x22172c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x22172cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x221730: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x221730u;
    {
        const bool branch_taken_0x221730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221730u;
            // 0x221734: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221730) {
            ctx->pc = 0x22168Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22168c;
        }
    }
    ctx->pc = 0x221738u;
    // 0x221738: 0x9383936c  lbu         $v1, -0x6C94($gp)
    ctx->pc = 0x221738u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939500)));
    // 0x22173c: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22173Cu;
    {
        const bool branch_taken_0x22173c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22173c) {
            ctx->pc = 0x221854u;
            goto label_221854;
        }
    }
    ctx->pc = 0x221744u;
    // 0x221744: 0x12c00043  beqz        $s6, . + 4 + (0x43 << 2)
    ctx->pc = 0x221744u;
    {
        const bool branch_taken_0x221744 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x221744) {
            ctx->pc = 0x221854u;
            goto label_221854;
        }
    }
    ctx->pc = 0x22174Cu;
    // 0x22174c: 0x83829374  lb          $v0, -0x6C8C($gp)
    ctx->pc = 0x22174cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939508)));
    // 0x221750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221750u;
    {
        const bool branch_taken_0x221750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221750u;
            // 0x221754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221750) {
            ctx->pc = 0x221760u;
            goto label_221760;
        }
    }
    ctx->pc = 0x221758u;
    // 0x221758: 0xaf809370  sw          $zero, -0x6C90($gp)
    ctx->pc = 0x221758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939504), GPR_U32(ctx, 0));
    // 0x22175c: 0xa3829374  sb          $v0, -0x6C8C($gp)
    ctx->pc = 0x22175cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939508), (uint8_t)GPR_U32(ctx, 2));
label_221760:
    // 0x221760: 0x8f849368  lw          $a0, -0x6C98($gp)
    ctx->pc = 0x221760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x221764: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x221764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x221768: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x221768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x22176c: 0x2463cde0  addiu       $v1, $v1, -0x3220
    ctx->pc = 0x22176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954464));
    // 0x221770: 0xc7839370  lwc1        $f3, -0x6C90($gp)
    ctx->pc = 0x221770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x221774: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x221778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22177c: 0x8422cde0  lh          $v0, -0x3220($at)
    ctx->pc = 0x22177cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954464)));
    // 0x221780: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x221780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x221784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x221784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221788: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x221788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22178c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22178cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221790: 0x0  nop
    ctx->pc = 0x221790u;
    // NOP
    // 0x221794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221798: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x221798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22179c: 0x0  nop
    ctx->pc = 0x22179cu;
    // NOP
    // 0x2217a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2217a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2217a4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2217a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2217a8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2217a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2217ac: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2217acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2217b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2217b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2217b4: 0x0  nop
    ctx->pc = 0x2217b4u;
    // NOP
    // 0x2217b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2217B8u;
    {
        const bool branch_taken_0x2217b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2217BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2217B8u;
            // 0x2217bc: 0xe7819370  swc1        $f1, -0x6C90($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217b8) {
            ctx->pc = 0x2217C4u;
            goto label_2217c4;
        }
    }
    ctx->pc = 0x2217C0u;
    // 0x2217c0: 0xe7809370  swc1        $f0, -0x6C90($gp)
    ctx->pc = 0x2217c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939504), bits); }
label_2217c4:
    // 0x2217c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2217c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2217c8: 0x8422cde8  lh          $v0, -0x3218($at)
    ctx->pc = 0x2217c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954472)));
    // 0x2217cc: 0xc7819370  lwc1        $f1, -0x6C90($gp)
    ctx->pc = 0x2217ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2217d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2217d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2217d4: 0x0  nop
    ctx->pc = 0x2217d4u;
    // NOP
    // 0x2217d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2217d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2217dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2217dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2217e0: 0x0  nop
    ctx->pc = 0x2217e0u;
    // NOP
    // 0x2217e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2217E4u;
    {
        const bool branch_taken_0x2217e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2217e4) {
            ctx->pc = 0x2217F0u;
            goto label_2217f0;
        }
    }
    ctx->pc = 0x2217ECu;
    // 0x2217ec: 0xe7809370  swc1        $f0, -0x6C90($gp)
    ctx->pc = 0x2217ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939504), bits); }
label_2217f0:
    // 0x2217f0: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2217f4: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2217F4u;
    SET_GPR_U32(ctx, 31, 0x2217FCu);
    ctx->pc = 0x2217F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2217F4u;
            // 0x2217f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2217FCu; }
        if (ctx->pc != 0x2217FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2217FCu; }
        if (ctx->pc != 0x2217FCu) { return; }
    }
    ctx->pc = 0x2217FCu;
label_2217fc:
    // 0x2217fc: 0xdf839378  ld          $v1, -0x6C88($gp)
    ctx->pc = 0x2217fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294939512)));
    // 0x221800: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x221800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x221804: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x221804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x221808: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x221808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22180c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22180cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221810: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x221810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x221814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221818: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x221818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22181c: 0x2442cde2  addiu       $v0, $v0, -0x321E
    ctx->pc = 0x22181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954466));
    // 0x221820: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x221820u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x221824: 0xc7819370  lwc1        $f1, -0x6C90($gp)
    ctx->pc = 0x221824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221828: 0x8f839368  lw          $v1, -0x6C98($gp)
    ctx->pc = 0x221828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x22182c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22182cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x221830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x221830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221838: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x221838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x22183c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x22183cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221844: 0x0  nop
    ctx->pc = 0x221844u;
    // NOP
    // 0x221848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22184c: 0xc088f50  jal         func_223D40
    ctx->pc = 0x22184Cu;
    SET_GPR_U32(ctx, 31, 0x221854u);
    ctx->pc = 0x221850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22184Cu;
            // 0x221850: 0xe7a001ac  swc1        $f0, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D40u;
    if (runtime->hasFunction(0x223D40u)) {
        auto targetFn = runtime->lookupFunction(0x223D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221854u; }
        if (ctx->pc != 0x221854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffi_0x223d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221854u; }
        if (ctx->pc != 0x221854u) { return; }
    }
    ctx->pc = 0x221854u;
label_221854:
    // 0x221854: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x221854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221858: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x221858u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22185c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22185cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22186c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22186cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221874: 0x3e00008  jr          $ra
    ctx->pc = 0x221874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221874u;
            // 0x221878: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22187Cu;
}
