#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeBenietio__FP9CEditDataP8CEditMap
// Address: 0x317600 - 0x317a8c
void AnalyzeBenietio__FP9CEditDataP8CEditMap_0x317600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeBenietio__FP9CEditDataP8CEditMap_0x317600");
#endif

    switch (ctx->pc) {
        case 0x317640u: goto label_317640;
        case 0x3176b0u: goto label_3176b0;
        case 0x3176d0u: goto label_3176d0;
        case 0x3176f8u: goto label_3176f8;
        case 0x31770cu: goto label_31770c;
        case 0x317720u: goto label_317720;
        case 0x317754u: goto label_317754;
        case 0x317764u: goto label_317764;
        case 0x3177c0u: goto label_3177c0;
        case 0x3177d4u: goto label_3177d4;
        case 0x317870u: goto label_317870;
        case 0x31787cu: goto label_31787c;
        case 0x3178a0u: goto label_3178a0;
        case 0x3178c4u: goto label_3178c4;
        case 0x317938u: goto label_317938;
        case 0x317944u: goto label_317944;
        case 0x3179d4u: goto label_3179d4;
        case 0x3179e8u: goto label_3179e8;
        case 0x3179fcu: goto label_3179fc;
        case 0x317a10u: goto label_317a10;
        case 0x317a5cu: goto label_317a5c;
        default: break;
    }

    ctx->pc = 0x317600u;

    // 0x317600: 0x27bded60  addiu       $sp, $sp, -0x12A0
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962528));
    // 0x317604: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x317604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x317608: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x317608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31760c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x317610: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x317610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x317614: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x317614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317618: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x317618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31761c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317620: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x317620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x317624: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x317624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x317628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31762c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x317634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x317638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31763c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317640:
    // 0x317640: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x317640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x317644: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x317644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x317648: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x317648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x31764c: 0x244701a0  addiu       $a3, $v0, 0x1A0
    ctx->pc = 0x31764cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x317650: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x317650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x317654: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x317654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x317658: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x317658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x31765c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x31765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x317660: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x317660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x317664: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x317664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x317668: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x317668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x31766c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x31766cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x317670: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x317670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x317674: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x317674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x317678: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x317678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x31767c: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x31767cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x317680: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x317680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x317684: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x317684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x317688: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x317688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x31768c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x31768cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x317690: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x317690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x317694: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x317694u;
    {
        const bool branch_taken_0x317694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317694u;
            // 0x317698: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317694) {
            ctx->pc = 0x317640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317640;
        }
    }
    ctx->pc = 0x31769Cu;
    // 0x31769c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176a0: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3176a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3176a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3176a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176a8: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3176A8u;
    SET_GPR_U32(ctx, 31, 0x3176B0u);
    ctx->pc = 0x3176ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3176A8u;
            // 0x3176ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176B0u; }
        if (ctx->pc != 0x3176B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176B0u; }
        if (ctx->pc != 0x3176B0u) { return; }
    }
    ctx->pc = 0x3176B0u;
label_3176b0:
    // 0x3176b0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x3176b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3176b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3176b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3176b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3176b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3176bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3176bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3176c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3176c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3176c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176c8: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x3176C8u;
    SET_GPR_U32(ctx, 31, 0x3176D0u);
    ctx->pc = 0x3176CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3176C8u;
            // 0x3176cc: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176D0u; }
        if (ctx->pc != 0x3176D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176D0u; }
        if (ctx->pc != 0x3176D0u) { return; }
    }
    ctx->pc = 0x3176D0u;
label_3176d0:
    // 0x3176d0: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x3176d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3176d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3176d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3176d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3176dc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3176dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3176e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3176e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3176e4: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x3176e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3176e8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x3176e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x3176ec: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3176ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3176f0: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3176F0u;
    SET_GPR_U32(ctx, 31, 0x3176F8u);
    ctx->pc = 0x3176F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3176F0u;
            // 0x3176f4: 0xafa001a8  sw          $zero, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176F8u; }
        if (ctx->pc != 0x3176F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176F8u; }
        if (ctx->pc != 0x3176F8u) { return; }
    }
    ctx->pc = 0x3176F8u;
