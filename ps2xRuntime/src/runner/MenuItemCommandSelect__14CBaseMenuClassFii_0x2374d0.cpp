#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCommandSelect__14CBaseMenuClassFii
// Address: 0x2374d0 - 0x2384c4
void MenuItemCommandSelect__14CBaseMenuClassFii_0x2374d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCommandSelect__14CBaseMenuClassFii_0x2374d0");
#endif

    switch (ctx->pc) {
        case 0x237514u: goto label_237514;
        case 0x2375bcu: goto label_2375bc;
        case 0x237678u: goto label_237678;
        case 0x2376a8u: goto label_2376a8;
        case 0x2376c0u: goto label_2376c0;
        case 0x2376d8u: goto label_2376d8;
        case 0x237770u: goto label_237770;
        case 0x237784u: goto label_237784;
        case 0x2377d0u: goto label_2377d0;
        case 0x23781cu: goto label_23781c;
        case 0x23782cu: goto label_23782c;
        case 0x237890u: goto label_237890;
        case 0x2378f0u: goto label_2378f0;
        case 0x237904u: goto label_237904;
        case 0x23797cu: goto label_23797c;
        case 0x2379d8u: goto label_2379d8;
        case 0x2379e4u: goto label_2379e4;
        case 0x2379fcu: goto label_2379fc;
        case 0x237a8cu: goto label_237a8c;
        case 0x237ac8u: goto label_237ac8;
        case 0x237b38u: goto label_237b38;
        case 0x237b44u: goto label_237b44;
        case 0x237b58u: goto label_237b58;
        case 0x237bd8u: goto label_237bd8;
        case 0x237c24u: goto label_237c24;
        case 0x237cccu: goto label_237ccc;
        case 0x237d20u: goto label_237d20;
        case 0x237d3cu: goto label_237d3c;
        case 0x237db0u: goto label_237db0;
        case 0x237dc0u: goto label_237dc0;
        case 0x237e14u: goto label_237e14;
        case 0x237ebcu: goto label_237ebc;
        case 0x237f4cu: goto label_237f4c;
        case 0x237fb0u: goto label_237fb0;
        case 0x237fd0u: goto label_237fd0;
        case 0x238028u: goto label_238028;
        case 0x2380dcu: goto label_2380dc;
        case 0x238104u: goto label_238104;
        case 0x238118u: goto label_238118;
        case 0x238138u: goto label_238138;
        case 0x238148u: goto label_238148;
        case 0x238154u: goto label_238154;
        case 0x238160u: goto label_238160;
        case 0x2381c8u: goto label_2381c8;
        case 0x2381dcu: goto label_2381dc;
        case 0x238204u: goto label_238204;
        case 0x238214u: goto label_238214;
        case 0x238228u: goto label_238228;
        case 0x23825cu: goto label_23825c;
        case 0x238274u: goto label_238274;
        case 0x238280u: goto label_238280;
        case 0x238294u: goto label_238294;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382f4u: goto label_2382f4;
        case 0x238300u: goto label_238300;
        case 0x238318u: goto label_238318;
        case 0x238328u: goto label_238328;
        case 0x238340u: goto label_238340;
        case 0x238424u: goto label_238424;
        case 0x238474u: goto label_238474;
        default: break;
    }

    ctx->pc = 0x2374d0u;

    // 0x2374d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2374d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2374d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2374d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2374d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2374d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2374dc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2374dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2374e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2374e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2374e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2374e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2374e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2374e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2374ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2374ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2374f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2374f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2374f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2374f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2374f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2374fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2374fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x237504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x237504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x237508: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x237508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x23750c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x23750Cu;
    SET_GPR_U32(ctx, 31, 0x237514u);
    ctx->pc = 0x237510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23750Cu;
            // 0x237510: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237514u; }
        if (ctx->pc != 0x237514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237514u; }
        if (ctx->pc != 0x237514u) { return; }
    }
    ctx->pc = 0x237514u;
label_237514:
    // 0x237514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237518: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x237518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x23751c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237520: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237524: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x237524u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x237528: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x237528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x23752c: 0x8685005a  lh          $a1, 0x5A($s4)
    ctx->pc = 0x23752cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x237530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x237534: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x237534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x237538: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x237538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23753c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23753cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x237540: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x237540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x237544: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x237544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237548: 0x108203ce  beq         $a0, $v0, . + 4 + (0x3CE << 2)
    ctx->pc = 0x237548u;
    {
        const bool branch_taken_0x237548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23754Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237548u;
            // 0x23754c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237548) {
            ctx->pc = 0x238484u;
            goto label_238484;
        }
    }
    ctx->pc = 0x237550u;
    // 0x237550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237554: 0x108303cb  beq         $a0, $v1, . + 4 + (0x3CB << 2)
    ctx->pc = 0x237554u;
    {
        const bool branch_taken_0x237554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x237554) {
            ctx->pc = 0x238484u;
            goto label_238484;
        }
    }
    ctx->pc = 0x23755Cu;
    // 0x23755c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23755Cu;
    {
        const bool branch_taken_0x23755c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23755c) {
            ctx->pc = 0x23756Cu;
            goto label_23756c;
        }
    }
    ctx->pc = 0x237564u;
    // 0x237564: 0x100003cb  b           . + 4 + (0x3CB << 2)
    ctx->pc = 0x237564u;
    {
        const bool branch_taken_0x237564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237564u;
            // 0x237568: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237564) {
            ctx->pc = 0x238494u;
            goto label_238494;
        }
    }
    ctx->pc = 0x23756Cu;
label_23756c:
    // 0x23756c: 0x838295f8  lb          $v0, -0x6A08($gp)
    ctx->pc = 0x23756cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940152)));
    // 0x237570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237570u;
    {
        const bool branch_taken_0x237570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237570) {
            ctx->pc = 0x237580u;
            goto label_237580;
        }
    }
    ctx->pc = 0x237578u;
    // 0x237578: 0xa38395f8  sb          $v1, -0x6A08($gp)
    ctx->pc = 0x237578u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940152), (uint8_t)GPR_U32(ctx, 3));
    // 0x23757c: 0xa38095f4  sb          $zero, -0x6A0C($gp)
    ctx->pc = 0x23757cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940148), (uint8_t)GPR_U32(ctx, 0));
label_237580:
    // 0x237580: 0x838295f4  lb          $v0, -0x6A0C($gp)
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940148)));
    // 0x237584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237588: 0xa38295f4  sb          $v0, -0x6A0C($gp)
    ctx->pc = 0x237588u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940148), (uint8_t)GPR_U32(ctx, 2));
    // 0x23758c: 0x838295f4  lb          $v0, -0x6A0C($gp)
    ctx->pc = 0x23758cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940148)));
    // 0x237590: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x237590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x237594: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237594u;
    {
        const bool branch_taken_0x237594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237594u;
            // 0x237598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237594) {
            ctx->pc = 0x2375A0u;
            goto label_2375a0;
        }
    }
    ctx->pc = 0x23759Cu;
    // 0x23759c: 0xa38095f4  sb          $zero, -0x6A0C($gp)
    ctx->pc = 0x23759cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940148), (uint8_t)GPR_U32(ctx, 0));
label_2375a0:
    // 0x2375a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2375a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2375a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375a8: 0x3c0380dc  lui         $v1, 0x80DC
    ctx->pc = 0x2375a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32988 << 16));
    // 0x2375ac: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x2375acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x2375b0: 0x34644848  ori         $a0, $v1, 0x4848
    ctx->pc = 0x2375b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18504);
    // 0x2375b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2375b8: 0x34436a6b  ori         $v1, $v0, 0x6A6B
    ctx->pc = 0x2375b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
label_2375bc:
    // 0x2375bc: 0x2871021  addu        $v0, $s4, $a3
    ctx->pc = 0x2375bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2375c0: 0x844200b0  lh          $v0, 0xB0($v0)
    ctx->pc = 0x2375c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2375c4: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2375C4u;
    {
        const bool branch_taken_0x2375c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2375c4) {
            ctx->pc = 0x237604u;
            goto label_237604;
        }
    }
    ctx->pc = 0x2375CCu;
    // 0x2375cc: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2375CCu;
    {
        const bool branch_taken_0x2375cc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2375D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2375CCu;
            // 0x2375d0: 0x28c10014  slti        $at, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375cc) {
            ctx->pc = 0x2375E0u;
            goto label_2375e0;
        }
    }
    ctx->pc = 0x2375D4u;
    // 0x2375d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2375D4u;
    {
        const bool branch_taken_0x2375d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2375D4u;
            // 0x2375d8: 0x2281021  addu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375d4) {
            ctx->pc = 0x2375E0u;
            goto label_2375e0;
        }
    }
    ctx->pc = 0x2375DCu;
    // 0x2375dc: 0xac441cd4  sw          $a0, 0x1CD4($v0)
    ctx->pc = 0x2375dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 4));
label_2375e0:
    // 0x2375e0: 0x838295f4  lb          $v0, -0x6A0C($gp)
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940148)));
    // 0x2375e4: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x2375e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2375e8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2375E8u;
    {
        const bool branch_taken_0x2375e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2375e8) {
            ctx->pc = 0x237604u;
            goto label_237604;
        }
    }
    ctx->pc = 0x2375F0u;
    // 0x2375f0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2375F0u;
    {
        const bool branch_taken_0x2375f0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2375F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2375F0u;
            // 0x2375f4: 0x28c10014  slti        $at, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375f0) {
            ctx->pc = 0x237604u;
            goto label_237604;
        }
    }
    ctx->pc = 0x2375F8u;
    // 0x2375f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2375F8u;
    {
        const bool branch_taken_0x2375f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2375F8u;
            // 0x2375fc: 0x2281021  addu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375f8) {
            ctx->pc = 0x237604u;
            goto label_237604;
        }
    }
    ctx->pc = 0x237600u;
    // 0x237600: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x237600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_237604:
    // 0x237604: 0x0  nop
    ctx->pc = 0x237604u;
    // NOP
    // 0x237608: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23760c: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x23760cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x237610: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x237614: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x237614u;
    {
        const bool branch_taken_0x237614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237614u;
            // 0x237618: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237614) {
            ctx->pc = 0x2375BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2375bc;
        }
    }
    ctx->pc = 0x23761Cu;
    // 0x23761c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x23761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x237620: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x237620u;
    {
        const bool branch_taken_0x237620 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237620u;
            // 0x237624: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237620) {
            ctx->pc = 0x23764Cu;
            goto label_23764c;
        }
    }
    ctx->pc = 0x237628u;
    // 0x237628: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x237628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x23762c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23762Cu;
    {
        const bool branch_taken_0x23762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23762Cu;
            // 0x237630: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23762c) {
            ctx->pc = 0x23763Cu;
            goto label_23763c;
        }
    }
    ctx->pc = 0x237634u;
    // 0x237634: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x237634u;
    {
        const bool branch_taken_0x237634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237634u;
            // 0x237638: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237634) {
            ctx->pc = 0x23766Cu;
            goto label_23766c;
        }
    }
    ctx->pc = 0x23763Cu;
label_23763c:
    // 0x23763c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23763Cu;
    {
        const bool branch_taken_0x23763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23763Cu;
            // 0x237640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23763c) {
            ctx->pc = 0x237670u;
            goto label_237670;
        }
    }
    ctx->pc = 0x237644u;
    // 0x237644: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x237644u;
    {
        const bool branch_taken_0x237644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237644u;
            // 0x237648: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237644) {
            ctx->pc = 0x23766Cu;
            goto label_23766c;
        }
    }
    ctx->pc = 0x23764Cu;
label_23764c:
    // 0x23764c: 0x3262000d  andi        $v0, $s3, 0xD
    ctx->pc = 0x23764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)13);
    // 0x237650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237650u;
    {
        const bool branch_taken_0x237650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237650u;
            // 0x237654: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237650) {
            ctx->pc = 0x237660u;
            goto label_237660;
        }
    }
    ctx->pc = 0x237658u;
    // 0x237658: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237658u;
    {
        const bool branch_taken_0x237658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237658u;
            // 0x23765c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237658) {
            ctx->pc = 0x23766Cu;
            goto label_23766c;
        }
    }
    ctx->pc = 0x237660u;
