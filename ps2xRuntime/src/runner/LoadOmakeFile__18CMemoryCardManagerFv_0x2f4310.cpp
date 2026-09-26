#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadOmakeFile__18CMemoryCardManagerFv
// Address: 0x2f4310 - 0x2f45d0
void LoadOmakeFile__18CMemoryCardManagerFv_0x2f4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadOmakeFile__18CMemoryCardManagerFv_0x2f4310");
#endif

    switch (ctx->pc) {
        case 0x2f4384u: goto label_2f4384;
        case 0x2f4394u: goto label_2f4394;
        case 0x2f43acu: goto label_2f43ac;
        case 0x2f43b4u: goto label_2f43b4;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4448u: goto label_2f4448;
        case 0x2f4464u: goto label_2f4464;
        case 0x2f4480u: goto label_2f4480;
        case 0x2f44b0u: goto label_2f44b0;
        case 0x2f44ccu: goto label_2f44cc;
        case 0x2f4514u: goto label_2f4514;
        case 0x2f454cu: goto label_2f454c;
        case 0x2f4560u: goto label_2f4560;
        case 0x2f457cu: goto label_2f457c;
        default: break;
    }

    ctx->pc = 0x2f4310u;

    // 0x2f4310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f4314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f4318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f431c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4320: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2f4320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f4324: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4324u;
    {
        const bool branch_taken_0x2f4324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4324u;
            // 0x2f4328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4324) {
            ctx->pc = 0x2F4338u;
            goto label_2f4338;
        }
    }
    ctx->pc = 0x2F432Cu;
    // 0x2f432c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4330: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4330u;
    {
        const bool branch_taken_0x2f4330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4330u;
            // 0x2f4334: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4330) {
            ctx->pc = 0x2F4344u;
            goto label_2f4344;
        }
    }
    ctx->pc = 0x2F4338u;
label_2f4338:
    // 0x2f4338: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f4338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f433c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f4340: 0x24510d5c  addiu       $s1, $v0, 0xD5C
    ctx->pc = 0x2f4340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f4344:
    // 0x2f4344: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2f4344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f4348: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f4348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f434c: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2F434Cu;
    {
        const bool branch_taken_0x2f434c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F434Cu;
            // 0x2f4350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f434c) {
            ctx->pc = 0x2F4554u;
            goto label_2f4554;
        }
    }
    ctx->pc = 0x2F4354u;
    // 0x2f4354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4358: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F4358u;
    {
        const bool branch_taken_0x2f4358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4358u;
            // 0x2f435c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4358) {
            ctx->pc = 0x2F44A4u;
            goto label_2f44a4;
        }
    }
    ctx->pc = 0x2F4360u;
    // 0x2f4360: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4364: 0x10640034  beq         $v1, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F4364u;
    {
        const bool branch_taken_0x2f4364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f4364) {
            ctx->pc = 0x2F4438u;
            goto label_2f4438;
        }
    }
    ctx->pc = 0x2F436Cu;
    // 0x2f436c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F436Cu;
    {
        const bool branch_taken_0x2f436c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F436Cu;
            // 0x2f4370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f436c) {
            ctx->pc = 0x2F437Cu;
            goto label_2f437c;
        }
    }
    ctx->pc = 0x2F4374u;
    // 0x2f4374: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2F4374u;
    {
        const bool branch_taken_0x2f4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4374u;
            // 0x2f4378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4374) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F437Cu;
label_2f437c:
    // 0x2f437c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F437Cu;
    SET_GPR_U32(ctx, 31, 0x2F4384u);
    ctx->pc = 0x2F4380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F437Cu;
            // 0x2f4380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4384u; }
        if (ctx->pc != 0x2F4384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4384u; }
        if (ctx->pc != 0x2F4384u) { return; }
    }
    ctx->pc = 0x2F4384u;