label_3176f8:
    // 0x3176f8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3176f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176fc: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x3176fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x317700: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x317700u;
    {
        const bool branch_taken_0x317700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x317704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317700u;
            // 0x317704: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317700) {
            ctx->pc = 0x317868u;
            goto label_317868;
        }
    }
    ctx->pc = 0x317708u;
    // 0x317708: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x317708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31770c:
    // 0x31770c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x31770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x317710: 0x245602a0  addiu       $s6, $v0, 0x2A0
    ctx->pc = 0x317710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x317714: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x317714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x317718: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x317718u;
    SET_GPR_U32(ctx, 31, 0x317720u);
    ctx->pc = 0x31771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317718u;
            // 0x31771c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317720u; }
        if (ctx->pc != 0x317720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317720u; }
        if (ctx->pc != 0x317720u) { return; }
    }
    ctx->pc = 0x317720u;
label_317720:
    // 0x317720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317724: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x317724u;
    {
        const bool branch_taken_0x317724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x317724) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x31772Cu;
    // 0x31772c: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x31772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x317730: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x317730u;
    {
        const bool branch_taken_0x317730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317730) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x317738u;
    // 0x317738: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x317738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x31773c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317740: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x317740u;
    {
        const bool branch_taken_0x317740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x317744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317740u;
            // 0x317744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317740) {
            ctx->pc = 0x31775Cu;
            goto label_31775c;
        }
    }
    ctx->pc = 0x317748u;
    // 0x317748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31774c: 0xc0c5ea4  jal         func_317A90
    ctx->pc = 0x31774Cu;
    SET_GPR_U32(ctx, 31, 0x317754u);
    ctx->pc = 0x317750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31774Cu;
            // 0x317750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317A90u;
    if (runtime->hasFunction(0x317A90u)) {
        auto targetFn = runtime->lookupFunction(0x317A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317754u; }
        if (ctx->pc != 0x317754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColorType__FP10CEditPartsi_0x317a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317754u; }
        if (ctx->pc != 0x317754u) { return; }
    }
    ctx->pc = 0x317754u;
label_317754:
    // 0x317754: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317754u;
    {
        const bool branch_taken_0x317754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317754) {
            ctx->pc = 0x317764u;
            goto label_317764;
        }
    }
    ctx->pc = 0x31775Cu;
label_31775c:
    // 0x31775c: 0xc0c5ea4  jal         func_317A90
    ctx->pc = 0x31775Cu;
    SET_GPR_U32(ctx, 31, 0x317764u);
    ctx->pc = 0x317A90u;
    if (runtime->hasFunction(0x317A90u)) {
        auto targetFn = runtime->lookupFunction(0x317A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317764u; }
        if (ctx->pc != 0x317764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColorType__FP10CEditPartsi_0x317a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317764u; }
        if (ctx->pc != 0x317764u) { return; }
    }
    ctx->pc = 0x317764u;
label_317764:
    // 0x317764: 0x440003b  bltz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x317764u;
    {
        const bool branch_taken_0x317764 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x317768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317764u;
            // 0x317768: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317764) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x31776Cu;
    // 0x31776c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31776Cu;
    {
        const bool branch_taken_0x31776c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x317770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31776Cu;
            // 0x317770: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31776c) {
            ctx->pc = 0x317778u;
            goto label_317778;
        }
    }
    ctx->pc = 0x317774u;
    // 0x317774: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x317774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_317778:
    // 0x317778: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x317778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31777c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31777Cu;
    {
        const bool branch_taken_0x31777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31777c) {
            ctx->pc = 0x317788u;
            goto label_317788;
        }
    }
    ctx->pc = 0x317784u;
    // 0x317784: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x317784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_317788:
    // 0x317788: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x317788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31778c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31778Cu;
    {
        const bool branch_taken_0x31778c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31778c) {
            ctx->pc = 0x317798u;
            goto label_317798;
        }
    }
    ctx->pc = 0x317794u;
    // 0x317794: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x317794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_317798:
    // 0x317798: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x317798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x31779c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3177a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3177a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3177a4: 0x245400a0  addiu       $s4, $v0, 0xA0
    ctx->pc = 0x3177a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3177a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3177a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177ac: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3177acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3177b0: 0x27a60aa0  addiu       $a2, $sp, 0xAA0
    ctx->pc = 0x3177b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2720));
    // 0x3177b4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x3177b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3177b8: 0xc0bba48  jal         func_2EE920
    ctx->pc = 0x3177B8u;
    SET_GPR_U32(ctx, 31, 0x3177C0u);
    ctx->pc = 0x3177BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3177B8u;
            // 0x3177bc: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3177C0u; }
        if (ctx->pc != 0x3177C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3177C0u; }
        if (ctx->pc != 0x3177C0u) { return; }
    }
    ctx->pc = 0x3177C0u;