label_237660:
    // 0x237660: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237660u;
    {
        const bool branch_taken_0x237660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237660) {
            ctx->pc = 0x23766Cu;
            goto label_23766c;
        }
    }
    ctx->pc = 0x237668u;
    // 0x237668: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x237668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23766c:
    // 0x23766c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237670:
    // 0x237670: 0xc0875fc  jal         func_21D7F0
    ctx->pc = 0x237670u;
    SET_GPR_U32(ctx, 31, 0x237678u);
    ctx->pc = 0x21D7F0u;
    if (runtime->hasFunction(0x21D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x21D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237678u; }
        if (ctx->pc != 0x237678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandMsgCursor__7CDC2MesFv_0x21d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237678u; }
        if (ctx->pc != 0x237678u) { return; }
    }
    ctx->pc = 0x237678u;
label_237678:
    // 0x237678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23767c: 0x1242036b  beq         $s2, $v0, . + 4 + (0x36B << 2)
    ctx->pc = 0x23767Cu;
    {
        const bool branch_taken_0x23767c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x23767c) {
            ctx->pc = 0x23842Cu;
            goto label_23842c;
        }
    }
    ctx->pc = 0x237684u;
    // 0x237684: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x237684u;
    {
        const bool branch_taken_0x237684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x237684) {
            ctx->pc = 0x237694u;
            goto label_237694;
        }
    }
    ctx->pc = 0x23768Cu;
    // 0x23768c: 0x1000036e  b           . + 4 + (0x36E << 2)
    ctx->pc = 0x23768Cu;
    {
        const bool branch_taken_0x23768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23768c) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237694u;
label_237694:
    // 0x237694: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237698: 0x1040036b  beqz        $v0, . + 4 + (0x36B << 2)
    ctx->pc = 0x237698u;
    {
        const bool branch_taken_0x237698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237698u;
            // 0x23769c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237698) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x2376A0u;
    // 0x2376a0: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2376A0u;
    SET_GPR_U32(ctx, 31, 0x2376A8u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376A8u; }
        if (ctx->pc != 0x2376A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376A8u; }
        if (ctx->pc != 0x2376A8u) { return; }
    }
    ctx->pc = 0x2376A8u;
label_2376a8:
    // 0x2376a8: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x2376a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2376ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2376acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376b0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2376b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2376b4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2376b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2376b8: 0xc067610  jal         func_19D840
    ctx->pc = 0x2376B8u;
    SET_GPR_U32(ctx, 31, 0x2376C0u);
    ctx->pc = 0x2376BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2376B8u;
            // 0x2376bc: 0x2452ec78  addiu       $s2, $v0, -0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376C0u; }
        if (ctx->pc != 0x2376C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376C0u; }
        if (ctx->pc != 0x2376C0u) { return; }
    }
    ctx->pc = 0x2376C0u;
label_2376c0:
    // 0x2376c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2376c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376c4: 0x2a0082a  slt         $at, $s5, $zero
    ctx->pc = 0x2376c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2376c8: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2376C8u;
    {
        const bool branch_taken_0x2376c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2376CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2376C8u;
            // 0x2376cc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376c8) {
            ctx->pc = 0x237704u;
            goto label_237704;
        }
    }
    ctx->pc = 0x2376D0u;
    // 0x2376d0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x2376D0u;
    SET_GPR_U32(ctx, 31, 0x2376D8u);
    ctx->pc = 0x2376D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2376D0u;
            // 0x2376d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376D8u; }
        if (ctx->pc != 0x2376D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376D8u; }
        if (ctx->pc != 0x2376D8u) { return; }
    }
    ctx->pc = 0x2376D8u;
label_2376d8:
    // 0x2376d8: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2376d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2376dc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2376DCu;
    {
        const bool branch_taken_0x2376dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2376dc) {
            ctx->pc = 0x237704u;
            goto label_237704;
        }
    }
    ctx->pc = 0x2376E4u;
    // 0x2376e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2376e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2376e8: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2376e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2376ec: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x2376ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x2376f0: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x2376f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2376f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2376f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2376f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2376f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2376fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2376fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237700: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x237700u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237704:
    // 0x237704: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237708: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x237708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23770c: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23770Cu;
    {
        const bool branch_taken_0x23770c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x237710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23770Cu;
            // 0x237710: 0xa032d802  sb          $s2, -0x27FE($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294957058), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23770c) {
            ctx->pc = 0x237724u;
            goto label_237724;
        }
    }
    ctx->pc = 0x237714u;
    // 0x237714: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237718: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23771c: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x23771Cu;
    {
        const bool branch_taken_0x23771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23771Cu;
            // 0x237720: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23771c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237724u;
label_237724:
    // 0x237724: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x237724u;
    {
        const bool branch_taken_0x237724 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x237728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237724u;
            // 0x237728: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237724) {
            ctx->pc = 0x23773Cu;
            goto label_23773c;
        }
    }
    ctx->pc = 0x23772Cu;
    // 0x23772c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237730: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237734: 0x10000331  b           . + 4 + (0x331 << 2)
    ctx->pc = 0x237734u;
    {
        const bool branch_taken_0x237734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237734u;
            // 0x237738: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237734) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x23773Cu;
label_23773c:
    // 0x23773c: 0x16440004  bne         $s2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23773Cu;
    {
        const bool branch_taken_0x23773c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x237740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23773Cu;
            // 0x237740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23773c) {
            ctx->pc = 0x237750u;
            goto label_237750;
        }
    }
    ctx->pc = 0x237744u;
    // 0x237744: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237748: 0x1000032c  b           . + 4 + (0x32C << 2)
    ctx->pc = 0x237748u;
    {
        const bool branch_taken_0x237748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237748u;
            // 0x23774c: 0xa424d800  sh          $a0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237748) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237750u;
label_237750:
    // 0x237750: 0x16420056  bne         $s2, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x237750u;
    {
        const bool branch_taken_0x237750 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237750u;
            // 0x237754: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237750) {
            ctx->pc = 0x2378ACu;
            goto label_2378ac;
        }
    }
    ctx->pc = 0x237758u;
    // 0x237758: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23775c: 0xa425d804  sh          $a1, -0x27FC($at)
    ctx->pc = 0x23775cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 5));
    // 0x237760: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237764: 0x84500002  lh          $s0, 0x2($v0)
    ctx->pc = 0x237764u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237768: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x237768u;
    SET_GPR_U32(ctx, 31, 0x237770u);
    ctx->pc = 0x23776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237768u;
            // 0x23776c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237770u; }
        if (ctx->pc != 0x237770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237770u; }
        if (ctx->pc != 0x237770u) { return; }
    }
    ctx->pc = 0x237770u;
label_237770:
    // 0x237770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237778: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x237778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x23777c: 0xc06847c  jal         func_1A11F0
    ctx->pc = 0x23777Cu;
    SET_GPR_U32(ctx, 31, 0x237784u);
    ctx->pc = 0x237780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23777Cu;
            // 0x237780: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11F0u;
    if (runtime->hasFunction(0x1A11F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237784u; }
        if (ctx->pc != 0x237784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsItemtypeWhoisEquip__FiPi_0x1a11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237784u; }
        if (ctx->pc != 0x237784u) { return; }
    }
    ctx->pc = 0x237784u;
label_237784:
    // 0x237784: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237788: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x237788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23778c: 0xa022d803  sb          $v0, -0x27FD($at)
    ctx->pc = 0x23778cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957059), (uint8_t)GPR_U32(ctx, 2));
    // 0x237790: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x237790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
    // 0x237794: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237798: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x237798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x23779c: 0x8025d803  lb          $a1, -0x27FD($at)
    ctx->pc = 0x23779cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957059)));
    // 0x2377a0: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2377a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2377a4: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2377a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2377ac: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2377acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x2377b0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2377b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2377b4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2377B4u;
    {
        const bool branch_taken_0x2377b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2377B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2377B4u;
            // 0x2377b8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377b4) {
            ctx->pc = 0x237814u;
            goto label_237814;
        }
    }
    ctx->pc = 0x2377BCu;
    // 0x2377bc: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2377bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2377c0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2377c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2377c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2377c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2377c8: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x2377C8u;
    SET_GPR_U32(ctx, 31, 0x2377D0u);
    ctx->pc = 0x2377CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2377C8u;
            // 0x2377cc: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2377D0u; }
        if (ctx->pc != 0x2377D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2377D0u; }
        if (ctx->pc != 0x2377D0u) { return; }
    }
    ctx->pc = 0x2377D0u;
label_2377d0:
    // 0x2377d0: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x2377d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2377d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2377D4u;
    {
        const bool branch_taken_0x2377d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2377D4u;
            // 0x2377d8: 0x30430020  andi        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d4) {
            ctx->pc = 0x2377ECu;
            goto label_2377ec;
        }
    }
    ctx->pc = 0x2377DCu;
    // 0x2377dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2377dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2377e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2377e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2377e4: 0xa423d806  sh          $v1, -0x27FA($at)
    ctx->pc = 0x2377e4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 3));
    // 0x2377e8: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x2377e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2377ec:
    // 0x2377ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2377ECu;
    {
        const bool branch_taken_0x2377ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2377ECu;
            // 0x2377f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377ec) {
            ctx->pc = 0x2377FCu;
            goto label_2377fc;
        }
    }
    ctx->pc = 0x2377F4u;
    // 0x2377f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2377f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2377f8: 0xa423d806  sh          $v1, -0x27FA($at)
    ctx->pc = 0x2377f8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 3));
label_2377fc:
    // 0x2377fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2377fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x237800: 0x10400311  beqz        $v0, . + 4 + (0x311 << 2)
    ctx->pc = 0x237800u;
    {
        const bool branch_taken_0x237800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237800u;
            // 0x237804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237800) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237808u;
    // 0x237808: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23780c: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x23780Cu;
    {
        const bool branch_taken_0x23780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23780Cu;
            // 0x237810: 0xa422d806  sh          $v0, -0x27FA($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23780c) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237814u;
label_237814:
    // 0x237814: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x237814u;
    SET_GPR_U32(ctx, 31, 0x23781Cu);
    ctx->pc = 0x237818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237814u;
            // 0x237818: 0x8e8400d4  lw          $a0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23781Cu; }
        if (ctx->pc != 0x23781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23781Cu; }
        if (ctx->pc != 0x23781Cu) { return; }
    }
    ctx->pc = 0x23781Cu;
label_23781c:
    // 0x23781c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23781Cu;
    {
        const bool branch_taken_0x23781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23781c) {
            ctx->pc = 0x237840u;
            goto label_237840;
        }
    }
    ctx->pc = 0x237824u;
    // 0x237824: 0xc08e94c  jal         func_23A530
    ctx->pc = 0x237824u;
    SET_GPR_U32(ctx, 31, 0x23782Cu);
    ctx->pc = 0x23A530u;
    if (runtime->hasFunction(0x23A530u)) {
        auto targetFn = runtime->lookupFunction(0x23A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23782Cu; }
        if (ctx->pc != 0x23782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishCondition__Fv_0x23a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23782Cu; }
        if (ctx->pc != 0x23782Cu) { return; }
    }
    ctx->pc = 0x23782Cu;
