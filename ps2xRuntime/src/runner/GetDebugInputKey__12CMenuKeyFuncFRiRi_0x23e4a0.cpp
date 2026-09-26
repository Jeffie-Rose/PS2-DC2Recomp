#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDebugInputKey__12CMenuKeyFuncFRiRi
// Address: 0x23e4a0 - 0x23e6a4
void GetDebugInputKey__12CMenuKeyFuncFRiRi_0x23e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDebugInputKey__12CMenuKeyFuncFRiRi_0x23e4a0");
#endif

    switch (ctx->pc) {
        case 0x23e4d0u: goto label_23e4d0;
        case 0x23e4f0u: goto label_23e4f0;
        case 0x23e510u: goto label_23e510;
        case 0x23e530u: goto label_23e530;
        case 0x23e550u: goto label_23e550;
        case 0x23e574u: goto label_23e574;
        case 0x23e598u: goto label_23e598;
        case 0x23e5bcu: goto label_23e5bc;
        case 0x23e5e0u: goto label_23e5e0;
        case 0x23e600u: goto label_23e600;
        case 0x23e620u: goto label_23e620;
        case 0x23e640u: goto label_23e640;
        case 0x23e660u: goto label_23e660;
        case 0x23e680u: goto label_23e680;
        default: break;
    }

    ctx->pc = 0x23e4a0u;

    // 0x23e4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e4a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e4a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e4ac: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x23e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x23e4b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e4b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e4b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23e4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x23e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x23e4c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23e4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4c4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x23e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x23e4c8: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E4C8u;
    SET_GPR_U32(ctx, 31, 0x23E4D0u);
    ctx->pc = 0x23E4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4C8u;
            // 0x23e4cc: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4D0u; }
        if (ctx->pc != 0x23E4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4D0u; }
        if (ctx->pc != 0x23E4D0u) { return; }
    }
    ctx->pc = 0x23E4D0u;
label_23e4d0:
    // 0x23e4d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E4D0u;
    {
        const bool branch_taken_0x23e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4D0u;
            // 0x23e4d4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4d0) {
            ctx->pc = 0x23E4E4u;
            goto label_23e4e4;
        }
    }
    ctx->pc = 0x23E4D8u;
    // 0x23e4d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e4dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23e4e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23e4e4:
    // 0x23e4e4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23e4e8: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E4E8u;
    SET_GPR_U32(ctx, 31, 0x23E4F0u);
    ctx->pc = 0x23E4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4E8u;
            // 0x23e4ec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4F0u; }
        if (ctx->pc != 0x23E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4F0u; }
        if (ctx->pc != 0x23E4F0u) { return; }
    }
    ctx->pc = 0x23E4F0u;
label_23e4f0:
    // 0x23e4f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E4F0u;
    {
        const bool branch_taken_0x23e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4F0u;
            // 0x23e4f4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4f0) {
            ctx->pc = 0x23E504u;
            goto label_23e504;
        }
    }
    ctx->pc = 0x23E4F8u;
    // 0x23e4f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e4fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23e4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23e500: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23e500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23e504:
    // 0x23e504: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23e504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23e508: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E508u;
    SET_GPR_U32(ctx, 31, 0x23E510u);
    ctx->pc = 0x23E50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E508u;
            // 0x23e50c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E510u; }
        if (ctx->pc != 0x23E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E510u; }
        if (ctx->pc != 0x23E510u) { return; }
    }
    ctx->pc = 0x23E510u;
label_23e510:
    // 0x23e510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E510u;
    {
        const bool branch_taken_0x23e510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E510u;
            // 0x23e514: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e510) {
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E518u;
    // 0x23e518: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e51c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x23e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x23e520: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23e520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23e524:
    // 0x23e524: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x23e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x23e528: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E528u;
    SET_GPR_U32(ctx, 31, 0x23E530u);
    ctx->pc = 0x23E52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E528u;
            // 0x23e52c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E530u; }
        if (ctx->pc != 0x23E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E530u; }
        if (ctx->pc != 0x23E530u) { return; }
    }
    ctx->pc = 0x23E530u;
label_23e530:
    // 0x23e530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E530u;
    {
        const bool branch_taken_0x23e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E530u;
            // 0x23e534: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e530) {
            ctx->pc = 0x23E544u;
            goto label_23e544;
        }
    }
    ctx->pc = 0x23E538u;
    // 0x23e538: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e53c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x23e540: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23e540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23e544:
    // 0x23e544: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23e548: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E548u;
    SET_GPR_U32(ctx, 31, 0x23E550u);
    ctx->pc = 0x23E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E548u;
            // 0x23e54c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E550u; }
        if (ctx->pc != 0x23E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E550u; }
        if (ctx->pc != 0x23E550u) { return; }
    }
    ctx->pc = 0x23E550u;