label_3177c0:
    // 0x3177c0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3177c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3177c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177c8: 0x27a60aa0  addiu       $a2, $sp, 0xAA0
    ctx->pc = 0x3177c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2720));
    // 0x3177cc: 0xc0c5ad0  jal         func_316B40
    ctx->pc = 0x3177CCu;
    SET_GPR_U32(ctx, 31, 0x3177D4u);
    ctx->pc = 0x3177D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3177CCu;
            // 0x3177d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316B40u;
    if (runtime->hasFunction(0x316B40u)) {
        auto targetFn = runtime->lookupFunction(0x316B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3177D4u; }
        if (ctx->pc != 0x3177D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountPartsInfoID__FiP8CEditMapPii_0x316b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3177D4u; }
        if (ctx->pc != 0x3177D4u) { return; }
    }
    ctx->pc = 0x3177D4u;
label_3177d4:
    // 0x3177d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3177D4u;
    {
        const bool branch_taken_0x3177d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3177D4u;
            // 0x3177d8: 0x2a410009  slti        $at, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177d4) {
            ctx->pc = 0x3177F8u;
            goto label_3177f8;
        }
    }
    ctx->pc = 0x3177DCu;
    // 0x3177dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3177DCu;
    {
        const bool branch_taken_0x3177dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3177DCu;
            // 0x3177e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177dc) {
            ctx->pc = 0x3177ECu;
            goto label_3177ec;
        }
    }
    ctx->pc = 0x3177E4u;
    // 0x3177e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3177E4u;
    {
        const bool branch_taken_0x3177e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3177E4u;
            // 0x3177e8: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177e4) {
            ctx->pc = 0x3177F8u;
            goto label_3177f8;
        }
    }
    ctx->pc = 0x3177ECu;
label_3177ec:
    // 0x3177ec: 0x0  nop
    ctx->pc = 0x3177ecu;
    // NOP
    // 0x3177f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3177f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3177f4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3177f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3177f8:
    // 0x3177f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3177f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3177fc: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3177FCu;
    {
        const bool branch_taken_0x3177fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3177fc) {
            ctx->pc = 0x317824u;
            goto label_317824;
        }
    }
    ctx->pc = 0x317804u;
    // 0x317804: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x317804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x317808: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x317808u;
    {
        const bool branch_taken_0x317808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317808) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x317810u;
    // 0x317810: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x317810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x317814: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x317814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x317818: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x317818u;
    {
        const bool branch_taken_0x317818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317818u;
            // 0x31781c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317818) {
            ctx->pc = 0x317824u;
            goto label_317824;
        }
    }
    ctx->pc = 0x317820u;
    // 0x317820: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x317820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_317824:
    // 0x317824: 0x0  nop
    ctx->pc = 0x317824u;
    // NOP
    // 0x317828: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x317828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31782c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31782Cu;
    {
        const bool branch_taken_0x31782c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x31782c) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x317834u;
    // 0x317834: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x317834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x317838: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317838u;
    {
        const bool branch_taken_0x317838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317838) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x317840u;
    // 0x317840: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x317840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x317844: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x317844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x317848: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x317848u;
    {
        const bool branch_taken_0x317848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317848u;
            // 0x31784c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317848) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x317850u;
    // 0x317850: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x317850u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_317854:
    // 0x317854: 0x0  nop
    ctx->pc = 0x317854u;
    // NOP
    // 0x317858: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31785c: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x31785cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x317860: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x317860u;
    {
        const bool branch_taken_0x317860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317860u;
            // 0x317864: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317860) {
            ctx->pc = 0x31770Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31770c;
        }
    }
    ctx->pc = 0x317868u;
label_317868:
    // 0x317868: 0xc064220  jal         func_190880
    ctx->pc = 0x317868u;
    SET_GPR_U32(ctx, 31, 0x317870u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317870u; }
        if (ctx->pc != 0x317870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317870u; }
        if (ctx->pc != 0x317870u) { return; }
    }
    ctx->pc = 0x317870u;