label_23782c:
    // 0x23782c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23782Cu;
    {
        const bool branch_taken_0x23782c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23782Cu;
            // 0x237830: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23782c) {
            ctx->pc = 0x237840u;
            goto label_237840;
        }
    }
    ctx->pc = 0x237834u;
    // 0x237834: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237838: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x237838u;
    {
        const bool branch_taken_0x237838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237838u;
            // 0x23783c: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237838) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237840u;
label_237840:
    // 0x237840: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x237840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x237844: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237844u;
    {
        const bool branch_taken_0x237844 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x237848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237844u;
            // 0x237848: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237844) {
            ctx->pc = 0x23785Cu;
            goto label_23785c;
        }
    }
    ctx->pc = 0x23784Cu;
    // 0x23784c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x23784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x237850: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237854: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x237854u;
    {
        const bool branch_taken_0x237854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237854u;
            // 0x237858: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237854) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x23785Cu;
label_23785c:
    // 0x23785c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237860: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x237860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237864: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237868: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x237868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23786c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23786cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237870: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x237874: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x237874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x237878: 0xac22d810  sw          $v0, -0x27F0($at)
    ctx->pc = 0x237878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 2));
    // 0x23787c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237880: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x237880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237884: 0x8c24d810  lw          $a0, -0x27F0($at)
    ctx->pc = 0x237884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957072)));
    // 0x237888: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x237888u;
    SET_GPR_U32(ctx, 31, 0x237890u);
    ctx->pc = 0x23788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237888u;
            // 0x23788c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237890u; }
        if (ctx->pc != 0x237890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237890u; }
        if (ctx->pc != 0x237890u) { return; }
    }
    ctx->pc = 0x237890u;
label_237890:
    // 0x237890: 0x87a300c4  lh          $v1, 0xC4($sp)
    ctx->pc = 0x237890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x237894: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x237894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x237898: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23789c: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x23789cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x2378a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2378a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2378a4: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x2378A4u;
    {
        const bool branch_taken_0x2378a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378A4u;
            // 0x2378a8: 0xa423d804  sh          $v1, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a4) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2378ACu;
label_2378ac:
    // 0x2378ac: 0x1642003a  bne         $s2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2378ACu;
    {
        const bool branch_taken_0x2378ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2378B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378ACu;
            // 0x2378b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378ac) {
            ctx->pc = 0x237998u;
            goto label_237998;
        }
    }
    ctx->pc = 0x2378B4u;
    // 0x2378b4: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x2378b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2378b8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x2378bc: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2378bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2378c0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2378c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2378c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2378C4u;
    {
        const bool branch_taken_0x2378c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2378C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378C4u;
            // 0x2378c8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378c4) {
            ctx->pc = 0x2378D8u;
            goto label_2378d8;
        }
    }
    ctx->pc = 0x2378CCu;
    // 0x2378cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2378ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2378d0: 0x100002ca  b           . + 4 + (0x2CA << 2)
    ctx->pc = 0x2378D0u;
    {
        const bool branch_taken_0x2378d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378D0u;
            // 0x2378d4: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378d0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2378D8u;
label_2378d8:
    // 0x2378d8: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x2378dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2378e0: 0x8c30d8c8  lw          $s0, -0x2738($at)
    ctx->pc = 0x2378e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x2378e4: 0x84520002  lh          $s2, 0x2($v0)
    ctx->pc = 0x2378e4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2378e8: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x2378E8u;
    SET_GPR_U32(ctx, 31, 0x2378F0u);
    ctx->pc = 0x2378ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2378E8u;
            // 0x2378ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378F0u; }
        if (ctx->pc != 0x2378F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378F0u; }
        if (ctx->pc != 0x2378F0u) { return; }
    }
    ctx->pc = 0x2378F0u;
label_2378f0:
    // 0x2378f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2378f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2378f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2378f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2378f8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2378f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2378fc: 0xc06847c  jal         func_1A11F0
    ctx->pc = 0x2378FCu;
    SET_GPR_U32(ctx, 31, 0x237904u);
    ctx->pc = 0x237900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2378FCu;
            // 0x237900: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11F0u;
    if (runtime->hasFunction(0x1A11F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237904u; }
        if (ctx->pc != 0x237904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsItemtypeWhoisEquip__FiPi_0x1a11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237904u; }
        if (ctx->pc != 0x237904u) { return; }
    }
    ctx->pc = 0x237904u;
label_237904:
    // 0x237904: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237908: 0xa022d803  sb          $v0, -0x27FD($at)
    ctx->pc = 0x237908u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957059), (uint8_t)GPR_U32(ctx, 2));
    // 0x23790c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237910: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x237914: 0x8023d803  lb          $v1, -0x27FD($at)
    ctx->pc = 0x237914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957059)));
    // 0x237918: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237918u;
    {
        const bool branch_taken_0x237918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237918u;
            // 0x23791c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237918) {
            ctx->pc = 0x23792Cu;
            goto label_23792c;
        }
    }
    ctx->pc = 0x237920u;
    // 0x237920: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237924: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x237924u;
    {
        const bool branch_taken_0x237924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237924u;
            // 0x237928: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237924) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x23792Cu;
label_23792c:
    // 0x23792c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x23792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x237930: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237930u;
    {
        const bool branch_taken_0x237930 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x237934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237930u;
            // 0x237934: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237930) {
            ctx->pc = 0x237948u;
            goto label_237948;
        }
    }
    ctx->pc = 0x237938u;
    // 0x237938: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x23793c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23793cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237940: 0x100002c1  b           . + 4 + (0x2C1 << 2)
    ctx->pc = 0x237940u;
    {
        const bool branch_taken_0x237940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237940u;
            // 0x237944: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237940) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237948u;
label_237948:
    // 0x237948: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23794c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237950: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x237950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237954: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x237954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23795c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x237960: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x237960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x237964: 0xac22d810  sw          $v0, -0x27F0($at)
    ctx->pc = 0x237964u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 2));
    // 0x237968: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23796c: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x23796cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237970: 0x8c24d810  lw          $a0, -0x27F0($at)
    ctx->pc = 0x237970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957072)));
    // 0x237974: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x237974u;
    SET_GPR_U32(ctx, 31, 0x23797Cu);
    ctx->pc = 0x237978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237974u;
            // 0x237978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23797Cu; }
        if (ctx->pc != 0x23797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23797Cu; }
        if (ctx->pc != 0x23797Cu) { return; }
    }
    ctx->pc = 0x23797Cu;
label_23797c:
    // 0x23797c: 0x87a300c8  lh          $v1, 0xC8($sp)
    ctx->pc = 0x23797cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x237980: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x237980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x237984: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237988: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x237988u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x23798c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237990: 0x1000029a  b           . + 4 + (0x29A << 2)
    ctx->pc = 0x237990u;
    {
        const bool branch_taken_0x237990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237990u;
            // 0x237994: 0xa423d804  sh          $v1, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237990) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237998u;
label_237998:
    // 0x237998: 0x12460005  beq         $s2, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x237998u;
    {
        const bool branch_taken_0x237998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x23799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237998u;
            // 0x23799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237998) {
            ctx->pc = 0x2379B0u;
            goto label_2379b0;
        }
    }
    ctx->pc = 0x2379A0u;
    // 0x2379a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2379a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2379a4: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2379A4u;
    {
        const bool branch_taken_0x2379a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2379A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2379A4u;
            // 0x2379a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379a4) {
            ctx->pc = 0x2379BCu;
            goto label_2379bc;
        }
    }
    ctx->pc = 0x2379ACu;
    // 0x2379ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2379acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2379b0:
    // 0x2379b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2379b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2379b4: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x2379B4u;
    {
        const bool branch_taken_0x2379b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2379B4u;
            // 0x2379b8: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379b4) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2379BCu;
label_2379bc:
    // 0x2379bc: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2379BCu;
    {
        const bool branch_taken_0x2379bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2379C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2379BCu;
            // 0x2379c0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379bc) {
            ctx->pc = 0x237A2Cu;
            goto label_237a2c;
        }
    }
    ctx->pc = 0x2379C4u;
    // 0x2379c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2379c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2379c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2379c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2379cc: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x2379ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x2379d0: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x2379D0u;
    SET_GPR_U32(ctx, 31, 0x2379D8u);
    ctx->pc = 0x2379D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2379D0u;
            // 0x2379d4: 0x8e8400d4  lw          $a0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1982F0u;
    if (runtime->hasFunction(0x1982F0u)) {
        auto targetFn = runtime->lookupFunction(0x1982F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379D8u; }
        if (ctx->pc != 0x2379D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableRepairItemNo__13CGameDataUsedFv_0x1982f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379D8u; }
        if (ctx->pc != 0x2379D8u) { return; }
    }
    ctx->pc = 0x2379D8u;
label_2379d8:
    // 0x2379d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2379d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379dc: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x2379DCu;
    SET_GPR_U32(ctx, 31, 0x2379E4u);
    ctx->pc = 0x2379E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2379DCu;
            // 0x2379e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DC30u;
    if (runtime->hasFunction(0x19DC30u)) {
        auto targetFn = runtime->lookupFunction(0x19DC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379E4u; }
        if (ctx->pc != 0x2379E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchAllHaveItem__16CUserDataManagerFi_0x19dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379E4u; }
        if (ctx->pc != 0x2379E4u) { return; }
    }
    ctx->pc = 0x2379E4u;
label_2379e4:
    // 0x2379e4: 0x8e8700d4  lw          $a3, 0xD4($s4)
    ctx->pc = 0x2379e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x2379e8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2379e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2379ec: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x2379ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x2379f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2379f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379f4: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x2379F4u;
    SET_GPR_U32(ctx, 31, 0x2379FCu);
    ctx->pc = 0x2379F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2379F4u;
            // 0x2379f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379FCu; }
        if (ctx->pc != 0x2379FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2379FCu; }
        if (ctx->pc != 0x2379FCu) { return; }
    }
    ctx->pc = 0x2379FCu;
label_2379fc:
    // 0x2379fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2379FCu;
    {
        const bool branch_taken_0x2379fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2379FCu;
            // 0x237a00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379fc) {
            ctx->pc = 0x237A14u;
            goto label_237a14;
        }
    }
    ctx->pc = 0x237A04u;
    // 0x237a04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237a08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237a0c: 0x1000027b  b           . + 4 + (0x27B << 2)
    ctx->pc = 0x237A0Cu;
    {
        const bool branch_taken_0x237a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A0Cu;
            // 0x237a10: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a0c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237A14u;
label_237a14:
    // 0x237a14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237a18: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x237a18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x237a1c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x237a1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237a20: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237a24: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x237A24u;
    {
        const bool branch_taken_0x237a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A24u;
            // 0x237a28: 0xa436d804  sh          $s6, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a24) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237A2Cu;
label_237a2c:
    // 0x237a2c: 0x16430053  bne         $s2, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x237A2Cu;
    {
        const bool branch_taken_0x237a2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x237A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A2Cu;
            // 0x237a30: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a2c) {
            ctx->pc = 0x237B7Cu;
            goto label_237b7c;
        }
    }
    ctx->pc = 0x237A34u;
    // 0x237a34: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x237a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237a38: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237a3c: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x237a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x237a40: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237a44: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237A44u;
    {
        const bool branch_taken_0x237a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A44u;
            // 0x237a48: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a44) {
            ctx->pc = 0x237A60u;
            goto label_237a60;
        }
    }
    ctx->pc = 0x237A4Cu;
    // 0x237a4c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x237a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x237a50: 0xa425d804  sh          $a1, -0x27FC($at)
    ctx->pc = 0x237a50u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 5));
    // 0x237a54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237a58: 0x1000027b  b           . + 4 + (0x27B << 2)
    ctx->pc = 0x237A58u;
    {
        const bool branch_taken_0x237a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A58u;
            // 0x237a5c: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a58) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237A60u;
label_237a60:
    // 0x237a60: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x237a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x237a64: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x237a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x237a68: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237a6c: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x237a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x237a70: 0x84840114  lh          $a0, 0x114($a0)
    ctx->pc = 0x237a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x237a74: 0x84530002  lh          $s3, 0x2($v0)
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237a78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x237a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x237a7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x237a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237a80: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x237a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237a84: 0xc06570c  jal         func_195C30
    ctx->pc = 0x237A84u;
    SET_GPR_U32(ctx, 31, 0x237A8Cu);
    ctx->pc = 0x237A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A84u;
            // 0x237a88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A8Cu; }
        if (ctx->pc != 0x237A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237A8Cu; }
        if (ctx->pc != 0x237A8Cu) { return; }
    }
    ctx->pc = 0x237A8Cu;
label_237a8c:
    // 0x237a8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237A8Cu;
    {
        const bool branch_taken_0x237a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A8Cu;
            // 0x237a90: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a8c) {
            ctx->pc = 0x237A9Cu;
            goto label_237a9c;
        }
    }
    ctx->pc = 0x237A94u;
    // 0x237a94: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x237A94u;
    {
        const bool branch_taken_0x237a94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x237a94) {
            ctx->pc = 0x237AB4u;
            goto label_237ab4;
        }
    }
    ctx->pc = 0x237A9Cu;