label_2f4384:
    // 0x2f4384: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2F4384u;
    {
        const bool branch_taken_0x2f4384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4384u;
            // 0x2f4388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4384) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F438Cu;
    // 0x2f438c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2F438Cu;
    SET_GPR_U32(ctx, 31, 0x2F4394u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4394u; }
        if (ctx->pc != 0x2F4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4394u; }
        if (ctx->pc != 0x2F4394u) { return; }
    }
    ctx->pc = 0x2F4394u;
label_2f4394:
    // 0x2f4394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4394u;
    {
        const bool branch_taken_0x2f4394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4394u;
            // 0x2f4398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4394) {
            ctx->pc = 0x2F43A4u;
            goto label_2f43a4;
        }
    }
    ctx->pc = 0x2F439Cu;
    // 0x2f439c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2F439Cu;
    {
        const bool branch_taken_0x2f439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F439Cu;
            // 0x2f43a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f439c) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F43A4u;
label_2f43a4:
    // 0x2f43a4: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F43A4u;
    SET_GPR_U32(ctx, 31, 0x2F43ACu);
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43ACu; }
        if (ctx->pc != 0x2F43ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43ACu; }
        if (ctx->pc != 0x2F43ACu) { return; }
    }
    ctx->pc = 0x2F43ACu;
label_2f43ac:
    // 0x2f43ac: 0xc064224  jal         func_190890
    ctx->pc = 0x2F43ACu;
    SET_GPR_U32(ctx, 31, 0x2F43B4u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43B4u; }
        if (ctx->pc != 0x2F43B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43B4u; }
        if (ctx->pc != 0x2F43B4u) { return; }
    }
    ctx->pc = 0x2F43B4u;
label_2f43b4:
    // 0x2f43b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f43b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f43b8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F43B8u;
    {
        const bool branch_taken_0x2f43b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F43BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F43B8u;
            // 0x2f43bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43b8) {
            ctx->pc = 0x2F43C8u;
            goto label_2f43c8;
        }
    }
    ctx->pc = 0x2F43C0u;
    // 0x2f43c0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2F43C0u;
    {
        const bool branch_taken_0x2f43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F43C0u;
            // 0x2f43c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43c0) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F43C8u;
label_2f43c8:
    // 0x2f43c8: 0xc0bdc60  jal         func_2F7180
    ctx->pc = 0x2F43C8u;
    SET_GPR_U32(ctx, 31, 0x2F43D0u);
    ctx->pc = 0x2F7180u;
    if (runtime->hasFunction(0x2F7180u)) {
        auto targetFn = runtime->lookupFunction(0x2F7180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43D0u; }
        if (ctx->pc != 0x2F43D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSubGameDataFv_0x2f7180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43D0u; }
        if (ctx->pc != 0x2F43D0u) { return; }
    }
    ctx->pc = 0x2F43D0u;
label_2f43d0:
    // 0x2f43d0: 0x24025470  addiu       $v0, $zero, 0x5470
    ctx->pc = 0x2f43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21616));
    // 0x2f43d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f43d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f43d8: 0xae020918  sw          $v0, 0x918($s0)
    ctx->pc = 0x2f43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 2));
    // 0x2f43dc: 0x8e060918  lw          $a2, 0x918($s0)
    ctx->pc = 0x2f43dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x2f43e0: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F43E0u;
    SET_GPR_U32(ctx, 31, 0x2F43E8u);
    ctx->pc = 0x2F43E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F43E0u;
            // 0x2f43e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43E8u; }
        if (ctx->pc != 0x2F43E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43E8u; }
        if (ctx->pc != 0x2F43E8u) { return; }
    }
    ctx->pc = 0x2F43E8u;