label_23e550:
    // 0x23e550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E550u;
    {
        const bool branch_taken_0x23e550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E550u;
            // 0x23e554: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e550) {
            ctx->pc = 0x23E568u;
            goto label_23e568;
        }
    }
    ctx->pc = 0x23E558u;
    // 0x23e558: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e55c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23e55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x23e560: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23E560u;
    {
        const bool branch_taken_0x23e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E560u;
            // 0x23e564: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e560) {
            ctx->pc = 0x23E5D0u;
            goto label_23e5d0;
        }
    }
    ctx->pc = 0x23E568u;
label_23e568:
    // 0x23e568: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23e568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23e56c: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E56Cu;
    SET_GPR_U32(ctx, 31, 0x23E574u);
    ctx->pc = 0x23E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E56Cu;
            // 0x23e570: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E574u; }
        if (ctx->pc != 0x23E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E574u; }
        if (ctx->pc != 0x23E574u) { return; }
    }
    ctx->pc = 0x23E574u;
label_23e574:
    // 0x23e574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E574u;
    {
        const bool branch_taken_0x23e574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E574u;
            // 0x23e578: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e574) {
            ctx->pc = 0x23E58Cu;
            goto label_23e58c;
        }
    }
    ctx->pc = 0x23E57Cu;
    // 0x23e57c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e580: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x23e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x23e584: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23E584u;
    {
        const bool branch_taken_0x23e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E584u;
            // 0x23e588: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e584) {
            ctx->pc = 0x23E5D0u;
            goto label_23e5d0;
        }
    }
    ctx->pc = 0x23E58Cu;
label_23e58c:
    // 0x23e58c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e590: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E590u;
    SET_GPR_U32(ctx, 31, 0x23E598u);
    ctx->pc = 0x23E594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E590u;
            // 0x23e594: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E598u; }
        if (ctx->pc != 0x23E598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E598u; }
        if (ctx->pc != 0x23E598u) { return; }
    }
    ctx->pc = 0x23E598u;
label_23e598:
    // 0x23e598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E598u;
    {
        const bool branch_taken_0x23e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E598u;
            // 0x23e59c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e598) {
            ctx->pc = 0x23E5B0u;
            goto label_23e5b0;
        }
    }
    ctx->pc = 0x23E5A0u;
    // 0x23e5a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e5a4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23e5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23e5a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23E5A8u;
    {
        const bool branch_taken_0x23e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5A8u;
            // 0x23e5ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5a8) {
            ctx->pc = 0x23E5D0u;
            goto label_23e5d0;
        }
    }
    ctx->pc = 0x23E5B0u;
label_23e5b0:
    // 0x23e5b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e5b4: 0xc052cfc  jal         func_14B3F0
    ctx->pc = 0x23E5B4u;
    SET_GPR_U32(ctx, 31, 0x23E5BCu);
    ctx->pc = 0x23E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5B4u;
            // 0x23e5b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5BCu; }
        if (ctx->pc != 0x23E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5BCu; }
        if (ctx->pc != 0x23E5BCu) { return; }
    }
    ctx->pc = 0x23E5BCu;
label_23e5bc:
    // 0x23e5bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E5BCu;
    {
        const bool branch_taken_0x23e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e5bc) {
            ctx->pc = 0x23E5D0u;
            goto label_23e5d0;
        }
    }
    ctx->pc = 0x23E5C4u;
    // 0x23e5c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e5c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x23e5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x23e5cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23e5d0:
    // 0x23e5d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x23e5d4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x23e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e5d8: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x23E5D8u;
    SET_GPR_U32(ctx, 31, 0x23E5E0u);
    ctx->pc = 0x23E5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5D8u;
            // 0x23e5dc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5E0u; }
        if (ctx->pc != 0x23E5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5E0u; }
        if (ctx->pc != 0x23E5E0u) { return; }
    }
    ctx->pc = 0x23E5E0u;
label_23e5e0:
    // 0x23e5e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E5E0u;
    {
        const bool branch_taken_0x23e5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5E0u;
            // 0x23e5e4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5e0) {
            ctx->pc = 0x23E5F4u;
            goto label_23e5f4;
        }
    }
    ctx->pc = 0x23E5E8u;
    // 0x23e5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e5ec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x23E5ECu;
    {
        const bool branch_taken_0x23e5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5ECu;
            // 0x23e5f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5ec) {
            ctx->pc = 0x23E68Cu;
            goto label_23e68c;
        }
    }
    ctx->pc = 0x23E5F4u;