label_237a9c:
    // 0x237a9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237aa0: 0xa423d800  sh          $v1, -0x2800($at)
    ctx->pc = 0x237aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
    // 0x237aa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237aa8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237aac: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x237AACu;
    {
        const bool branch_taken_0x237aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237AACu;
            // 0x237ab0: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237aac) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237AB4u;
label_237ab4:
    // 0x237ab4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x237ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x237ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237abc: 0x84450114  lh          $a1, 0x114($v0)
    ctx->pc = 0x237abcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x237ac0: 0xc067688  jal         func_19DA20
    ctx->pc = 0x237AC0u;
    SET_GPR_U32(ctx, 31, 0x237AC8u);
    ctx->pc = 0x237AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237AC0u;
            // 0x237ac4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DA20u;
    if (runtime->hasFunction(0x19DA20u)) {
        auto targetFn = runtime->lookupFunction(0x19DA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237AC8u; }
        if (ctx->pc != 0x237AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchActiveItemTableSpace__16CUserDataManagerFii_0x19da20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237AC8u; }
        if (ctx->pc != 0x237AC8u) { return; }
    }
    ctx->pc = 0x237AC8u;
label_237ac8:
    // 0x237ac8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237acc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237ACCu;
    {
        const bool branch_taken_0x237acc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x237AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237ACCu;
            // 0x237ad0: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237acc) {
            ctx->pc = 0x237AE4u;
            goto label_237ae4;
        }
    }
    ctx->pc = 0x237AD4u;
    // 0x237ad4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x237ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x237ad8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237adc: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x237ADCu;
    {
        const bool branch_taken_0x237adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237ADCu;
            // 0x237ae0: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237adc) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237AE4u;
label_237ae4:
    // 0x237ae4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x237ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x237ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237aec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237af0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237af4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x237af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237af8: 0xa424d800  sh          $a0, -0x2800($at)
    ctx->pc = 0x237af8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
    // 0x237afc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x237afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237b00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237b04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237b08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x237b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x237b0c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x237b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x237b10: 0xac22d80c  sw          $v0, -0x27F4($at)
    ctx->pc = 0x237b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 2));
    // 0x237b14: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237b18: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237b1c: 0x8c30d80c  lw          $s0, -0x27F4($at)
    ctx->pc = 0x237b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957068)));
    // 0x237b20: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x237b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237b24: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x237b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x237b28: 0x14430234  bne         $v0, $v1, . + 4 + (0x234 << 2)
    ctx->pc = 0x237B28u;
    {
        const bool branch_taken_0x237b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237b28) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237B30u;
    // 0x237b30: 0xc065cd8  jal         func_197360
    ctx->pc = 0x237B30u;
    SET_GPR_U32(ctx, 31, 0x237B38u);
    ctx->pc = 0x237B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237B30u;
            // 0x237b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197360u;
    if (runtime->hasFunction(0x197360u)) {
        auto targetFn = runtime->lookupFunction(0x197360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B38u; }
        if (ctx->pc != 0x237B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveSetNum__13CGameDataUsedFv_0x197360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B38u; }
        if (ctx->pc != 0x237B38u) { return; }
    }
    ctx->pc = 0x237B38u;
label_237b38:
    // 0x237b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b3c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x237B3Cu;
    SET_GPR_U32(ctx, 31, 0x237B44u);
    ctx->pc = 0x237B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237B3Cu;
            // 0x237b40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B44u; }
        if (ctx->pc != 0x237B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B44u; }
        if (ctx->pc != 0x237B44u) { return; }
    }
    ctx->pc = 0x237B44u;
label_237b44:
    // 0x237b44: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x237b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x237b48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237b4c: 0xa422d80a  sh          $v0, -0x27F6($at)
    ctx->pc = 0x237b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957066), (uint16_t)GPR_U32(ctx, 2));
    // 0x237b50: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x237B50u;
    SET_GPR_U32(ctx, 31, 0x237B58u);
    ctx->pc = 0x237B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237B50u;
            // 0x237b54: 0x8e8400d4  lw          $a0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B58u; }
        if (ctx->pc != 0x237B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B58u; }
        if (ctx->pc != 0x237B58u) { return; }
    }
    ctx->pc = 0x237B58u;
label_237b58:
    // 0x237b58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237b5c: 0x8423d80a  lh          $v1, -0x27F6($at)
    ctx->pc = 0x237b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957066)));
    // 0x237b60: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x237b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x237b64: 0x10200225  beqz        $at, . + 4 + (0x225 << 2)
    ctx->pc = 0x237B64u;
    {
        const bool branch_taken_0x237b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b64) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237B6Cu;
    // 0x237b6c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x237b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x237b70: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237b74: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x237B74u;
    {
        const bool branch_taken_0x237b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B74u;
            // 0x237b78: 0xa422d806  sh          $v0, -0x27FA($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b74) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237B7Cu;
label_237b7c:
    // 0x237b7c: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237B7Cu;
    {
        const bool branch_taken_0x237b7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B7Cu;
            // 0x237b80: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b7c) {
            ctx->pc = 0x237B90u;
            goto label_237b90;
        }
    }
    ctx->pc = 0x237B84u;
    // 0x237b84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x237b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x237b88: 0x1645001a  bne         $s2, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x237B88u;
    {
        const bool branch_taken_0x237b88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x237B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B88u;
            // 0x237b8c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b88) {
            ctx->pc = 0x237BF4u;
            goto label_237bf4;
        }
    }
    ctx->pc = 0x237B90u;
label_237b90:
    // 0x237b90: 0x6a10005  bgez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x237B90u;
    {
        const bool branch_taken_0x237b90 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x237B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B90u;
            // 0x237b94: 0xa435d804  sh          $s5, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b90) {
            ctx->pc = 0x237BA8u;
            goto label_237ba8;
        }
    }
    ctx->pc = 0x237B98u;
    // 0x237b98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237b9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237ba0: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x237BA0u;
    {
        const bool branch_taken_0x237ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BA0u;
            // 0x237ba4: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ba0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237BA8u;
label_237ba8:
    // 0x237ba8: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x237ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x237bac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237bb0: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x237bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x237bb4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x237bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237bb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x237bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237bbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x237bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237bc0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x237bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x237bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237bc8: 0xac22d80c  sw          $v0, -0x27F4($at)
    ctx->pc = 0x237bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 2));
    // 0x237bcc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237bd0: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x237BD0u;
    SET_GPR_U32(ctx, 31, 0x237BD8u);
    ctx->pc = 0x237BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237BD0u;
            // 0x237bd4: 0x8c24d80c  lw          $a0, -0x27F4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957068)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237BD8u; }
        if (ctx->pc != 0x237BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237BD8u; }
        if (ctx->pc != 0x237BD8u) { return; }
    }
    ctx->pc = 0x237BD8u;
label_237bd8:
    // 0x237bd8: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237BD8u;
    {
        const bool branch_taken_0x237bd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BD8u;
            // 0x237bdc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bd8) {
            ctx->pc = 0x237BE4u;
            goto label_237be4;
        }
    }
    ctx->pc = 0x237BE0u;
    // 0x237be0: 0xa422d80a  sh          $v0, -0x27F6($at)
    ctx->pc = 0x237be0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957066), (uint16_t)GPR_U32(ctx, 2));
label_237be4:
    // 0x237be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237be8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237bec: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x237BECu;
    {
        const bool branch_taken_0x237bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BECu;
            // 0x237bf0: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bec) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237BF4u;
label_237bf4:
    // 0x237bf4: 0x1645001e  bne         $s2, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x237BF4u;
    {
        const bool branch_taken_0x237bf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x237BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BF4u;
            // 0x237bf8: 0x2645fff5  addiu       $a1, $s2, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf4) {
            ctx->pc = 0x237C70u;
            goto label_237c70;
        }
    }
    ctx->pc = 0x237BFCu;
    // 0x237bfc: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x237bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237c00: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237c04: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x237c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x237c08: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237c0c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237C0Cu;
    {
        const bool branch_taken_0x237c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x237C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C0Cu;
            // 0x237c10: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c0c) {
            ctx->pc = 0x237C1Cu;
            goto label_237c1c;
        }
    }
    ctx->pc = 0x237C14u;
    // 0x237c14: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x237C14u;
    {
        const bool branch_taken_0x237c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C14u;
            // 0x237c18: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c14) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237C1Cu;
label_237c1c:
    // 0x237c1c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x237C1Cu;
    SET_GPR_U32(ctx, 31, 0x237C24u);
    ctx->pc = 0x237C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237C1Cu;
            // 0x237c20: 0x8e8400d4  lw          $a0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C24u; }
        if (ctx->pc != 0x237C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C24u; }
        if (ctx->pc != 0x237C24u) { return; }
    }
    ctx->pc = 0x237C24u;
label_237c24:
    // 0x237c24: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x237C24u;
    {
        const bool branch_taken_0x237c24 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x237C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C24u;
            // 0x237c28: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c24) {
            ctx->pc = 0x237C34u;
            goto label_237c34;
        }
    }
    ctx->pc = 0x237C2Cu;
    // 0x237c2c: 0x8e9700d4  lw          $s7, 0xD4($s4)
    ctx->pc = 0x237c2cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237c30: 0x0  nop
    ctx->pc = 0x237c30u;
    // NOP
label_237c34:
    // 0x237c34: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x237C34u;
    {
        const bool branch_taken_0x237c34 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x237C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C34u;
            // 0x237c38: 0xac37d80c  sw          $s7, -0x27F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c34) {
            ctx->pc = 0x237C60u;
            goto label_237c60;
        }
    }
    ctx->pc = 0x237C3Cu;
    // 0x237c3c: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x237c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x237c40: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x237C40u;
    {
        const bool branch_taken_0x237c40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x237C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C40u;
            // 0x237c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c40) {
            ctx->pc = 0x237C64u;
            goto label_237c64;
        }
    }
    ctx->pc = 0x237C48u;
    // 0x237c48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237c4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237c50: 0xac20d80c  sw          $zero, -0x27F4($at)
    ctx->pc = 0x237c50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 0));
    // 0x237c54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237c58: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x237C58u;
    {
        const bool branch_taken_0x237c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C58u;
            // 0x237c5c: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c58) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237C60u;
label_237c60:
    // 0x237c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237c64:
    // 0x237c64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237c68: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x237C68u;
    {
        const bool branch_taken_0x237c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C68u;
            // 0x237c6c: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c68) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237C70u;
label_237c70:
    // 0x237c70: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x237c70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x237c74: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x237C74u;
    {
        const bool branch_taken_0x237c74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x237C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C74u;
            // 0x237c78: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c74) {
            ctx->pc = 0x237C8Cu;
            goto label_237c8c;
        }
    }
    ctx->pc = 0x237C7Cu;
    // 0x237c7c: 0x12450003  beq         $s2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x237C7Cu;
    {
        const bool branch_taken_0x237c7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x237C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C7Cu;
            // 0x237c80: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c7c) {
            ctx->pc = 0x237C8Cu;
            goto label_237c8c;
        }
    }
    ctx->pc = 0x237C84u;
    // 0x237c84: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237C84u;
    {
        const bool branch_taken_0x237c84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x237C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C84u;
            // 0x237c88: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c84) {
            ctx->pc = 0x237C9Cu;
            goto label_237c9c;
        }
    }
    ctx->pc = 0x237C8Cu;