label_2f43e8:
    // 0x2f43e8: 0xae00091c  sw          $zero, 0x91C($s0)
    ctx->pc = 0x2f43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2332), GPR_U32(ctx, 0));
    // 0x2f43ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f43ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f43f0: 0xae000910  sw          $zero, 0x910($s0)
    ctx->pc = 0x2f43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2320), GPR_U32(ctx, 0));
    // 0x2f43f4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2f43f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2f43f8: 0xae000914  sw          $zero, 0x914($s0)
    ctx->pc = 0x2f43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x2f43fc: 0x24c61950  addiu       $a2, $a2, 0x1950
    ctx->pc = 0x2f43fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6480));
    // 0x2f4400: 0xae1104e8  sw          $s1, 0x4E8($s0)
    ctx->pc = 0x2f4400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1256), GPR_U32(ctx, 17));
    // 0x2f4404: 0x8e0404c8  lw          $a0, 0x4C8($s0)
    ctx->pc = 0x2f4404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
    // 0x2f4408: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F4408u;
    SET_GPR_U32(ctx, 31, 0x2F4410u);
    ctx->pc = 0x2F440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4408u;
            // 0x2f440c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4410u; }
        if (ctx->pc != 0x2F4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4410u; }
        if (ctx->pc != 0x2F4410u) { return; }
    }
    ctx->pc = 0x2F4410u;
label_2f4410:
    // 0x2f4410: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2f4410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f4414: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4418: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2F4418u;
    {
        const bool branch_taken_0x2f4418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F441Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4418u;
            // 0x2f441c: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4418) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F4420u;
    // 0x2f4420: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x2f4420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x2f4424: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2F4424u;
    {
        const bool branch_taken_0x2f4424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F4428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4424u;
            // 0x2f4428: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4424) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F442Cu;
    // 0x2f442c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4430: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2F4430u;
    {
        const bool branch_taken_0x2f4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4430u;
            // 0x2f4434: 0xae0304d0  sw          $v1, 0x4D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4430) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F4438u;
label_2f4438:
    // 0x2f4438: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f443c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2f443cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2f4440: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4440u;
    SET_GPR_U32(ctx, 31, 0x2F4448u);
    ctx->pc = 0x2F4444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4440u;
            // 0x2f4444: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4448u; }
        if (ctx->pc != 0x2F4448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4448u; }
        if (ctx->pc != 0x2F4448u) { return; }
    }
    ctx->pc = 0x2F4448u;
label_2f4448:
    // 0x2f4448: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F4448u;
    {
        const bool branch_taken_0x2f4448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4448) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F4450u;
    // 0x2f4450: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2f4450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f4454: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4454u;
    {
        const bool branch_taken_0x2f4454 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4454u;
            // 0x2f4458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4454) {
            ctx->pc = 0x2F446Cu;
            goto label_2f446c;
        }
    }
    ctx->pc = 0x2F445Cu;
    // 0x2f445c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F445Cu;
    SET_GPR_U32(ctx, 31, 0x2F4464u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4464u; }
        if (ctx->pc != 0x2F4464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4464u; }
        if (ctx->pc != 0x2F4464u) { return; }
    }
    ctx->pc = 0x2F4464u;
label_2f4464:
    // 0x2f4464: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2F4464u;
    {
        const bool branch_taken_0x2f4464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4464u;
            // 0x2f4468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4464) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F446Cu;
label_2f446c:
    // 0x2f446c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x2f446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x2f4470: 0x8e0504e8  lw          $a1, 0x4E8($s0)
    ctx->pc = 0x2f4470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x2f4474: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f4478: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F4478u;
    SET_GPR_U32(ctx, 31, 0x2F4480u);
    ctx->pc = 0x2F447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4478u;
            // 0x2f447c: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4480u; }
        if (ctx->pc != 0x2F4480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4480u; }
        if (ctx->pc != 0x2F4480u) { return; }
    }
    ctx->pc = 0x2F4480u;