label_317870:
    // 0x317870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317874: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x317874u;
    SET_GPR_U32(ctx, 31, 0x31787Cu);
    ctx->pc = 0x317878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317874u;
            // 0x317878: 0x240501bc  addiu       $a1, $zero, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31787Cu; }
        if (ctx->pc != 0x31787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31787Cu; }
        if (ctx->pc != 0x31787Cu) { return; }
    }
    ctx->pc = 0x31787Cu;
label_31787c:
    // 0x31787c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x31787cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x317880: 0x27b001dc  addiu       $s0, $sp, 0x1DC
    ctx->pc = 0x317880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x317884: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x317884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x317888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31788c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x317890: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x317890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x317894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317898: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x317898u;
    SET_GPR_U32(ctx, 31, 0x3178A0u);
    ctx->pc = 0x31789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317898u;
            // 0x31789c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3178A0u; }
        if (ctx->pc != 0x3178A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3178A0u; }
        if (ctx->pc != 0x3178A0u) { return; }
    }
    ctx->pc = 0x3178A0u;
label_3178a0:
    // 0x3178a0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x3178a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3178a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3178a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3178a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3178ac: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x3178acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3178b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3178b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3178b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3178b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178b8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3178b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3178bc: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3178BCu;
    SET_GPR_U32(ctx, 31, 0x3178C4u);
    ctx->pc = 0x3178C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3178BCu;
            // 0x3178c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3178C4u; }
        if (ctx->pc != 0x3178C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3178C4u; }
        if (ctx->pc != 0x3178C4u) { return; }
    }
    ctx->pc = 0x3178C4u;
label_3178c4:
    // 0x3178c4: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x3178c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3178c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3178c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3178ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3178d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3178d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3178d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3178d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3178d8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3178d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3178dc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x3178dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x3178e0: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x3178e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3178e4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3178e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3178e8: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x3178e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x3178ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3178ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3178f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3178f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3178f4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3178f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3178f8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3178f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3178fc: 0x28420032  slti        $v0, $v0, 0x32
    ctx->pc = 0x3178fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x317900: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x317904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x317908: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x317908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x31790c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x31790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x317910: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x317910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x317914: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x317918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31791c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x31791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x317920: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x317920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x317924: 0x28420050  slti        $v0, $v0, 0x50
    ctx->pc = 0x317924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x317928: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31792c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x317930: 0xc0aa7f4  jal         func_2A9FD0
    ctx->pc = 0x317930u;
    SET_GPR_U32(ctx, 31, 0x317938u);
    ctx->pc = 0x317934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317930u;
            // 0x317934: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317938u; }
        if (ctx->pc != 0x317938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317938u; }
        if (ctx->pc != 0x317938u) { return; }
    }
    ctx->pc = 0x317938u;
label_317938:
    // 0x317938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31793c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31793cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317940: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x317940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317944:
    // 0x317944: 0x2e62821  addu        $a1, $s7, $a2
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x317948: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x317948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31794c: 0x80a35050  lb          $v1, 0x5050($a1)
    ctx->pc = 0x31794cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20560)));
    // 0x317950: 0x244800a0  addiu       $t0, $v0, 0xA0
    ctx->pc = 0x317950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x317954: 0x244901a0  addiu       $t1, $v0, 0x1A0
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x317958: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x317958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x31795c: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x31795cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x317960: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x317960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x317964: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x317964u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x317968: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x317968u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x31796c: 0x80a35051  lb          $v1, 0x5051($a1)
    ctx->pc = 0x31796cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20561)));
    // 0x317970: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x317970u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x317974: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x317974u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x317978: 0x80a35052  lb          $v1, 0x5052($a1)
    ctx->pc = 0x317978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20562)));
    // 0x31797c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x31797cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x317980: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x317980u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x317984: 0x80a35053  lb          $v1, 0x5053($a1)
    ctx->pc = 0x317984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20563)));
    // 0x317988: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x317988u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x31798c: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x31798cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
    // 0x317990: 0x80a35054  lb          $v1, 0x5054($a1)
    ctx->pc = 0x317990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20564)));
    // 0x317994: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x317994u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x317998: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x317998u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
    // 0x31799c: 0x80a35055  lb          $v1, 0x5055($a1)
    ctx->pc = 0x31799cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20565)));
    // 0x3179a0: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x3179a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x3179a4: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x3179a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
    // 0x3179a8: 0x80a35056  lb          $v1, 0x5056($a1)
    ctx->pc = 0x3179a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20566)));
    // 0x3179ac: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x3179acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x3179b0: 0xad240018  sw          $a0, 0x18($t1)
    ctx->pc = 0x3179b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
    // 0x3179b4: 0x80a35057  lb          $v1, 0x5057($a1)
    ctx->pc = 0x3179b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 20567)));
    // 0x3179b8: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x3179b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x3179bc: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3179BCu;
    {
        const bool branch_taken_0x3179bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3179C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3179BCu;
            // 0x3179c0: 0xad24001c  sw          $a0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179bc) {
            ctx->pc = 0x317944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317944;
        }
    }
    ctx->pc = 0x3179C4u;
    // 0x3179c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3179c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3179c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3179cc: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x3179CCu;
    SET_GPR_U32(ctx, 31, 0x3179D4u);
    ctx->pc = 0x3179D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3179CCu;
            // 0x3179d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3179D4u; }
        if (ctx->pc != 0x3179D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3179D4u; }
        if (ctx->pc != 0x3179D4u) { return; }
    }
    ctx->pc = 0x3179D4u;