label_237c8c:
    // 0x237c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237c90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237c94: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x237C94u;
    {
        const bool branch_taken_0x237c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C94u;
            // 0x237c98: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c94) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237C9Cu;
label_237c9c:
    // 0x237c9c: 0x16450011  bne         $s2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x237C9Cu;
    {
        const bool branch_taken_0x237c9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x237CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C9Cu;
            // 0x237ca0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c9c) {
            ctx->pc = 0x237CE4u;
            goto label_237ce4;
        }
    }
    ctx->pc = 0x237CA4u;
    // 0x237ca4: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x237ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237ca8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237cac: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x237cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x237cb0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237cb4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237CB4u;
    {
        const bool branch_taken_0x237cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x237CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CB4u;
            // 0x237cb8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cb4) {
            ctx->pc = 0x237CC4u;
            goto label_237cc4;
        }
    }
    ctx->pc = 0x237CBCu;
    // 0x237cbc: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x237CBCu;
    {
        const bool branch_taken_0x237cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CBCu;
            // 0x237cc0: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cbc) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x237CC4u;
label_237cc4:
    // 0x237cc4: 0xc066618  jal         func_199860
    ctx->pc = 0x237CC4u;
    SET_GPR_U32(ctx, 31, 0x237CCCu);
    ctx->pc = 0x237CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237CC4u;
            // 0x237cc8: 0x8e8400d4  lw          $a0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199860u;
    if (runtime->hasFunction(0x199860u)) {
        auto targetFn = runtime->lookupFunction(0x199860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237CCCu; }
        if (ctx->pc != 0x237CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237CCCu; }
        if (ctx->pc != 0x237CCCu) { return; }
    }
    ctx->pc = 0x237CCCu;
label_237ccc:
    // 0x237ccc: 0x184001cb  blez        $v0, . + 4 + (0x1CB << 2)
    ctx->pc = 0x237CCCu;
    {
        const bool branch_taken_0x237ccc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x237ccc) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237CD4u;
    // 0x237cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237cd8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237cdc: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x237CDCu;
    {
        const bool branch_taken_0x237cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CDCu;
            // 0x237ce0: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cdc) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237CE4u;
label_237ce4:
    // 0x237ce4: 0x16450010  bne         $s2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x237CE4u;
    {
        const bool branch_taken_0x237ce4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x237CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CE4u;
            // 0x237ce8: 0x2742821  addu        $a1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ce4) {
            ctx->pc = 0x237D28u;
            goto label_237d28;
        }
    }
    ctx->pc = 0x237CECu;
    // 0x237cec: 0x3c048020  lui         $a0, 0x8020
    ctx->pc = 0x237cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32800 << 16));
    // 0x237cf0: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x237cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x237cf4: 0x34842020  ori         $a0, $a0, 0x2020
    ctx->pc = 0x237cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8224);
    // 0x237cf8: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237CF8u;
    {
        const bool branch_taken_0x237cf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x237CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CF8u;
            // 0x237cfc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cf8) {
            ctx->pc = 0x237D0Cu;
            goto label_237d0c;
        }
    }
    ctx->pc = 0x237D00u;
    // 0x237d00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237d04: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x237D04u;
    {
        const bool branch_taken_0x237d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D04u;
            // 0x237d08: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d04) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237D0Cu;
label_237d0c:
    // 0x237d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d10: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x237d10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x237d14: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x237d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237d18: 0xc067738  jal         func_19DCE0
    ctx->pc = 0x237D18u;
    SET_GPR_U32(ctx, 31, 0x237D20u);
    ctx->pc = 0x237D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237D18u;
            // 0x237d1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DCE0u;
    if (runtime->hasFunction(0x19DCE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D20u; }
        if (ctx->pc != 0x237D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishInAquarium__16CUserDataManagerFP13CGameDataUsedi_0x19dce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D20u; }
        if (ctx->pc != 0x237D20u) { return; }
    }
    ctx->pc = 0x237D20u;
label_237d20:
    // 0x237d20: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x237D20u;
    {
        const bool branch_taken_0x237d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d20) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237D28u;
label_237d28:
    // 0x237d28: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x237d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x237d2c: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237D2Cu;
    {
        const bool branch_taken_0x237d2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D2Cu;
            // 0x237d30: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d2c) {
            ctx->pc = 0x237D44u;
            goto label_237d44;
        }
    }
    ctx->pc = 0x237D34u;
    // 0x237d34: 0xc065d44  jal         func_197510
    ctx->pc = 0x237D34u;
    SET_GPR_U32(ctx, 31, 0x237D3Cu);
    ctx->pc = 0x237D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237D34u;
            // 0x237d38: 0x8e8400d4  lw          $a0, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197510u;
    if (runtime->hasFunction(0x197510u)) {
        auto targetFn = runtime->lookupFunction(0x197510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D3Cu; }
        if (ctx->pc != 0x237D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Boiled__13CGameDataUsedFv_0x197510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D3Cu; }
        if (ctx->pc != 0x237D3Cu) { return; }
    }
    ctx->pc = 0x237D3Cu;
label_237d3c:
    // 0x237d3c: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x237D3Cu;
    {
        const bool branch_taken_0x237d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d3c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237D44u;
label_237d44:
    // 0x237d44: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237D44u;
    {
        const bool branch_taken_0x237d44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x237D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D44u;
            // 0x237d48: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d44) {
            ctx->pc = 0x237D54u;
            goto label_237d54;
        }
    }
    ctx->pc = 0x237D4Cu;
    // 0x237d4c: 0x16420044  bne         $s2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x237D4Cu;
    {
        const bool branch_taken_0x237d4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D4Cu;
            // 0x237d50: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d4c) {
            ctx->pc = 0x237E60u;
            goto label_237e60;
        }
    }
    ctx->pc = 0x237D54u;
label_237d54:
    // 0x237d54: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x237d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237d58: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237d5c: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x237d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x237d60: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237d64: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x237D64u;
    {
        const bool branch_taken_0x237d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D64u;
            // 0x237d68: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d64) {
            ctx->pc = 0x237DE0u;
            goto label_237de0;
        }
    }
    ctx->pc = 0x237D6Cu;
    // 0x237d6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237d70: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237d74: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x237d74u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x237d78: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x237d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x237d7c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237D7Cu;
    {
        const bool branch_taken_0x237d7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D7Cu;
            // 0x237d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d7c) {
            ctx->pc = 0x237D90u;
            goto label_237d90;
        }
    }
    ctx->pc = 0x237D84u;
    // 0x237d84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237d88: 0x8c26d8c0  lw          $a2, -0x2740($at)
    ctx->pc = 0x237d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x237d8c: 0x0  nop
    ctx->pc = 0x237d8cu;
    // NOP
label_237d90:
    // 0x237d90: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x237d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237d94: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237D94u;
    {
        const bool branch_taken_0x237d94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D94u;
            // 0x237d98: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d94) {
            ctx->pc = 0x237DA8u;
            goto label_237da8;
        }
    }
    ctx->pc = 0x237D9Cu;
    // 0x237d9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237da0: 0x8c26d8c4  lw          $a2, -0x273C($at)
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957252)));
    // 0x237da4: 0x0  nop
    ctx->pc = 0x237da4u;
    // NOP
label_237da8:
    // 0x237da8: 0xc0659c4  jal         func_196710
    ctx->pc = 0x237DA8u;
    SET_GPR_U32(ctx, 31, 0x237DB0u);
    ctx->pc = 0x237DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237DA8u;
            // 0x237dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DB0u; }
        if (ctx->pc != 0x237DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DB0u; }
        if (ctx->pc != 0x237DB0u) { return; }
    }
    ctx->pc = 0x237DB0u;
label_237db0:
    // 0x237db0: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x237db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237db4: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x237db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x237db8: 0xc087a30  jal         func_21E8C0
    ctx->pc = 0x237DB8u;
    SET_GPR_U32(ctx, 31, 0x237DC0u);
    ctx->pc = 0x237DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237DB8u;
            // 0x237dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (runtime->hasFunction(0x21E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DC0u; }
        if (ctx->pc != 0x237DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DC0u; }
        if (ctx->pc != 0x237DC0u) { return; }
    }
    ctx->pc = 0x237DC0u;
label_237dc0:
    // 0x237dc0: 0x8f839334  lw          $v1, -0x6CCC($gp)
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939444)));
    // 0x237dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237dc8: 0x1462018c  bne         $v1, $v0, . + 4 + (0x18C << 2)
    ctx->pc = 0x237DC8u;
    {
        const bool branch_taken_0x237dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237dc8) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237DD0u;
    // 0x237dd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x237dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x237dd4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237dd8: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x237DD8u;
    {
        const bool branch_taken_0x237dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237DD8u;
            // 0x237ddc: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dd8) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237DE0u;
label_237de0:
    // 0x237de0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x237de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x237de4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x237de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x237de8: 0x2442d884  addiu       $v0, $v0, -0x277C
    ctx->pc = 0x237de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957188));
    // 0x237dec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237df0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237df4: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237df8: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x237df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x237dfc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x237dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237e00: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x237e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237e04: 0xa422d806  sh          $v0, -0x27FA($at)
    ctx->pc = 0x237e04u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 2));
    // 0x237e08: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x237e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237e0c: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x237E0Cu;
    SET_GPR_U32(ctx, 31, 0x237E14u);
    ctx->pc = 0x237E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E0Cu;
            // 0x237e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E14u; }
        if (ctx->pc != 0x237E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E14u; }
        if (ctx->pc != 0x237E14u) { return; }
    }
    ctx->pc = 0x237E14u;
label_237e14:
    // 0x237e14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237e18: 0xa422d804  sh          $v0, -0x27FC($at)
    ctx->pc = 0x237e18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
    // 0x237e1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237e20: 0x8422d804  lh          $v0, -0x27FC($at)
    ctx->pc = 0x237e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957060)));
    // 0x237e24: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x237e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x237e28: 0x10200174  beqz        $at, . + 4 + (0x174 << 2)
    ctx->pc = 0x237E28u;
    {
        const bool branch_taken_0x237e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x237e28) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237E30u;
    // 0x237e30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237e34: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x237e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x237e38: 0x8423d806  lh          $v1, -0x27FA($at)
    ctx->pc = 0x237e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957062)));
    // 0x237e3c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237E3Cu;
    {
        const bool branch_taken_0x237e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E3Cu;
            // 0x237e40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e3c) {
            ctx->pc = 0x237E54u;
            goto label_237e54;
        }
    }
    ctx->pc = 0x237E44u;
    // 0x237e44: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x237e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x237e48: 0x1462016c  bne         $v1, $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x237E48u;
    {
        const bool branch_taken_0x237e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237e48) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237E50u;
    // 0x237e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237e54:
    // 0x237e54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237e58: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x237E58u;
    {
        const bool branch_taken_0x237e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E58u;
            // 0x237e5c: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e58) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237E60u;
label_237e60:
    // 0x237e60: 0x12420166  beq         $s2, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x237E60u;
    {
        const bool branch_taken_0x237e60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x237e60) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237E68u;
    // 0x237e68: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x237e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x237e6c: 0x16420016  bne         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x237E6Cu;
    {
        const bool branch_taken_0x237e6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E6Cu;
            // 0x237e70: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e6c) {
            ctx->pc = 0x237EC8u;
            goto label_237ec8;
        }
    }
    ctx->pc = 0x237E74u;
    // 0x237e74: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x237e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237e78: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237e7c: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x237e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x237e80: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237e84: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237E84u;
    {
        const bool branch_taken_0x237e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x237E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E84u;
            // 0x237e88: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e84) {
            ctx->pc = 0x237E94u;
            goto label_237e94;
        }
    }
    ctx->pc = 0x237E8Cu;
    // 0x237e8c: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x237E8Cu;
    {
        const bool branch_taken_0x237e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E8Cu;
            // 0x237e90: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e8c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237E94u;
label_237e94:
    // 0x237e94: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237e98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237e9c: 0x8c27d8cc  lw          $a3, -0x2734($at)
    ctx->pc = 0x237e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957260)));
    // 0x237ea0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x237ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x237ea4: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x237ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237ea8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237eac: 0xa422d806  sh          $v0, -0x27FA($at)
    ctx->pc = 0x237eacu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 2));
    // 0x237eb0: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x237eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237eb4: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x237EB4u;
    SET_GPR_U32(ctx, 31, 0x237EBCu);
    ctx->pc = 0x237EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237EB4u;
            // 0x237eb8: 0x2484d570  addiu       $a0, $a0, -0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EBCu; }
        if (ctx->pc != 0x237EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EBCu; }
        if (ctx->pc != 0x237EBCu) { return; }
    }
    ctx->pc = 0x237EBCu;