label_23e5f4:
    // 0x23e5f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x23e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23e5f8: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x23E5F8u;
    SET_GPR_U32(ctx, 31, 0x23E600u);
    ctx->pc = 0x23E5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5F8u;
            // 0x23e5fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E600u; }
        if (ctx->pc != 0x23E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E600u; }
        if (ctx->pc != 0x23E600u) { return; }
    }
    ctx->pc = 0x23E600u;
label_23e600:
    // 0x23e600: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E600u;
    {
        const bool branch_taken_0x23e600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E600u;
            // 0x23e604: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e600) {
            ctx->pc = 0x23E614u;
            goto label_23e614;
        }
    }
    ctx->pc = 0x23E608u;
    // 0x23e608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e60c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23E60Cu;
    {
        const bool branch_taken_0x23e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E60Cu;
            // 0x23e610: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e60c) {
            ctx->pc = 0x23E68Cu;
            goto label_23e68c;
        }
    }
    ctx->pc = 0x23E614u;
label_23e614:
    // 0x23e614: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e618: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x23E618u;
    SET_GPR_U32(ctx, 31, 0x23E620u);
    ctx->pc = 0x23E61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E618u;
            // 0x23e61c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E620u; }
        if (ctx->pc != 0x23E620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E620u; }
        if (ctx->pc != 0x23E620u) { return; }
    }
    ctx->pc = 0x23E620u;
label_23e620:
    // 0x23e620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E620u;
    {
        const bool branch_taken_0x23e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E620u;
            // 0x23e624: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e620) {
            ctx->pc = 0x23E634u;
            goto label_23e634;
        }
    }
    ctx->pc = 0x23E628u;
    // 0x23e628: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23e62c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23E62Cu;
    {
        const bool branch_taken_0x23e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E62Cu;
            // 0x23e630: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e62c) {
            ctx->pc = 0x23E68Cu;
            goto label_23e68c;
        }
    }
    ctx->pc = 0x23E634u;
label_23e634:
    // 0x23e634: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23e638: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x23E638u;
    SET_GPR_U32(ctx, 31, 0x23E640u);
    ctx->pc = 0x23E63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E638u;
            // 0x23e63c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E640u; }
        if (ctx->pc != 0x23E640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E640u; }
        if (ctx->pc != 0x23E640u) { return; }
    }
    ctx->pc = 0x23E640u;
label_23e640:
    // 0x23e640: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E640u;
    {
        const bool branch_taken_0x23e640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E640u;
            // 0x23e644: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e640) {
            ctx->pc = 0x23E654u;
            goto label_23e654;
        }
    }
    ctx->pc = 0x23E648u;
    // 0x23e648: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23e64c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23E64Cu;
    {
        const bool branch_taken_0x23e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E64Cu;
            // 0x23e650: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e64c) {
            ctx->pc = 0x23E68Cu;
            goto label_23e68c;
        }
    }
    ctx->pc = 0x23E654u;
label_23e654:
    // 0x23e654: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x23e654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23e658: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x23E658u;
    SET_GPR_U32(ctx, 31, 0x23E660u);
    ctx->pc = 0x23E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E658u;
            // 0x23e65c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E660u; }
        if (ctx->pc != 0x23E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E660u; }
        if (ctx->pc != 0x23E660u) { return; }
    }
    ctx->pc = 0x23E660u;
label_23e660:
    // 0x23e660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E660u;
    {
        const bool branch_taken_0x23e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E660u;
            // 0x23e664: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e660) {
            ctx->pc = 0x23E674u;
            goto label_23e674;
        }
    }
    ctx->pc = 0x23E668u;
    // 0x23e668: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e66c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E66Cu;
    {
        const bool branch_taken_0x23e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E66Cu;
            // 0x23e670: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e66c) {
            ctx->pc = 0x23E68Cu;
            goto label_23e68c;
        }
    }
    ctx->pc = 0x23E674u;
label_23e674:
    // 0x23e674: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x23e678: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x23E678u;
    SET_GPR_U32(ctx, 31, 0x23E680u);
    ctx->pc = 0x23E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E678u;
            // 0x23e67c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E680u; }
        if (ctx->pc != 0x23E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E680u; }
        if (ctx->pc != 0x23E680u) { return; }
    }
    ctx->pc = 0x23E680u;
label_23e680:
    // 0x23e680: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E680u;
    {
        const bool branch_taken_0x23e680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E680u;
            // 0x23e684: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e680) {
            ctx->pc = 0x23E68Cu;
            goto label_23e68c;
        }
    }
    ctx->pc = 0x23E688u;
    // 0x23e688: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23e688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_23e68c:
    // 0x23e68c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e69c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E69Cu;
            // 0x23e6a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E6A4u;
}