label_3179d4:
    // 0x3179d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3179d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3179d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3179d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3179dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179e0: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x3179E0u;
    SET_GPR_U32(ctx, 31, 0x3179E8u);
    ctx->pc = 0x3179E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3179E0u;
            // 0x3179e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3179E8u; }
        if (ctx->pc != 0x3179E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3179E8u; }
        if (ctx->pc != 0x3179E8u) { return; }
    }
    ctx->pc = 0x3179E8u;
label_3179e8:
    // 0x3179e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3179e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3179ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3179f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3179f4: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x3179F4u;
    SET_GPR_U32(ctx, 31, 0x3179FCu);
    ctx->pc = 0x3179F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3179F4u;
            // 0x3179f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3179FCu; }
        if (ctx->pc != 0x3179FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3179FCu; }
        if (ctx->pc != 0x3179FCu) { return; }
    }
    ctx->pc = 0x3179FCu;
label_3179fc:
    // 0x3179fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3179fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x317a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x317a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317a08: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x317A08u;
    SET_GPR_U32(ctx, 31, 0x317A10u);
    ctx->pc = 0x317A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317A08u;
            // 0x317a0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317A10u; }
        if (ctx->pc != 0x317A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317A10u; }
        if (ctx->pc != 0x317A10u) { return; }
    }
    ctx->pc = 0x317A10u;
label_317a10:
    // 0x317a10: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x317a10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x317a14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x317A14u;
    {
        const bool branch_taken_0x317a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x317a14) {
            ctx->pc = 0x317A20u;
            goto label_317a20;
        }
    }
    ctx->pc = 0x317A1Cu;
    // 0x317a1c: 0x12182b  sltu        $v1, $zero, $s2
    ctx->pc = 0x317a1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_317a20:
    // 0x317a20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x317A20u;
    {
        const bool branch_taken_0x317a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x317a20) {
            ctx->pc = 0x317A2Cu;
            goto label_317a2c;
        }
    }
    ctx->pc = 0x317A28u;
    // 0x317a28: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x317a28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_317a2c:
    // 0x317a2c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x317A2Cu;
    {
        const bool branch_taken_0x317a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x317a2c) {
            ctx->pc = 0x317A38u;
            goto label_317a38;
        }
    }
    ctx->pc = 0x317A34u;
    // 0x317a34: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x317a34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_317a38:
    // 0x317a38: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x317a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x317a3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x317a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a40: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x317a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x317a44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x317a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317a48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x317a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x317a4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x317a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x317a50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x317a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x317a54: 0xc0aa7f4  jal         func_2A9FD0
    ctx->pc = 0x317A54u;
    SET_GPR_U32(ctx, 31, 0x317A5Cu);
    ctx->pc = 0x317A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317A54u;
            // 0x317a58: 0x27a701a0  addiu       $a3, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317A5Cu; }
        if (ctx->pc != 0x317A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317A5Cu; }
        if (ctx->pc != 0x317A5Cu) { return; }
    }
    ctx->pc = 0x317A5Cu;
label_317a5c:
    // 0x317a5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x317a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x317a60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x317a60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x317a64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x317a64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x317a68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x317a68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317a6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x317a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317a70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x317a70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317a74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x317a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317a78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x317a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x317a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x317a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317a84: 0x3e00008  jr          $ra
    ctx->pc = 0x317A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317A84u;
            // 0x317a88: 0x27bd12a0  addiu       $sp, $sp, 0x12A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317A8Cu;
}