label_237ebc:
    // 0x237ebc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237ec0: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x237EC0u;
    {
        const bool branch_taken_0x237ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237EC0u;
            // 0x237ec4: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ec0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237EC8u;
label_237ec8:
    // 0x237ec8: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237EC8u;
    {
        const bool branch_taken_0x237ec8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x237ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237EC8u;
            // 0x237ecc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ec8) {
            ctx->pc = 0x237ED8u;
            goto label_237ed8;
        }
    }
    ctx->pc = 0x237ED0u;
    // 0x237ed0: 0x16420021  bne         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x237ED0u;
    {
        const bool branch_taken_0x237ed0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237ED0u;
            // 0x237ed4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ed0) {
            ctx->pc = 0x237F58u;
            goto label_237f58;
        }
    }
    ctx->pc = 0x237ED8u;
label_237ed8:
    // 0x237ed8: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x237ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237edc: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237ee0: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x237ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x237ee4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237ee8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237EE8u;
    {
        const bool branch_taken_0x237ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237EE8u;
            // 0x237eec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ee8) {
            ctx->pc = 0x237EFCu;
            goto label_237efc;
        }
    }
    ctx->pc = 0x237EF0u;
    // 0x237ef0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237ef4: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x237EF4u;
    {
        const bool branch_taken_0x237ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237EF4u;
            // 0x237ef8: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ef4) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237EFCu;
label_237efc:
    // 0x237efc: 0x8f8895c0  lw          $t0, -0x6A40($gp)
    ctx->pc = 0x237efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x237f00: 0x2643ffed  addiu       $v1, $s2, -0x13
    ctx->pc = 0x237f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967277));
    // 0x237f04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x237f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x237f08: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x237f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x237f0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x237f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237f10: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x237f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x237f14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x237f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237f18: 0x24e7d8c0  addiu       $a3, $a3, -0x2740
    ctx->pc = 0x237f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957248));
    // 0x237f1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x237f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237f20: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x237f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x237f28: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x237f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x237f2c: 0x85030114  lh          $v1, 0x114($t0)
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 276)));
    // 0x237f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x237f38: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x237f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x237f3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x237f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237f40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x237f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237f44: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x237F44u;
    SET_GPR_U32(ctx, 31, 0x237F4Cu);
    ctx->pc = 0x237F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237F44u;
            // 0x237f48: 0x24470170  addiu       $a3, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F4Cu; }
        if (ctx->pc != 0x237F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F4Cu; }
        if (ctx->pc != 0x237F4Cu) { return; }
    }
    ctx->pc = 0x237F4Cu;
label_237f4c:
    // 0x237f4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237f50: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x237F50u;
    {
        const bool branch_taken_0x237f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F50u;
            // 0x237f54: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f50) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237F58u;
label_237f58:
    // 0x237f58: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237F58u;
    {
        const bool branch_taken_0x237f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x237F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F58u;
            // 0x237f5c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f58) {
            ctx->pc = 0x237F68u;
            goto label_237f68;
        }
    }
    ctx->pc = 0x237F60u;
    // 0x237f60: 0x16420034  bne         $s2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x237F60u;
    {
        const bool branch_taken_0x237f60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x237F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F60u;
            // 0x237f64: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f60) {
            ctx->pc = 0x238034u;
            goto label_238034;
        }
    }
    ctx->pc = 0x237F68u;
label_237f68:
    // 0x237f68: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x237f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x237f6c: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x237f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x237f70: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x237f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x237f74: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x237f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237f78: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237F78u;
    {
        const bool branch_taken_0x237f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F78u;
            // 0x237f7c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f78) {
            ctx->pc = 0x237F8Cu;
            goto label_237f8c;
        }
    }
    ctx->pc = 0x237F80u;
    // 0x237f80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237f84: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x237F84u;
    {
        const bool branch_taken_0x237f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F84u;
            // 0x237f88: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f84) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237F8Cu;
label_237f8c:
    // 0x237f8c: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x237f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237f90: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x237F90u;
    {
        const bool branch_taken_0x237f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F90u;
            // 0x237f94: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f90) {
            ctx->pc = 0x237FDCu;
            goto label_237fdc;
        }
    }
    ctx->pc = 0x237F98u;
    // 0x237f98: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x237F98u;
    {
        const bool branch_taken_0x237f98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x237f98) {
            ctx->pc = 0x237FDCu;
            goto label_237fdc;
        }
    }
    ctx->pc = 0x237FA0u;
    // 0x237fa0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x237fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x237fa4: 0x2405017d  addiu       $a1, $zero, 0x17D
    ctx->pc = 0x237fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x237fa8: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x237FA8u;
    SET_GPR_U32(ctx, 31, 0x237FB0u);
    ctx->pc = 0x237FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237FA8u;
            // 0x237fac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FB0u; }
        if (ctx->pc != 0x237FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FB0u; }
        if (ctx->pc != 0x237FB0u) { return; }
    }
    ctx->pc = 0x237FB0u;
label_237fb0:
    // 0x237fb0: 0x10400112  beqz        $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x237FB0u;
    {
        const bool branch_taken_0x237fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237fb0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237FB8u;
    // 0x237fb8: 0x8e8700d4  lw          $a3, 0xD4($s4)
    ctx->pc = 0x237fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x237fbc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x237fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x237fc0: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x237fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x237fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fc8: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x237FC8u;
    SET_GPR_U32(ctx, 31, 0x237FD0u);
    ctx->pc = 0x237FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237FC8u;
            // 0x237fcc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FD0u; }
        if (ctx->pc != 0x237FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237FD0u; }
        if (ctx->pc != 0x237FD0u) { return; }
    }
    ctx->pc = 0x237FD0u;
label_237fd0:
    // 0x237fd0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237fd4: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x237FD4u;
    {
        const bool branch_taken_0x237fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237FD4u;
            // 0x237fd8: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fd4) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x237FDCu;
label_237fdc:
    // 0x237fdc: 0xc7808368  lwc1        $f0, -0x7C98($gp)
    ctx->pc = 0x237fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237fe0: 0x27a300cc  addiu       $v1, $sp, 0xCC
    ctx->pc = 0x237fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x237fe4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x237fe8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x237fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x237fec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237ff0: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x237ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x237ff4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237ff8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x237ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x237ffc: 0x804700b7  lb          $a3, 0xB7($v0)
    ctx->pc = 0x237ffcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 183)));
    // 0x238000: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x238000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x238004: 0x8c22d8c8  lw          $v0, -0x2738($at)
    ctx->pc = 0x238004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x238008: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x238008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x23800c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x238010: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x238014: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x238014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x238018: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23801c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238020: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x238020u;
    SET_GPR_U32(ctx, 31, 0x238028u);
    ctx->pc = 0x238024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238020u;
            // 0x238024: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238028u; }
        if (ctx->pc != 0x238028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238028u; }
        if (ctx->pc != 0x238028u) { return; }
    }
    ctx->pc = 0x238028u;
label_238028:
    // 0x238028: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23802c: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x23802Cu;
    {
        const bool branch_taken_0x23802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23802Cu;
            // 0x238030: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23802c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238034u;
label_238034:
    // 0x238034: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x238034u;
    {
        const bool branch_taken_0x238034 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238034u;
            // 0x238038: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238034) {
            ctx->pc = 0x238060u;
            goto label_238060;
        }
    }
    ctx->pc = 0x23803Cu;
    // 0x23803c: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x23803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x238040: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x238040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x238044: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x238048: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x238048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x23804c: 0x148200eb  bne         $a0, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x23804Cu;
    {
        const bool branch_taken_0x23804c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23804c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238054u;
    // 0x238054: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238058: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x238058u;
    {
        const bool branch_taken_0x238058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238058u;
            // 0x23805c: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238058) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238060u;
label_238060:
    // 0x238060: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x238060u;
    {
        const bool branch_taken_0x238060 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238060u;
            // 0x238064: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238060) {
            ctx->pc = 0x238094u;
            goto label_238094;
        }
    }
    ctx->pc = 0x238068u;
    // 0x238068: 0x2742821  addu        $a1, $s3, $s4
    ctx->pc = 0x238068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x23806c: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x238070: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x238070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x238074: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x238074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x238078: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238078u;
    {
        const bool branch_taken_0x238078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238078u;
            // 0x23807c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238078) {
            ctx->pc = 0x23808Cu;
            goto label_23808c;
        }
    }
    ctx->pc = 0x238080u;
    // 0x238080: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238084: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x238084u;
    {
        const bool branch_taken_0x238084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238084u;
            // 0x238088: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238084) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x23808Cu;
label_23808c:
    // 0x23808c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x23808Cu;
    {
        const bool branch_taken_0x23808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23808Cu;
            // 0x238090: 0xa424d800  sh          $a0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23808c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238094u;
label_238094:
    // 0x238094: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238094u;
    {
        const bool branch_taken_0x238094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238094u;
            // 0x238098: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238094) {
            ctx->pc = 0x2380A4u;
            goto label_2380a4;
        }
    }
    ctx->pc = 0x23809Cu;
    // 0x23809c: 0x16420035  bne         $s2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23809Cu;
    {
        const bool branch_taken_0x23809c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2380A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23809Cu;
            // 0x2380a0: 0x2642ffe5  addiu       $v0, $s2, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23809c) {
            ctx->pc = 0x238174u;
            goto label_238174;
        }
    }
    ctx->pc = 0x2380A4u;
label_2380a4:
    // 0x2380a4: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x2380a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2380a8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2380a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x2380ac: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2380acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2380b0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2380b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2380b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2380B4u;
    {
        const bool branch_taken_0x2380b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2380B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2380B4u;
            // 0x2380b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380b4) {
            ctx->pc = 0x2380CCu;
            goto label_2380cc;
        }
    }
    ctx->pc = 0x2380BCu;
    // 0x2380bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2380bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2380c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2380c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2380c4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2380C4u;
    {
        const bool branch_taken_0x2380c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2380C4u;
            // 0x2380c8: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380c4) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2380CCu;
label_2380cc:
    // 0x2380cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2380ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2380d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2380d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380d4: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x2380D4u;
    SET_GPR_U32(ctx, 31, 0x2380DCu);
    ctx->pc = 0x2380D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380D4u;
            // 0x2380d8: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380DCu; }
        if (ctx->pc != 0x2380DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380DCu; }
        if (ctx->pc != 0x2380DCu) { return; }
    }
    ctx->pc = 0x2380DCu;
label_2380dc:
    // 0x2380dc: 0x84530002  lh          $s3, 0x2($v0)
    ctx->pc = 0x2380dcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2380e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2380e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2380e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2380e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380e8: 0xac20d810  sw          $zero, -0x27F0($at)
    ctx->pc = 0x2380e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 0));
    // 0x2380ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2380ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2380f0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2380F0u;
    {
        const bool branch_taken_0x2380f0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2380F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2380F0u;
            // 0x2380f4: 0xac20d80c  sw          $zero, -0x27F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380f0) {
            ctx->pc = 0x238138u;
            goto label_238138;
        }
    }
    ctx->pc = 0x2380F8u;
    // 0x2380f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2380f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380fc: 0xc06762c  jal         func_19D8B0
    ctx->pc = 0x2380FCu;
    SET_GPR_U32(ctx, 31, 0x238104u);
    ctx->pc = 0x238100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380FCu;
            // 0x238100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D8B0u;
    if (runtime->hasFunction(0x19D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238104u; }
        if (ctx->pc != 0x238104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238104u; }
        if (ctx->pc != 0x238104u) { return; }
    }
    ctx->pc = 0x238104u;
label_238104:
    // 0x238104: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23810c: 0xa422d806  sh          $v0, -0x27FA($at)
    ctx->pc = 0x23810cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 2));
    // 0x238110: 0xc067674  jal         func_19D9D0
    ctx->pc = 0x238110u;
    SET_GPR_U32(ctx, 31, 0x238118u);
    ctx->pc = 0x238114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238110u;
            // 0x238114: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D9D0u;
    if (runtime->hasFunction(0x19D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238118u; }
        if (ctx->pc != 0x238118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238118u; }
        if (ctx->pc != 0x238118u) { return; }
    }
    ctx->pc = 0x238118u;
