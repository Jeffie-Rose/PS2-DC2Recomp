#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateSystemMes__Fii
// Address: 0x1968c0 - 0x196bd4
void CreateSystemMes__Fii_0x1968c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateSystemMes__Fii_0x1968c0");
#endif

    switch (ctx->pc) {
        case 0x1968e0u: goto label_1968e0;
        case 0x196904u: goto label_196904;
        case 0x196954u: goto label_196954;
        case 0x196978u: goto label_196978;
        case 0x1969acu: goto label_1969ac;
        case 0x1969c0u: goto label_1969c0;
        case 0x1969dcu: goto label_1969dc;
        case 0x196a18u: goto label_196a18;
        case 0x196afcu: goto label_196afc;
        case 0x196b74u: goto label_196b74;
        case 0x196b80u: goto label_196b80;
        case 0x196b88u: goto label_196b88;
        case 0x196b90u: goto label_196b90;
        case 0x196b9cu: goto label_196b9c;
        case 0x196ba4u: goto label_196ba4;
        case 0x196bacu: goto label_196bac;
        case 0x196bb8u: goto label_196bb8;
        default: break;
    }

    ctx->pc = 0x1968c0u;

    // 0x1968c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1968c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1968c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1968c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1968c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1968c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1968cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1968ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1968d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1968d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1968d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1968d8: 0xc0659e0  jal         func_196780
    ctx->pc = 0x1968D8u;
    SET_GPR_U32(ctx, 31, 0x1968E0u);
    ctx->pc = 0x1968DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1968D8u;
            // 0x1968dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968E0u; }
        if (ctx->pc != 0x1968E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968E0u; }
        if (ctx->pc != 0x1968E0u) { return; }
    }
    ctx->pc = 0x1968E0u;
label_1968e0:
    // 0x1968e0: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x1968e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x1968e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1968e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e8: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x1968e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x1968ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1968ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968f0: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x1968f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x1968f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1968f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968f8: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x1968f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x1968fc: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x1968fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x196900: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x196900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
label_196904:
    // 0x196904: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x196904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x196908: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19690c: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x19690cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x196910: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x196910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x196914: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x196914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x196918: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x196918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x19691c: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x19691cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x196920: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x196920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x196924: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x196924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x196928: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x196928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x19692c: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x19692cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x196930: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x196930u;
    {
        const bool branch_taken_0x196930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196930u;
            // 0x196934: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196930) {
            ctx->pc = 0x196904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196904;
        }
    }
    ctx->pc = 0x196938u;
    // 0x196938: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x196938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
    // 0x19693c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196940: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x196940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    // 0x196944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196948: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x196948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
    // 0x19694c: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x19694Cu;
    SET_GPR_U32(ctx, 31, 0x196954u);
    ctx->pc = 0x196950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19694Cu;
            // 0x196950: 0xae22018c  sw          $v0, 0x18C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196954u; }
        if (ctx->pc != 0x196954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196954u; }
        if (ctx->pc != 0x196954u) { return; }
    }
    ctx->pc = 0x196954u;
label_196954:
    // 0x196954: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x196954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x196958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19695c: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x19695cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
    // 0x196960: 0xae2001cc  sw          $zero, 0x1CC($s1)
    ctx->pc = 0x196960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 0));
    // 0x196964: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x196964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
    // 0x196968: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x196968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    // 0x19696c: 0xae2001d8  sw          $zero, 0x1D8($s1)
    ctx->pc = 0x19696cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
    // 0x196970: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x196970u;
    SET_GPR_U32(ctx, 31, 0x196978u);
    ctx->pc = 0x196974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196970u;
            // 0x196974: 0xae2001dc  sw          $zero, 0x1DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196978u; }
        if (ctx->pc != 0x196978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196978u; }
        if (ctx->pc != 0x196978u) { return; }
    }
    ctx->pc = 0x196978u;