label_2f4480:
    // 0x2f4480: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4480u;
    {
        const bool branch_taken_0x2f4480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4480u;
            // 0x2f4484: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4480) {
            ctx->pc = 0x2F4498u;
            goto label_2f4498;
        }
    }
    ctx->pc = 0x2F4488u;
    // 0x2f4488: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f4488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f448c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4490: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F4490u;
    {
        const bool branch_taken_0x2f4490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4490u;
            // 0x2f4494: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4490) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F4498u;
label_2f4498:
    // 0x2f4498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f449c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2F449Cu;
    {
        const bool branch_taken_0x2f449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F449Cu;
            // 0x2f44a0: 0xae0304d0  sw          $v1, 0x4D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f449c) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F44A4u;
label_2f44a4:
    // 0x2f44a4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2f44a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2f44a8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F44A8u;
    SET_GPR_U32(ctx, 31, 0x2F44B0u);
    ctx->pc = 0x2F44ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44A8u;
            // 0x2f44ac: 0x2606091c  addiu       $a2, $s0, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44B0u; }
        if (ctx->pc != 0x2F44B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44B0u; }
        if (ctx->pc != 0x2F44B0u) { return; }
    }
    ctx->pc = 0x2F44B0u;
label_2f44b0:
    // 0x2f44b0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F44B0u;
    {
        const bool branch_taken_0x2f44b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f44b0) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F44B8u;
    // 0x2f44b8: 0x8e05091c  lw          $a1, 0x91C($s0)
    ctx->pc = 0x2f44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2332)));
    // 0x2f44bc: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F44BCu;
    {
        const bool branch_taken_0x2f44bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F44C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44BCu;
            // 0x2f44c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44bc) {
            ctx->pc = 0x2F44DCu;
            goto label_2f44dc;
        }
    }
    ctx->pc = 0x2F44C4u;
    // 0x2f44c4: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F44C4u;
    SET_GPR_U32(ctx, 31, 0x2F44CCu);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44CCu; }
        if (ctx->pc != 0x2F44CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44CCu; }
        if (ctx->pc != 0x2F44CCu) { return; }
    }
    ctx->pc = 0x2F44CCu;
label_2f44cc:
    // 0x2f44cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f44d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f44d4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F44D4u;
    {
        const bool branch_taken_0x2f44d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44D4u;
            // 0x2f44d8: 0xae0304d0  sw          $v1, 0x4D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44d4) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F44DCu;
label_2f44dc:
    // 0x2f44dc: 0x8e020910  lw          $v0, 0x910($s0)
    ctx->pc = 0x2f44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
    // 0x2f44e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f44e4: 0xae020910  sw          $v0, 0x910($s0)
    ctx->pc = 0x2f44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2320), GPR_U32(ctx, 2));
    // 0x2f44e8: 0x8e030914  lw          $v1, 0x914($s0)
    ctx->pc = 0x2f44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2324)));
    // 0x2f44ec: 0x8e02091c  lw          $v0, 0x91C($s0)
    ctx->pc = 0x2f44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2332)));
    // 0x2f44f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f44f4: 0xae020914  sw          $v0, 0x914($s0)
    ctx->pc = 0x2f44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 2));
    // 0x2f44f8: 0x8e030910  lw          $v1, 0x910($s0)
    ctx->pc = 0x2f44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
    // 0x2f44fc: 0x8e020918  lw          $v0, 0x918($s0)
    ctx->pc = 0x2f44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x2f4500: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f4500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4504: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F4504u;
    {
        const bool branch_taken_0x2f4504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4504) {
            ctx->pc = 0x2F4538u;
            goto label_2f4538;
        }
    }
    ctx->pc = 0x2F450Cu;
    // 0x2f450c: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F450Cu;
    SET_GPR_U32(ctx, 31, 0x2F4514u);
    ctx->pc = 0x2F4510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F450Cu;
            // 0x2f4510: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4514u; }
        if (ctx->pc != 0x2F4514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4514u; }
        if (ctx->pc != 0x2F4514u) { return; }
    }
    ctx->pc = 0x2F4514u;