label_238118:
    // 0x238118: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23811c: 0xac22d80c  sw          $v0, -0x27F4($at)
    ctx->pc = 0x23811cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 2));
    // 0x238120: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238124: 0x8c24d80c  lw          $a0, -0x27F4($at)
    ctx->pc = 0x238124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957068)));
    // 0x238128: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238128u;
    {
        const bool branch_taken_0x238128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238128u;
            // 0x23812c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238128) {
            ctx->pc = 0x238138u;
            goto label_238138;
        }
    }
    ctx->pc = 0x238130u;
    // 0x238130: 0xc066724  jal         func_199C90
    ctx->pc = 0x238130u;
    SET_GPR_U32(ctx, 31, 0x238138u);
    ctx->pc = 0x199C90u;
    if (runtime->hasFunction(0x199C90u)) {
        auto targetFn = runtime->lookupFunction(0x199C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238138u; }
        if (ctx->pc != 0x238138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFi_0x199c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238138u; }
        if (ctx->pc != 0x238138u) { return; }
    }
    ctx->pc = 0x238138u;
label_238138:
    // 0x238138: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x23813c: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x23813cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x238140: 0xc066724  jal         func_199C90
    ctx->pc = 0x238140u;
    SET_GPR_U32(ctx, 31, 0x238148u);
    ctx->pc = 0x238144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238140u;
            // 0x238144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199C90u;
    if (runtime->hasFunction(0x199C90u)) {
        auto targetFn = runtime->lookupFunction(0x199C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238148u; }
        if (ctx->pc != 0x238148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFi_0x199c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238148u; }
        if (ctx->pc != 0x238148u) { return; }
    }
    ctx->pc = 0x238148u;
label_238148:
    // 0x238148: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x238148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x23814c: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x23814Cu;
    SET_GPR_U32(ctx, 31, 0x238154u);
    ctx->pc = 0x238150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23814Cu;
            // 0x238150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238154u; }
        if (ctx->pc != 0x238154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238154u; }
        if (ctx->pc != 0x238154u) { return; }
    }
    ctx->pc = 0x238154u;
label_238154:
    // 0x238154: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x238154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x238158: 0xc0943e4  jal         func_250F90
    ctx->pc = 0x238158u;
    SET_GPR_U32(ctx, 31, 0x238160u);
    ctx->pc = 0x23815Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238158u;
            // 0x23815c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238160u; }
        if (ctx->pc != 0x238160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238160u; }
        if (ctx->pc != 0x238160u) { return; }
    }
    ctx->pc = 0x238160u;
label_238160:
    // 0x238160: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238164: 0xa422d804  sh          $v0, -0x27FC($at)
    ctx->pc = 0x238164u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
    // 0x238168: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23816c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x23816Cu;
    {
        const bool branch_taken_0x23816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23816Cu;
            // 0x238170: 0xac32d810  sw          $s2, -0x27F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23816c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238174u;
label_238174:
    // 0x238174: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x238174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x238178: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x238178u;
    {
        const bool branch_taken_0x238178 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238178u;
            // 0x23817c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238178) {
            ctx->pc = 0x238190u;
            goto label_238190;
        }
    }
    ctx->pc = 0x238180u;
    // 0x238180: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238180u;
    {
        const bool branch_taken_0x238180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238180u;
            // 0x238184: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238180) {
            ctx->pc = 0x238190u;
            goto label_238190;
        }
    }
    ctx->pc = 0x238188u;
    // 0x238188: 0x16420045  bne         $s2, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x238188u;
    {
        const bool branch_taken_0x238188 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238188u;
            // 0x23818c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238188) {
            ctx->pc = 0x2382A0u;
            goto label_2382a0;
        }
    }
    ctx->pc = 0x238190u;
label_238190:
    // 0x238190: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x238194: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x238194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x238198: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x23819c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x23819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2381a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2381A0u;
    {
        const bool branch_taken_0x2381a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2381A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2381A0u;
            // 0x2381a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381a0) {
            ctx->pc = 0x2381B8u;
            goto label_2381b8;
        }
    }
    ctx->pc = 0x2381A8u;
    // 0x2381a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2381a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2381ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2381acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2381b0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2381B0u;
    {
        const bool branch_taken_0x2381b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2381B0u;
            // 0x2381b4: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381b0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2381B8u;
label_2381b8:
    // 0x2381b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2381b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2381bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2381bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381c0: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x2381C0u;
    SET_GPR_U32(ctx, 31, 0x2381C8u);
    ctx->pc = 0x2381C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2381C0u;
            // 0x2381c4: 0xa422d800  sh          $v0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381C8u; }
        if (ctx->pc != 0x2381C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381C8u; }
        if (ctx->pc != 0x2381C8u) { return; }
    }
    ctx->pc = 0x2381C8u;
label_2381c8:
    // 0x2381c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2381c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2381cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2381ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2381d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381d4: 0xc0673ac  jal         func_19CEB0
    ctx->pc = 0x2381D4u;
    SET_GPR_U32(ctx, 31, 0x2381DCu);
    ctx->pc = 0x2381D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2381D4u;
            // 0x2381d8: 0xa420d808  sh          $zero, -0x27F8($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957064), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEB0u;
    if (runtime->hasFunction(0x19CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381DCu; }
        if (ctx->pc != 0x2381DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowFishingStyle__16CUserDataManagerFv_0x19ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2381DCu; }
        if (ctx->pc != 0x2381DCu) { return; }
    }
    ctx->pc = 0x2381DCu;
label_2381dc:
    // 0x2381dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2381DCu;
    {
        const bool branch_taken_0x2381dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2381E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2381DCu;
            // 0x2381e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381dc) {
            ctx->pc = 0x2381FCu;
            goto label_2381fc;
        }
    }
    ctx->pc = 0x2381E4u;
    // 0x2381e4: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x2381e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x2381e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2381e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2381ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2381ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2381f0: 0x84720002  lh          $s2, 0x2($v1)
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2381f4: 0xa422d808  sh          $v0, -0x27F8($at)
    ctx->pc = 0x2381f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957064), (uint16_t)GPR_U32(ctx, 2));
    // 0x2381f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2381f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2381fc:
    // 0x2381fc: 0xc0673c4  jal         func_19CF10
    ctx->pc = 0x2381FCu;
    SET_GPR_U32(ctx, 31, 0x238204u);
    ctx->pc = 0x238200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2381FCu;
            // 0x238200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF10u;
    if (runtime->hasFunction(0x19CF10u)) {
        auto targetFn = runtime->lookupFunction(0x19CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238204u; }
        if (ctx->pc != 0x238204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFi_0x19cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238204u; }
        if (ctx->pc != 0x238204u) { return; }
    }
    ctx->pc = 0x238204u;
label_238204:
    // 0x238204: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x238204u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x238208: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23820c: 0xc06762c  jal         func_19D8B0
    ctx->pc = 0x23820Cu;
    SET_GPR_U32(ctx, 31, 0x238214u);
    ctx->pc = 0x238210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23820Cu;
            // 0x238210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D8B0u;
    if (runtime->hasFunction(0x19D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238214u; }
        if (ctx->pc != 0x238214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238214u; }
        if (ctx->pc != 0x238214u) { return; }
    }
    ctx->pc = 0x238214u;
label_238214:
    // 0x238214: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238218: 0xa422d804  sh          $v0, -0x27FC($at)
    ctx->pc = 0x238218u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
    // 0x23821c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x23821cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x238220: 0xc067674  jal         func_19D9D0
    ctx->pc = 0x238220u;
    SET_GPR_U32(ctx, 31, 0x238228u);
    ctx->pc = 0x238224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238220u;
            // 0x238224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D9D0u;
    if (runtime->hasFunction(0x19D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238228u; }
        if (ctx->pc != 0x238228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238228u; }
        if (ctx->pc != 0x238228u) { return; }
    }
    ctx->pc = 0x238228u;
label_238228:
    // 0x238228: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x238228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23822c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238230: 0x8422d808  lh          $v0, -0x27F8($at)
    ctx->pc = 0x238230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957064)));
    // 0x238234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238238: 0x14450013  bne         $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x238238u;
    {
        const bool branch_taken_0x238238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x23823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238238u;
            // 0x23823c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238238) {
            ctx->pc = 0x238288u;
            goto label_238288;
        }
    }
    ctx->pc = 0x238240u;
    // 0x238240: 0x1260006e  beqz        $s3, . + 4 + (0x6E << 2)
    ctx->pc = 0x238240u;
    {
        const bool branch_taken_0x238240 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x238240) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238248u;
    // 0x238248: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x238248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x23824c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23824Cu;
    {
        const bool branch_taken_0x23824c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x238250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23824Cu;
            // 0x238250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23824c) {
            ctx->pc = 0x238264u;
            goto label_238264;
        }
    }
    ctx->pc = 0x238254u;
    // 0x238254: 0xc065cdc  jal         func_197370
    ctx->pc = 0x238254u;
    SET_GPR_U32(ctx, 31, 0x23825Cu);
    ctx->pc = 0x238258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238254u;
            // 0x238258: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23825Cu; }
        if (ctx->pc != 0x23825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23825Cu; }
        if (ctx->pc != 0x23825Cu) { return; }
    }
    ctx->pc = 0x23825Cu;
label_23825c:
    // 0x23825c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23825Cu;
    {
        const bool branch_taken_0x23825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23825Cu;
            // 0x238260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23825c) {
            ctx->pc = 0x238278u;
            goto label_238278;
        }
    }
    ctx->pc = 0x238264u;
label_238264:
    // 0x238264: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x238264u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x238268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23826c: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x23826Cu;
    SET_GPR_U32(ctx, 31, 0x238274u);
    ctx->pc = 0x238270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23826Cu;
            // 0x238270: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238274u; }
        if (ctx->pc != 0x238274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238274u; }
        if (ctx->pc != 0x238274u) { return; }
    }
    ctx->pc = 0x238274u;
label_238274:
    // 0x238274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238278:
    // 0x238278: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x238278u;
    SET_GPR_U32(ctx, 31, 0x238280u);
    ctx->pc = 0x23827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238278u;
            // 0x23827c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238280u; }
        if (ctx->pc != 0x238280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238280u; }
        if (ctx->pc != 0x238280u) { return; }
    }
    ctx->pc = 0x238280u;
label_238280:
    // 0x238280: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x238280u;
    {
        const bool branch_taken_0x238280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238280) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238288u;
label_238288:
    // 0x238288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x238288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23828c: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x23828Cu;
    SET_GPR_U32(ctx, 31, 0x238294u);
    ctx->pc = 0x238290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23828Cu;
            // 0x238290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238294u; }
        if (ctx->pc != 0x238294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238294u; }
        if (ctx->pc != 0x238294u) { return; }
    }
    ctx->pc = 0x238294u;