label_196978:
    // 0x196978: 0x8e2517d0  lw          $a1, 0x17D0($s1)
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6096)));
    // 0x19697c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x196980: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x196980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196984: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x196984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x196988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x196988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19698c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19698cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196990: 0xae2517d4  sw          $a1, 0x17D4($s1)
    ctx->pc = 0x196990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6100), GPR_U32(ctx, 5));
    // 0x196994: 0xae2017d8  sw          $zero, 0x17D8($s1)
    ctx->pc = 0x196994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6104), GPR_U32(ctx, 0));
    // 0x196998: 0xae2017dc  sw          $zero, 0x17DC($s1)
    ctx->pc = 0x196998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6108), GPR_U32(ctx, 0));
    // 0x19699c: 0xae2417e0  sw          $a0, 0x17E0($s1)
    ctx->pc = 0x19699cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6112), GPR_U32(ctx, 4));
    // 0x1969a0: 0xae2317e4  sw          $v1, 0x17E4($s1)
    ctx->pc = 0x1969a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 3));
    // 0x1969a4: 0xae2017e8  sw          $zero, 0x17E8($s1)
    ctx->pc = 0x1969a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6120), GPR_U32(ctx, 0));
    // 0x1969a8: 0xa2221800  sb          $v0, 0x1800($s1)
    ctx->pc = 0x1969a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6144), (uint8_t)GPR_U32(ctx, 2));
label_1969ac:
    // 0x1969ac: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1969acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1969b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1969b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969b4: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x1969b8: 0xc049c86  jal         func_127218
    ctx->pc = 0x1969B8u;
    SET_GPR_U32(ctx, 31, 0x1969C0u);
    ctx->pc = 0x1969BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1969B8u;
            // 0x1969bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969C0u; }
        if (ctx->pc != 0x1969C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969C0u; }
        if (ctx->pc != 0x1969C0u) { return; }
    }
    ctx->pc = 0x1969C0u;
