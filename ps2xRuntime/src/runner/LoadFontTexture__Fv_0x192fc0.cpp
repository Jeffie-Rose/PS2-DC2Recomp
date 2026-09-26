#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFontTexture__Fv
// Address: 0x192fc0 - 0x1930a4
void LoadFontTexture__Fv_0x192fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFontTexture__Fv_0x192fc0");
#endif

    switch (ctx->pc) {
        case 0x192ff8u: goto label_192ff8;
        case 0x19301cu: goto label_19301c;
        case 0x193044u: goto label_193044;
        case 0x193064u: goto label_193064;
        case 0x193074u: goto label_193074;
        default: break;
    }

    ctx->pc = 0x192fc0u;

    // 0x192fc0: 0x3c01fffc  lui         $at, 0xFFFC
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65532 << 16));
    // 0x192fc4: 0x3421af80  ori         $at, $at, 0xAF80
    ctx->pc = 0x192fc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44928);
    // 0x192fc8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x192fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x192fcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192fd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192fd8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192fdc: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x192fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x192fe0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192FE0u;
    {
        const bool branch_taken_0x192fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FE0u;
            // 0x192fe4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fe0) {
            ctx->pc = 0x192FF8u;
            goto label_192ff8;
        }
    }
    ctx->pc = 0x192FE8u;
    // 0x192fe8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192fec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192ff0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192ff4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x192ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_192ff8:
    // 0x192ff8: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x192ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x192ffc: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x192FFCu;
    {
        const bool branch_taken_0x192ffc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x193000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FFCu;
            // 0x193000: 0x3c010003  lui         $at, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ffc) {
            ctx->pc = 0x193024u;
            goto label_193024;
        }
    }
    ctx->pc = 0x193004u;
    // 0x193004: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x193004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x193008: 0x34215040  ori         $at, $at, 0x5040
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20544);
    // 0x19300c: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    ctx->pc = 0x19300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x193010: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x193010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x193014: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x193014u;
    SET_GPR_U32(ctx, 31, 0x19301Cu);
    ctx->pc = 0x193018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193014u;
            // 0x193018: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19301Cu; }
        if (ctx->pc != 0x19301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19301Cu; }
        if (ctx->pc != 0x19301Cu) { return; }
    }
    ctx->pc = 0x19301Cu;
label_19301c:
    // 0x19301c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19301Cu;
    {
        const bool branch_taken_0x19301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19301c) {
            ctx->pc = 0x193044u;
            goto label_193044;
        }
    }
    ctx->pc = 0x193024u;
label_193024:
    // 0x193024: 0x0  nop
    ctx->pc = 0x193024u;
    // NOP
    // 0x193028: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19302c: 0x34215040  ori         $at, $at, 0x5040
    ctx->pc = 0x19302cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20544);
    // 0x193030: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x193034: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x193034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x193038: 0x24a55100  addiu       $a1, $a1, 0x5100
    ctx->pc = 0x193038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20736));
    // 0x19303c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x19303Cu;
    SET_GPR_U32(ctx, 31, 0x193044u);
    ctx->pc = 0x193040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19303Cu;
            // 0x193040: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193044u; }
        if (ctx->pc != 0x193044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193044u; }
        if (ctx->pc != 0x193044u) { return; }
    }
    ctx->pc = 0x193044u;
label_193044:
    // 0x193044: 0x0  nop
    ctx->pc = 0x193044u;
    // NOP
    // 0x193048: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x193048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19304c: 0x34215040  ori         $at, $at, 0x5040
    ctx->pc = 0x19304cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20544);
    // 0x193050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193054: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x193058: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x193058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x19305c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x19305Cu;
    SET_GPR_U32(ctx, 31, 0x193064u);
    ctx->pc = 0x193060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19305Cu;
            // 0x193060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193064u; }
        if (ctx->pc != 0x193064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193064u; }
        if (ctx->pc != 0x193064u) { return; }
    }
    ctx->pc = 0x193064u;
label_193064:
    // 0x193064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193064u;
    {
        const bool branch_taken_0x193064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193064u;
            // 0x193068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193064) {
            ctx->pc = 0x193074u;
            goto label_193074;
        }
    }
    ctx->pc = 0x19306Cu;
    // 0x19306c: 0xc064b28  jal         func_192CA0
    ctx->pc = 0x19306Cu;
    SET_GPR_U32(ctx, 31, 0x193074u);
    ctx->pc = 0x193070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19306Cu;
            // 0x193070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192CA0u;
    if (runtime->hasFunction(0x192CA0u)) {
        auto targetFn = runtime->lookupFunction(0x192CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193074u; }
        if (ctx->pc != 0x193074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTexture__FiP8TM2_head_0x192ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193074u; }
        if (ctx->pc != 0x193074u) { return; }
    }
    ctx->pc = 0x193074u;
label_193074:
    // 0x193074: 0x0  nop
    ctx->pc = 0x193074u;
    // NOP
    // 0x193078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19307c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x19307cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x193080: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x193080u;
    {
        const bool branch_taken_0x193080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193080) {
            ctx->pc = 0x192FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192ff8;
        }
    }
    ctx->pc = 0x193088u;
    // 0x193088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19308c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x19308cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x193090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193094: 0x34215080  ori         $at, $at, 0x5080
    ctx->pc = 0x193094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20608);
    // 0x193098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19309c: 0x3e00008  jr          $ra
    ctx->pc = 0x19309Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1930A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19309Cu;
            // 0x1930a0: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1930A4u;
}