label_238294:
    // 0x238294: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238298: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x238298u;
    {
        const bool branch_taken_0x238298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23829Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238298u;
            // 0x23829c: 0xac33d810  sw          $s3, -0x27F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238298) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2382A0u;
label_2382a0:
    // 0x2382a0: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2382A0u;
    {
        const bool branch_taken_0x2382a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2382A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382A0u;
            // 0x2382a4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382a0) {
            ctx->pc = 0x2382B8u;
            goto label_2382b8;
        }
    }
    ctx->pc = 0x2382A8u;
    // 0x2382a8: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x2382a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x2382ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2382acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2382b0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2382B0u;
    {
        const bool branch_taken_0x2382b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382B0u;
            // 0x2382b4: 0xac22d810  sw          $v0, -0x27F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382b0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2382B8u;
label_2382b8:
    // 0x2382b8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2382B8u;
    {
        const bool branch_taken_0x2382b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2382BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382B8u;
            // 0x2382bc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382b8) {
            ctx->pc = 0x2382D0u;
            goto label_2382d0;
        }
    }
    ctx->pc = 0x2382C0u;
    // 0x2382c0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2382c4: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2382C4u;
    {
        const bool branch_taken_0x2382c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2382C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382C4u;
            // 0x2382c8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382c4) {
            ctx->pc = 0x238308u;
            goto label_238308;
        }
    }
    ctx->pc = 0x2382CCu;
    // 0x2382cc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2382ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2382d0:
    // 0x2382d0: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2382D0u;
    {
        const bool branch_taken_0x2382d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2382D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382D0u;
            // 0x2382d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382d0) {
            ctx->pc = 0x2382ECu;
            goto label_2382ec;
        }
    }
    ctx->pc = 0x2382D8u;
    // 0x2382d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2382d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382dc: 0xc067134  jal         func_19C4D0
    ctx->pc = 0x2382DCu;
    SET_GPR_U32(ctx, 31, 0x2382E4u);
    ctx->pc = 0x2382E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2382DCu;
            // 0x2382e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C4D0u;
    if (runtime->hasFunction(0x19C4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382E4u; }
        if (ctx->pc != 0x2382E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoboVoiceFlag__16CUserDataManagerFi_0x19c4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382E4u; }
        if (ctx->pc != 0x2382E4u) { return; }
    }
    ctx->pc = 0x2382E4u;
label_2382e4:
    // 0x2382e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2382E4u;
    {
        const bool branch_taken_0x2382e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2382E4u;
            // 0x2382e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382e4) {
            ctx->pc = 0x2382F8u;
            goto label_2382f8;
        }
    }
    ctx->pc = 0x2382ECu;
label_2382ec:
    // 0x2382ec: 0xc067134  jal         func_19C4D0
    ctx->pc = 0x2382ECu;
    SET_GPR_U32(ctx, 31, 0x2382F4u);
    ctx->pc = 0x2382F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2382ECu;
            // 0x2382f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C4D0u;
    if (runtime->hasFunction(0x19C4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382F4u; }
        if (ctx->pc != 0x2382F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoboVoiceFlag__16CUserDataManagerFi_0x19c4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2382F4u; }
        if (ctx->pc != 0x2382F4u) { return; }
    }
    ctx->pc = 0x2382F4u;
label_2382f4:
    // 0x2382f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2382f8:
    // 0x2382f8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2382F8u;
    SET_GPR_U32(ctx, 31, 0x238300u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238300u; }
        if (ctx->pc != 0x238300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238300u; }
        if (ctx->pc != 0x238300u) { return; }
    }
    ctx->pc = 0x238300u;
label_238300:
    // 0x238300: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x238300u;
    {
        const bool branch_taken_0x238300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238300) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238308u;
label_238308:
    // 0x238308: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x238308u;
    {
        const bool branch_taken_0x238308 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238308u;
            // 0x23830c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238308) {
            ctx->pc = 0x238350u;
            goto label_238350;
        }
    }
    ctx->pc = 0x238310u;
    // 0x238310: 0xc06717c  jal         func_19C5F0
    ctx->pc = 0x238310u;
    SET_GPR_U32(ctx, 31, 0x238318u);
    ctx->pc = 0x238314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238310u;
            // 0x238314: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C5F0u;
    if (runtime->hasFunction(0x19C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238318u; }
        if (ctx->pc != 0x238318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRobotCore__16CUserDataManagerFv_0x19c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238318u; }
        if (ctx->pc != 0x238318u) { return; }
    }
    ctx->pc = 0x238318u;
label_238318:
    // 0x238318: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x238318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23831c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23831cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238320: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x238320u;
    SET_GPR_U32(ctx, 31, 0x238328u);
    ctx->pc = 0x238324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238320u;
            // 0x238324: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238328u; }
        if (ctx->pc != 0x238328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238328u; }
        if (ctx->pc != 0x238328u) { return; }
    }
    ctx->pc = 0x238328u;
label_238328:
    // 0x238328: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x23832c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23832cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x238330: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x238330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x238334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x238334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238338: 0xc087d2c  jal         func_21F4B0
    ctx->pc = 0x238338u;
    SET_GPR_U32(ctx, 31, 0x238340u);
    ctx->pc = 0x23833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238338u;
            // 0x23833c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238340u; }
        if (ctx->pc != 0x238340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238340u; }
        if (ctx->pc != 0x238340u) { return; }
    }
    ctx->pc = 0x238340u;
label_238340:
    // 0x238340: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238344: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x238344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238348: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x238348u;
    {
        const bool branch_taken_0x238348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23834Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238348u;
            // 0x23834c: 0xa422d804  sh          $v0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238348) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238350u;
label_238350:
    // 0x238350: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238350u;
    {
        const bool branch_taken_0x238350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238350u;
            // 0x238354: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238350) {
            ctx->pc = 0x238368u;
            goto label_238368;
        }
    }
    ctx->pc = 0x238358u;
    // 0x238358: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23835c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23835cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238360: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x238360u;
    {
        const bool branch_taken_0x238360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238360u;
            // 0x238364: 0xa424d800  sh          $a0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238360) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238368u;
label_238368:
    // 0x238368: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x238368u;
    {
        const bool branch_taken_0x238368 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238368u;
            // 0x23836c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238368) {
            ctx->pc = 0x23839Cu;
            goto label_23839c;
        }
    }
    ctx->pc = 0x238370u;
    // 0x238370: 0x2742821  addu        $a1, $s3, $s4
    ctx->pc = 0x238370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x238374: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x238374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x238378: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x238378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x23837c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x23837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x238380: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238380u;
    {
        const bool branch_taken_0x238380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x238384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238380u;
            // 0x238384: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238380) {
            ctx->pc = 0x238394u;
            goto label_238394;
        }
    }
    ctx->pc = 0x238388u;
    // 0x238388: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23838c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23838Cu;
    {
        const bool branch_taken_0x23838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23838Cu;
            // 0x238390: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23838c) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x238394u;
label_238394:
    // 0x238394: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x238394u;
    {
        const bool branch_taken_0x238394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238394u;
            // 0x238398: 0xa424d800  sh          $a0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238394) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x23839Cu;
label_23839c:
    // 0x23839c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23839Cu;
    {
        const bool branch_taken_0x23839c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2383A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23839Cu;
            // 0x2383a0: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23839c) {
            ctx->pc = 0x2383D0u;
            goto label_2383d0;
        }
    }
    ctx->pc = 0x2383A4u;
    // 0x2383a4: 0x2742821  addu        $a1, $s3, $s4
    ctx->pc = 0x2383a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2383a8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x2383ac: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x2383acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2383b0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2383b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2383b4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2383B4u;
    {
        const bool branch_taken_0x2383b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2383B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383B4u;
            // 0x2383b8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383b4) {
            ctx->pc = 0x2383C8u;
            goto label_2383c8;
        }
    }
    ctx->pc = 0x2383BCu;
    // 0x2383bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2383bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2383c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2383C0u;
    {
        const bool branch_taken_0x2383c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383C0u;
            // 0x2383c4: 0xa423d800  sh          $v1, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383c0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2383C8u;
label_2383c8:
    // 0x2383c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2383C8u;
    {
        const bool branch_taken_0x2383c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383C8u;
            // 0x2383cc: 0xa424d804  sh          $a0, -0x27FC($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383c8) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2383D0u;
label_2383d0:
    // 0x2383d0: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2383D0u;
    {
        const bool branch_taken_0x2383d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2383D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383D0u;
            // 0x2383d4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383d0) {
            ctx->pc = 0x2383E4u;
            goto label_2383e4;
        }
    }
    ctx->pc = 0x2383D8u;
    // 0x2383d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2383d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2383dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2383DCu;
    {
        const bool branch_taken_0x2383dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383DCu;
            // 0x2383e0: 0xa424d800  sh          $a0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383dc) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2383E4u;
label_2383e4:
    // 0x2383e4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2383E4u;
    {
        const bool branch_taken_0x2383e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2383E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383E4u;
            // 0x2383e8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383e4) {
            ctx->pc = 0x2383F8u;
            goto label_2383f8;
        }
    }
    ctx->pc = 0x2383ECu;
    // 0x2383ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2383ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2383f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2383F0u;
    {
        const bool branch_taken_0x2383f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2383F0u;
            // 0x2383f4: 0xa424d800  sh          $a0, -0x2800($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383f0) {
            ctx->pc = 0x2383FCu;
            goto label_2383fc;
        }
    }
    ctx->pc = 0x2383F8u;
label_2383f8:
    // 0x2383f8: 0xa423d800  sh          $v1, -0x2800($at)
    ctx->pc = 0x2383f8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
label_2383fc:
    // 0x2383fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2383fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238400: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x238400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x238404: 0x8423d800  lh          $v1, -0x2800($at)
    ctx->pc = 0x238404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957056)));
    // 0x238408: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x238408u;
    {
        const bool branch_taken_0x238408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238408u;
            // 0x23840c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238408) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x238410u;
    // 0x238410: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x238410u;
    {
        const bool branch_taken_0x238410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238410u;
            // 0x238414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238410) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x238418u;
    // 0x238418: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x238418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x23841c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x23841Cu;
    SET_GPR_U32(ctx, 31, 0x238424u);
    ctx->pc = 0x238420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23841Cu;
            // 0x238420: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238424u; }
        if (ctx->pc != 0x238424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238424u; }
        if (ctx->pc != 0x238424u) { return; }
    }
    ctx->pc = 0x238424u;
label_238424:
    // 0x238424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x238424u;
    {
        const bool branch_taken_0x238424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238424) {
            ctx->pc = 0x238448u;
            goto label_238448;
        }
    }
    ctx->pc = 0x23842Cu;
label_23842c:
    // 0x23842c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23842cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238430: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238434: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x238434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x238438: 0xa422d800  sh          $v0, -0x2800($at)
    ctx->pc = 0x238438u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 2));
    // 0x23843c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238440: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x238440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x238444: 0xa022d802  sb          $v0, -0x27FE($at)
    ctx->pc = 0x238444u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957058), (uint8_t)GPR_U32(ctx, 2));
label_238448:
    // 0x238448: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x238448u;
    {
        const bool branch_taken_0x238448 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x238448) {
            ctx->pc = 0x238490u;
            goto label_238490;
        }
    }
    ctx->pc = 0x238450u;
    // 0x238450: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238454: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x238454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x238458: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x238458u;
    {
        const bool branch_taken_0x238458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238458u;
            // 0x23845c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238458) {
            ctx->pc = 0x238464u;
            goto label_238464;
        }
    }
    ctx->pc = 0x238460u;
    // 0x238460: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x238460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_238464:
    // 0x238464: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x238464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238468: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x238468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23846c: 0xc08f078  jal         func_23C1E0
    ctx->pc = 0x23846Cu;
    SET_GPR_U32(ctx, 31, 0x238474u);
    ctx->pc = 0x238470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23846Cu;
            // 0x238470: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C1E0u;
    if (runtime->hasFunction(0x23C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238474u; }
        if (ctx->pc != 0x238474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeCnt__12CMenuKeyFuncFii_0x23c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238474u; }
        if (ctx->pc != 0x238474u) { return; }
    }
    ctx->pc = 0x238474u;
label_238474:
    // 0x238474: 0x8e8200d0  lw          $v0, 0xD0($s4)
    ctx->pc = 0x238474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x238478: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x238478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23847c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23847Cu;
    {
        const bool branch_taken_0x23847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23847Cu;
            // 0x238480: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23847c) {
            ctx->pc = 0x238490u;
            goto label_238490;
        }
    }
    ctx->pc = 0x238484u;
label_238484:
    // 0x238484: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x238484u;
    {
        const bool branch_taken_0x238484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x238484) {
            ctx->pc = 0x238490u;
            goto label_238490;
        }
    }
    ctx->pc = 0x23848Cu;
    // 0x23848c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23848cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238490:
    // 0x238490: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x238490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_238494:
    // 0x238494: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x238494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x238498: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x238498u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23849c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23849cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2384a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2384a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2384a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2384a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2384a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2384a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2384ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2384acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2384b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2384b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2384b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2384b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2384b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2384b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2384bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2384BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2384C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2384BCu;
            // 0x2384c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2384C4u;
}
