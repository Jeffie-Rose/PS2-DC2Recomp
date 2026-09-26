#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWindowMode__6ClsMesFi
// Address: 0x153370 - 0x1535c0
void SetWindowMode__6ClsMesFi_0x153370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWindowMode__6ClsMesFi_0x153370");
#endif

    switch (ctx->pc) {
        case 0x1533d4u: goto label_1533d4;
        case 0x153400u: goto label_153400;
        case 0x153428u: goto label_153428;
        case 0x153450u: goto label_153450;
        case 0x153478u: goto label_153478;
        case 0x1534a0u: goto label_1534a0;
        case 0x1534c8u: goto label_1534c8;
        case 0x1534f0u: goto label_1534f0;
        case 0x15351cu: goto label_15351c;
        case 0x153548u: goto label_153548;
        case 0x153574u: goto label_153574;
        case 0x15359cu: goto label_15359c;
        default: break;
    }

    ctx->pc = 0x153370u;

    // 0x153370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15337c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153380: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x153380u;
    {
        const bool branch_taken_0x153380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x153384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153380u;
            // 0x153384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153380) {
            ctx->pc = 0x15338Cu;
            goto label_15338c;
        }
    }
    ctx->pc = 0x153388u;
    // 0x153388: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15338c:
    // 0x15338c: 0x2ca1000d  sltiu       $at, $a1, 0xD
    ctx->pc = 0x15338cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x153390: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x153390u;
    {
        const bool branch_taken_0x153390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153390u;
            // 0x153394: 0xae050130  sw          $a1, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153390) {
            ctx->pc = 0x153588u;
            goto label_153588;
        }
    }
    ctx->pc = 0x153398u;
    // 0x153398: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x153398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x15339c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15339cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1533a0: 0x24632920  addiu       $v1, $v1, 0x2920
    ctx->pc = 0x1533a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10528));
    // 0x1533a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1533a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1533a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1533a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1533ac: 0x400008  jr          $v0
    ctx->pc = 0x1533ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1533B4u: goto label_1533b4;
            case 0x1533F0u: goto label_1533f0;
            case 0x153418u: goto label_153418;
            case 0x153440u: goto label_153440;
            case 0x153468u: goto label_153468;
            case 0x153490u: goto label_153490;
            case 0x1534B8u: goto label_1534b8;
            case 0x1534E0u: goto label_1534e0;
            case 0x15350Cu: goto label_15350c;
            case 0x153538u: goto label_153538;
            case 0x153560u: goto label_153560;
            case 0x153588u: goto label_153588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1533B4u;
label_1533b4:
    // 0x1533b4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1533b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1533b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1533bc: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1533bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x1533c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1533c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533c4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1533c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1533c8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1533c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1533cc: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1533CCu;
    SET_GPR_U32(ctx, 31, 0x1533D4u);
    ctx->pc = 0x1533D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1533CCu;
            // 0x1533d0: 0x34452020  ori         $a1, $v0, 0x2020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533D4u; }
        if (ctx->pc != 0x1533D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533D4u; }
        if (ctx->pc != 0x1533D4u) { return; }
    }
    ctx->pc = 0x1533D4u;
label_1533d4:
    // 0x1533d4: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x1533d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x1533d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1533d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1533dc: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1533dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1533e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1533e4: 0xae0417f4  sw          $a0, 0x17F4($s0)
    ctx->pc = 0x1533e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 4));
    // 0x1533e8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1533E8u;
    {
        const bool branch_taken_0x1533e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1533E8u;
            // 0x1533ec: 0xae031af8  sw          $v1, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533e8) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x1533F0u;
label_1533f0:
    // 0x1533f0: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x1533f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1533f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533f8: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1533F8u;
    SET_GPR_U32(ctx, 31, 0x153400u);
    ctx->pc = 0x1533FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1533F8u;
            // 0x1533fc: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153400u; }
        if (ctx->pc != 0x153400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153400u; }
        if (ctx->pc != 0x153400u) { return; }
    }
    ctx->pc = 0x153400u;