label_2f4514:
    // 0x2f4514: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4514u;
    {
        const bool branch_taken_0x2f4514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4514u;
            // 0x2f4518: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4514) {
            ctx->pc = 0x2F452Cu;
            goto label_2f452c;
        }
    }
    ctx->pc = 0x2F451Cu;
    // 0x2f451c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f4520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4524: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F4524u;
    {
        const bool branch_taken_0x2f4524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4524u;
            // 0x2f4528: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4524) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F452Cu;
label_2f452c:
    // 0x2f452c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4530: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F4530u;
    {
        const bool branch_taken_0x2f4530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4530u;
            // 0x2f4534: 0xae0304d0  sw          $v1, 0x4D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4530) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F4538u;
label_2f4538:
    // 0x2f4538: 0x8e0204e8  lw          $v0, 0x4E8($s0)
    ctx->pc = 0x2f4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x2f453c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2f453cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2f4540: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f4540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f4544: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F4544u;
    SET_GPR_U32(ctx, 31, 0x2F454Cu);
    ctx->pc = 0x2F4548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4544u;
            // 0x2f4548: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F454Cu; }
        if (ctx->pc != 0x2F454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F454Cu; }
        if (ctx->pc != 0x2F454Cu) { return; }
    }
    ctx->pc = 0x2F454Cu;
label_2f454c:
    // 0x2f454c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F454Cu;
    {
        const bool branch_taken_0x2f454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f454c) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F4554u;
label_2f4554:
    // 0x2f4554: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2f4554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2f4558: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4558u;
    SET_GPR_U32(ctx, 31, 0x2F4560u);
    ctx->pc = 0x2F455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4558u;
            // 0x2f455c: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4560u; }
        if (ctx->pc != 0x2F4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4560u; }
        if (ctx->pc != 0x2F4560u) { return; }
    }
    ctx->pc = 0x2F4560u;
label_2f4560:
    // 0x2f4560: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F4560u;
    {
        const bool branch_taken_0x2f4560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4560) {
            ctx->pc = 0x2F45B8u;
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F4568u;
    // 0x2f4568: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2f4568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f456c: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F456Cu;
    {
        const bool branch_taken_0x2f456c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F456Cu;
            // 0x2f4570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f456c) {
            ctx->pc = 0x2F4584u;
            goto label_2f4584;
        }
    }
    ctx->pc = 0x2F4574u;
    // 0x2f4574: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4574u;
    SET_GPR_U32(ctx, 31, 0x2F457Cu);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F457Cu; }
        if (ctx->pc != 0x2F457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F457Cu; }
        if (ctx->pc != 0x2F457Cu) { return; }
    }
    ctx->pc = 0x2F457Cu;
label_2f457c:
    // 0x2f457c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F457Cu;
    {
        const bool branch_taken_0x2f457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F457Cu;
            // 0x2f4580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f457c) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F4584u;
label_2f4584:
    // 0x2f4584: 0x8e030910  lw          $v1, 0x910($s0)
    ctx->pc = 0x2f4584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
    // 0x2f4588: 0x8e020918  lw          $v0, 0x918($s0)
    ctx->pc = 0x2f4588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x2f458c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F458Cu;
    {
        const bool branch_taken_0x2f458c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F458Cu;
            // 0x2f4590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f458c) {
            ctx->pc = 0x2F4598u;
            goto label_2f4598;
        }
    }
    ctx->pc = 0x2F4594u;
    // 0x2f4594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4598:
    // 0x2f4598: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4598u;
    {
        const bool branch_taken_0x2f4598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4598u;
            // 0x2f459c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4598) {
            ctx->pc = 0x2F45B0u;
            goto label_2f45b0;
        }
    }
    ctx->pc = 0x2F45A0u;
    // 0x2f45a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f45a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f45a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F45A8u;
    {
        const bool branch_taken_0x2f45a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F45A8u;
            // 0x2f45ac: 0xae0304d0  sw          $v1, 0x4D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45a8) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F45B0u;
label_2f45b0:
    // 0x2f45b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F45B0u;
    {
        const bool branch_taken_0x2f45b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F45B0u;
            // 0x2f45b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45b0) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F45B8u;
label_2f45b8:
    // 0x2f45b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f45b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f45bc:
    // 0x2f45bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f45bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f45c0:
    // 0x2f45c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f45c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f45c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f45c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f45c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F45C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F45CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F45C8u;
            // 0x2f45cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F45D0u;
}