label_1969c0:
    // 0x1969c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1969c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1969c4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1969c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1969c8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1969C8u;
    {
        const bool branch_taken_0x1969c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1969CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1969C8u;
            // 0x1969cc: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969c8) {
            ctx->pc = 0x1969ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1969ac;
        }
    }
    ctx->pc = 0x1969D0u;
    // 0x1969d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1969d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1969d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1969dc:
    // 0x1969dc: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x1969dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1969e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1969e4: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x1969e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x1969e8: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1969e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1969ec: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x1969ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x1969f0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1969f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1969f4: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x1969f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x1969f8: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x1969f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x1969fc: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x1969fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x196a00: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x196a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x196a04: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x196a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x196a08: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x196A08u;
    {
        const bool branch_taken_0x196a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A08u;
            // 0x196a0c: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a08) {
            ctx->pc = 0x1969DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1969dc;
        }
    }
    ctx->pc = 0x196A10u;
    // 0x196a10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x196a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196a18:
    // 0x196a18: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x196a1c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x196a20: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x196a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x196a24: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x196a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x196a28: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x196a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x196a2c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x196a30: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x196a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x196a34: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x196a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x196a38: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x196a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x196a3c: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x196a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x196a40: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x196a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x196a44: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x196a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x196a48: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x196a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x196a4c: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x196a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x196a50: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x196a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x196a54: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x196a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x196a58: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x196a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x196a5c: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x196a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x196a60: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x196a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x196a64: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x196A64u;
    {
        const bool branch_taken_0x196a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A64u;
            // 0x196a68: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a64) {
            ctx->pc = 0x196A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196a18;
        }
    }
    ctx->pc = 0x196A6Cu;
    // 0x196a6c: 0xae201ac4  sw          $zero, 0x1AC4($s1)
    ctx->pc = 0x196a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6852), GPR_U32(ctx, 0));
    // 0x196a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a74: 0xae201ac8  sw          $zero, 0x1AC8($s1)
    ctx->pc = 0x196a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6856), GPR_U32(ctx, 0));
    // 0x196a78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196a7c: 0xae221acc  sw          $v0, 0x1ACC($s1)
    ctx->pc = 0x196a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 2));
    // 0x196a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a84: 0xae201ad0  sw          $zero, 0x1AD0($s1)
    ctx->pc = 0x196a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6864), GPR_U32(ctx, 0));
    // 0x196a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a8c: 0xae201ad4  sw          $zero, 0x1AD4($s1)
    ctx->pc = 0x196a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6868), GPR_U32(ctx, 0));
    // 0x196a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a94: 0xae201ad8  sw          $zero, 0x1AD8($s1)
    ctx->pc = 0x196a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6872), GPR_U32(ctx, 0));
    // 0x196a98: 0xae231adc  sw          $v1, 0x1ADC($s1)
    ctx->pc = 0x196a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6876), GPR_U32(ctx, 3));
    // 0x196a9c: 0xae231ae0  sw          $v1, 0x1AE0($s1)
    ctx->pc = 0x196a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6880), GPR_U32(ctx, 3));
    // 0x196aa0: 0xae231ae4  sw          $v1, 0x1AE4($s1)
    ctx->pc = 0x196aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6884), GPR_U32(ctx, 3));
    // 0x196aa4: 0xae201ae8  sw          $zero, 0x1AE8($s1)
    ctx->pc = 0x196aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6888), GPR_U32(ctx, 0));
    // 0x196aa8: 0xae201aec  sw          $zero, 0x1AEC($s1)
    ctx->pc = 0x196aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6892), GPR_U32(ctx, 0));
    // 0x196aac: 0xae201af0  sw          $zero, 0x1AF0($s1)
    ctx->pc = 0x196aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6896), GPR_U32(ctx, 0));
    // 0x196ab0: 0xae201af4  sw          $zero, 0x1AF4($s1)
    ctx->pc = 0x196ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6900), GPR_U32(ctx, 0));
    // 0x196ab4: 0xae201af8  sw          $zero, 0x1AF8($s1)
    ctx->pc = 0x196ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6904), GPR_U32(ctx, 0));
    // 0x196ab8: 0xae201afc  sw          $zero, 0x1AFC($s1)
    ctx->pc = 0x196ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6908), GPR_U32(ctx, 0));
    // 0x196abc: 0xae201b00  sw          $zero, 0x1B00($s1)
    ctx->pc = 0x196abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6912), GPR_U32(ctx, 0));
    // 0x196ac0: 0xae231b04  sw          $v1, 0x1B04($s1)
    ctx->pc = 0x196ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6916), GPR_U32(ctx, 3));
    // 0x196ac4: 0xae231b08  sw          $v1, 0x1B08($s1)
    ctx->pc = 0x196ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6920), GPR_U32(ctx, 3));
    // 0x196ac8: 0xae231b0c  sw          $v1, 0x1B0C($s1)
    ctx->pc = 0x196ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6924), GPR_U32(ctx, 3));
    // 0x196acc: 0xae231b10  sw          $v1, 0x1B10($s1)
    ctx->pc = 0x196accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6928), GPR_U32(ctx, 3));
    // 0x196ad0: 0xae201b14  sw          $zero, 0x1B14($s1)
    ctx->pc = 0x196ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6932), GPR_U32(ctx, 0));
    // 0x196ad4: 0xae201b18  sw          $zero, 0x1B18($s1)
    ctx->pc = 0x196ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6936), GPR_U32(ctx, 0));
    // 0x196ad8: 0xae201b1c  sw          $zero, 0x1B1C($s1)
    ctx->pc = 0x196ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6940), GPR_U32(ctx, 0));
    // 0x196adc: 0xae201b20  sw          $zero, 0x1B20($s1)
    ctx->pc = 0x196adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6944), GPR_U32(ctx, 0));
    // 0x196ae0: 0xae201b24  sw          $zero, 0x1B24($s1)
    ctx->pc = 0x196ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6948), GPR_U32(ctx, 0));
    // 0x196ae4: 0xae201b28  sw          $zero, 0x1B28($s1)
    ctx->pc = 0x196ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6952), GPR_U32(ctx, 0));
    // 0x196ae8: 0xae201b30  sw          $zero, 0x1B30($s1)
    ctx->pc = 0x196ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6960), GPR_U32(ctx, 0));
    // 0x196aec: 0xae201b34  sw          $zero, 0x1B34($s1)
    ctx->pc = 0x196aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6964), GPR_U32(ctx, 0));
    // 0x196af0: 0xae201b3c  sw          $zero, 0x1B3C($s1)
    ctx->pc = 0x196af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6972), GPR_U32(ctx, 0));
    // 0x196af4: 0xae201b38  sw          $zero, 0x1B38($s1)
    ctx->pc = 0x196af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6968), GPR_U32(ctx, 0));
    // 0x196af8: 0xae201b40  sw          $zero, 0x1B40($s1)
    ctx->pc = 0x196af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6976), GPR_U32(ctx, 0));