label_153400:
    // 0x153400: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x153400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x153404: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153408: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x153408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x15340c: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x15340cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x153410: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x153410u;
    {
        const bool branch_taken_0x153410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153410u;
            // 0x153414: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153410) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153418u;
label_153418:
    // 0x153418: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x15341c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153420: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153420u;
    SET_GPR_U32(ctx, 31, 0x153428u);
    ctx->pc = 0x153424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153420u;
            // 0x153424: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153428u; }
        if (ctx->pc != 0x153428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153428u; }
        if (ctx->pc != 0x153428u) { return; }
    }
    ctx->pc = 0x153428u;
label_153428:
    // 0x153428: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x153428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x15342c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x15342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153430: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x153430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x153434: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x153434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x153438: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x153438u;
    {
        const bool branch_taken_0x153438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153438u;
            // 0x15343c: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153438) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153440u;
label_153440:
    // 0x153440: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x153440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x153444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153448: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153448u;
    SET_GPR_U32(ctx, 31, 0x153450u);
    ctx->pc = 0x15344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153448u;
            // 0x15344c: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153450u; }
        if (ctx->pc != 0x153450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153450u; }
        if (ctx->pc != 0x153450u) { return; }
    }
    ctx->pc = 0x153450u;
label_153450:
    // 0x153450: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x153450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x153454: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153458: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x153458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x15345c: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x15345cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x153460: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x153460u;
    {
        const bool branch_taken_0x153460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153460u;
            // 0x153464: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153460) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153468u;
label_153468:
    // 0x153468: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x15346c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153470: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153470u;
    SET_GPR_U32(ctx, 31, 0x153478u);
    ctx->pc = 0x153474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153470u;
            // 0x153474: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153478u; }
        if (ctx->pc != 0x153478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153478u; }
        if (ctx->pc != 0x153478u) { return; }
    }
    ctx->pc = 0x153478u;
label_153478:
    // 0x153478: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x153478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x15347c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153480: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x153480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x153484: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x153484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x153488: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x153488u;
    {
        const bool branch_taken_0x153488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153488u;
            // 0x15348c: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153488) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153490u;
label_153490:
    // 0x153490: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x153494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153498: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153498u;
    SET_GPR_U32(ctx, 31, 0x1534A0u);
    ctx->pc = 0x15349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153498u;
            // 0x15349c: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534A0u; }
        if (ctx->pc != 0x1534A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534A0u; }
        if (ctx->pc != 0x1534A0u) { return; }
    }
    ctx->pc = 0x1534A0u;
label_1534a0:
    // 0x1534a0: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x1534a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x1534a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1534a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1534a8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1534a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1534ac: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x1534acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x1534b0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1534B0u;
    {
        const bool branch_taken_0x1534b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1534B0u;
            // 0x1534b4: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534b0) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x1534B8u;
label_1534b8:
    // 0x1534b8: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x1534b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x1534bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1534bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534c0: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1534C0u;
    SET_GPR_U32(ctx, 31, 0x1534C8u);
    ctx->pc = 0x1534C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1534C0u;
            // 0x1534c4: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534C8u; }
        if (ctx->pc != 0x1534C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534C8u; }
        if (ctx->pc != 0x1534C8u) { return; }
    }
    ctx->pc = 0x1534C8u;
label_1534c8:
    // 0x1534c8: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x1534c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x1534cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1534d0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1534d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1534d4: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x1534d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x1534d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1534D8u;
    {
        const bool branch_taken_0x1534d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1534D8u;
            // 0x1534dc: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534d8) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x1534E0u;
label_1534e0:
    // 0x1534e0: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x1534e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x1534e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1534e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534e8: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1534E8u;
    SET_GPR_U32(ctx, 31, 0x1534F0u);
    ctx->pc = 0x1534ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1534E8u;
            // 0x1534ec: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534F0u; }
        if (ctx->pc != 0x1534F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534F0u; }
        if (ctx->pc != 0x1534F0u) { return; }
    }
    ctx->pc = 0x1534F0u;
label_1534f0:
    // 0x1534f0: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x1534f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x1534f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1534f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1534f8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1534f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1534fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153500: 0xae0317f4  sw          $v1, 0x17F4($s0)
    ctx->pc = 0x153500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 3));
    // 0x153504: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x153504u;
    {
        const bool branch_taken_0x153504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153504u;
            // 0x153508: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153504) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x15350Cu;
label_15350c:
    // 0x15350c: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x15350cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x153510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153514: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153514u;
    SET_GPR_U32(ctx, 31, 0x15351Cu);
    ctx->pc = 0x153518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153514u;
            // 0x153518: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15351Cu; }
        if (ctx->pc != 0x15351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15351Cu; }
        if (ctx->pc != 0x15351Cu) { return; }
    }
    ctx->pc = 0x15351Cu;
label_15351c:
    // 0x15351c: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x15351cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x153520: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153524: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x153524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x153528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15352c: 0xae0317f4  sw          $v1, 0x17F4($s0)
    ctx->pc = 0x15352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 3));
    // 0x153530: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x153530u;
    {
        const bool branch_taken_0x153530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153530u;
            // 0x153534: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153530) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153538u;
label_153538:
    // 0x153538: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x15353c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153540: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153540u;
    SET_GPR_U32(ctx, 31, 0x153548u);
    ctx->pc = 0x153544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153540u;
            // 0x153544: 0x34452020  ori         $a1, $v0, 0x2020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153548u; }
        if (ctx->pc != 0x153548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153548u; }
        if (ctx->pc != 0x153548u) { return; }
    }
    ctx->pc = 0x153548u;
label_153548:
    // 0x153548: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x153548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x15354c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153550: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x153550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x153554: 0xae0317f4  sw          $v1, 0x17F4($s0)
    ctx->pc = 0x153554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 3));
    // 0x153558: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x153558u;
    {
        const bool branch_taken_0x153558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153558u;
            // 0x15355c: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153558) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153560u;
label_153560:
    // 0x153560: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x153560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x153564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153568: 0x34452020  ori         $a1, $v0, 0x2020
    ctx->pc = 0x153568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x15356c: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x15356Cu;
    SET_GPR_U32(ctx, 31, 0x153574u);
    ctx->pc = 0x153570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15356Cu;
            // 0x153570: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153574u; }
        if (ctx->pc != 0x153574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153574u; }
        if (ctx->pc != 0x153574u) { return; }
    }
    ctx->pc = 0x153574u;
label_153574:
    // 0x153574: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x153574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x153578: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x153578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x15357c: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x15357cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x153580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x153580u;
    {
        const bool branch_taken_0x153580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153580u;
            // 0x153584: 0xae001af8  sw          $zero, 0x1AF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153580) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x153588u;
label_153588:
    // 0x153588: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x153588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x15358c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153590: 0x34456a6b  ori         $a1, $v0, 0x6A6B
    ctx->pc = 0x153590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
    // 0x153594: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153594u;
    SET_GPR_U32(ctx, 31, 0x15359Cu);
    ctx->pc = 0x153598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153594u;
            // 0x153598: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15359Cu; }
        if (ctx->pc != 0x15359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15359Cu; }
        if (ctx->pc != 0x15359Cu) { return; }
    }
    ctx->pc = 0x15359Cu;
label_15359c:
    // 0x15359c: 0xae001b18  sw          $zero, 0x1B18($s0)
    ctx->pc = 0x15359cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6936), GPR_U32(ctx, 0));
    // 0x1535a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1535a4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1535a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1535a8: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x1535a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x1535ac: 0xae001af8  sw          $zero, 0x1AF8($s0)
    ctx->pc = 0x1535acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6904), GPR_U32(ctx, 0));
label_1535b0:
    // 0x1535b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1535b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1535b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1535b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1535B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535B8u;
            // 0x1535bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1535C0u;
}