label_196afc:
    // 0x196afc: 0x2253821  addu        $a3, $s1, $a1
    ctx->pc = 0x196afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x196b00: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x196b04: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x196b04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x196b08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x196b0c: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x196b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x196b10: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x196b14: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x196b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x196b18: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x196b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x196b1c: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x196b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x196b20: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x196b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x196b24: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x196b24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x196b28: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x196b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x196b2c: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x196b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x196b30: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x196b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x196b34: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x196b34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x196b38: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x196b38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x196b3c: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x196b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x196b40: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x196b40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x196b44: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x196b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x196b48: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x196b48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x196b4c: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x196b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x196b50: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x196b50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x196b54: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x196b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x196b58: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x196b58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x196b5c: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x196b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x196b60: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x196b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x196b64: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x196B64u;
    {
        const bool branch_taken_0x196b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B64u;
            // 0x196b68: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b64) {
            ctx->pc = 0x196AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196afc;
        }
    }
    ctx->pc = 0x196B6Cu;
    // 0x196b6c: 0xc0659e0  jal         func_196780
    ctx->pc = 0x196B6Cu;
    SET_GPR_U32(ctx, 31, 0x196B74u);
    ctx->pc = 0x196B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B6Cu;
            // 0x196b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B74u; }
        if (ctx->pc != 0x196B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B74u; }
        if (ctx->pc != 0x196B74u) { return; }
    }
    ctx->pc = 0x196B74u;
label_196b74:
    // 0x196b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b78: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x196B78u;
    SET_GPR_U32(ctx, 31, 0x196B80u);
    ctx->pc = 0x196B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B78u;
            // 0x196b7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B80u; }
        if (ctx->pc != 0x196B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B80u; }
        if (ctx->pc != 0x196B80u) { return; }
    }
    ctx->pc = 0x196B80u;
label_196b80:
    // 0x196b80: 0xc0659e0  jal         func_196780
    ctx->pc = 0x196B80u;
    SET_GPR_U32(ctx, 31, 0x196B88u);
    ctx->pc = 0x196B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B80u;
            // 0x196b84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B88u; }
        if (ctx->pc != 0x196B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B88u; }
        if (ctx->pc != 0x196B88u) { return; }
    }
    ctx->pc = 0x196B88u;
label_196b88:
    // 0x196b88: 0xc065a1c  jal         func_196870
    ctx->pc = 0x196B88u;
    SET_GPR_U32(ctx, 31, 0x196B90u);
    ctx->pc = 0x196B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B88u;
            // 0x196b8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196870u;
    if (runtime->hasFunction(0x196870u)) {
        auto targetFn = runtime->lookupFunction(0x196870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B90u; }
        if (ctx->pc != 0x196B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSysMesBuffer__Fv_0x196870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B90u; }
        if (ctx->pc != 0x196B90u) { return; }
    }
    ctx->pc = 0x196B90u;
label_196b90:
    // 0x196b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b94: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x196B94u;
    SET_GPR_U32(ctx, 31, 0x196B9Cu);
    ctx->pc = 0x196B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B94u;
            // 0x196b98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B9Cu; }
        if (ctx->pc != 0x196B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B9Cu; }
        if (ctx->pc != 0x196B9Cu) { return; }
    }
    ctx->pc = 0x196B9Cu;
label_196b9c:
    // 0x196b9c: 0xc0659e0  jal         func_196780
    ctx->pc = 0x196B9Cu;
    SET_GPR_U32(ctx, 31, 0x196BA4u);
    ctx->pc = 0x196BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B9Cu;
            // 0x196ba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BA4u; }
        if (ctx->pc != 0x196BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BA4u; }
        if (ctx->pc != 0x196BA4u) { return; }
    }
    ctx->pc = 0x196BA4u;
label_196ba4:
    // 0x196ba4: 0xc065a18  jal         func_196860
    ctx->pc = 0x196BA4u;
    SET_GPR_U32(ctx, 31, 0x196BACu);
    ctx->pc = 0x196BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BA4u;
            // 0x196ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BACu; }
        if (ctx->pc != 0x196BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BACu; }
        if (ctx->pc != 0x196BACu) { return; }
    }
    ctx->pc = 0x196BACu;
label_196bac:
    // 0x196bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bb0: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x196BB0u;
    SET_GPR_U32(ctx, 31, 0x196BB8u);
    ctx->pc = 0x196BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BB0u;
            // 0x196bb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BB8u; }
        if (ctx->pc != 0x196BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BB8u; }
        if (ctx->pc != 0x196BB8u) { return; }
    }
    ctx->pc = 0x196BB8u;
label_196bb8:
    // 0x196bb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196bbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196bc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x196BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196BCCu;
            // 0x196bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196BD4u;
}
