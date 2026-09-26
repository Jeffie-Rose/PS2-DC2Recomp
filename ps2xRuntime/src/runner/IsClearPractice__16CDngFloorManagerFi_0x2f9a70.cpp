#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsClearPractice__16CDngFloorManagerFi
// Address: 0x2f9a70 - 0x2f9da0
void IsClearPractice__16CDngFloorManagerFi_0x2f9a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsClearPractice__16CDngFloorManagerFi_0x2f9a70");
#endif

    switch (ctx->pc) {
        case 0x2f9a94u: goto label_2f9a94;
        case 0x2f9a9cu: goto label_2f9a9c;
        case 0x2f9abcu: goto label_2f9abc;
        case 0x2f9ad0u: goto label_2f9ad0;
        case 0x2f9b38u: goto label_2f9b38;
        case 0x2f9bc0u: goto label_2f9bc0;
        case 0x2f9c00u: goto label_2f9c00;
        case 0x2f9c40u: goto label_2f9c40;
        case 0x2f9cbcu: goto label_2f9cbc;
        case 0x2f9d74u: goto label_2f9d74;
        case 0x2f9d80u: goto label_2f9d80;
        default: break;
    }

    ctx->pc = 0x2f9a70u;

    // 0x2f9a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9a74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f9a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9a78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f9a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f9a80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f9a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a8c: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2F9A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F9A94u);
    ctx->pc = 0x2F9A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A8Cu;
            // 0x2f9a90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A94u; }
        if (ctx->pc != 0x2F9A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A94u; }
        if (ctx->pc != 0x2F9A94u) { return; }
    }
    ctx->pc = 0x2F9A94u;
label_2f9a94:
    // 0x2f9a94: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x2F9A94u;
    SET_GPR_U32(ctx, 31, 0x2F9A9Cu);
    ctx->pc = 0x2F9A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A94u;
            // 0x2f9a98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A9Cu; }
        if (ctx->pc != 0x2F9A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A9Cu; }
        if (ctx->pc != 0x2F9A9Cu) { return; }
    }
    ctx->pc = 0x2F9A9Cu;
label_2f9a9c:
    // 0x2f9a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9aa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9aa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9aa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f9aac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f9ab0: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2f9ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9ab4: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F9AB4u;
    SET_GPR_U32(ctx, 31, 0x2F9ABCu);
    ctx->pc = 0x2F9AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AB4u;
            // 0x2f9ab8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9ABCu; }
        if (ctx->pc != 0x2F9ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9ABCu; }
        if (ctx->pc != 0x2F9ABCu) { return; }
    }
    ctx->pc = 0x2F9ABCu;
label_2f9abc:
    // 0x2f9abc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2f9abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9ac0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f9ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f9ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ac8: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2F9AC8u;
    SET_GPR_U32(ctx, 31, 0x2F9AD0u);
    ctx->pc = 0x2F9ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AC8u;
            // 0x2f9acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AD0u; }
        if (ctx->pc != 0x2F9AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AD0u; }
        if (ctx->pc != 0x2F9AD0u) { return; }
    }
    ctx->pc = 0x2F9AD0u;
label_2f9ad0:
    // 0x2f9ad0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9AD0u;
    {
        const bool branch_taken_0x2f9ad0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ad0) {
            ctx->pc = 0x2F9AE8u;
            goto label_2f9ae8;
        }
    }
    ctx->pc = 0x2F9AD8u;
    // 0x2f9ad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9AD8u;
    {
        const bool branch_taken_0x2f9ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ad8) {
            ctx->pc = 0x2F9AE8u;
            goto label_2f9ae8;
        }
    }
    ctx->pc = 0x2F9AE0u;
    // 0x2f9ae0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9AE0u;
    {
        const bool branch_taken_0x2f9ae0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ae0) {
            ctx->pc = 0x2F9AF0u;
            goto label_2f9af0;
        }
    }
    ctx->pc = 0x2F9AE8u;
label_2f9ae8:
    // 0x2f9ae8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2F9AE8u;
    {
        const bool branch_taken_0x2f9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AE8u;
            // 0x2f9aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ae8) {
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9AF0u;
label_2f9af0:
    // 0x2f9af0: 0x8245001a  lb          $a1, 0x1A($s2)
    ctx->pc = 0x2f9af0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x2f9af4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9AF4u;
    {
        const bool branch_taken_0x2f9af4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F9AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AF4u;
            // 0x2f9af8: 0x1320c0  sll         $a0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9af4) {
            ctx->pc = 0x2F9B04u;
            goto label_2f9b04;
        }
    }
    ctx->pc = 0x2F9AFCu;
    // 0x2f9afc: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F9AFCu;
    {
        const bool branch_taken_0x2f9afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AFCu;
            // 0x2f9b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9afc) {
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9B04u;
label_2f9b04:
    // 0x2f9b04: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2f9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2f9b08: 0x2463d070  addiu       $v1, $v1, -0x2F90
    ctx->pc = 0x2f9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955120));
    // 0x2f9b0c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x2f9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2f9b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f9b14: 0x8e27005c  lw          $a3, 0x5C($s1)
    ctx->pc = 0x2f9b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2f9b18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f9b1c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2f9b1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9b20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9B20u;
    {
        const bool branch_taken_0x2f9b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B20u;
            // 0x2f9b24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b20) {
            ctx->pc = 0x2F9B30u;
            goto label_2f9b30;
        }
    }
    ctx->pc = 0x2F9B28u;
    // 0x2f9b28: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2F9B28u;
    {
        const bool branch_taken_0x2f9b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B28u;
            // 0x2f9b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b28) {
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9B30u;
label_2f9b30:
    // 0x2f9b30: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x2f9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2f9b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b38:
    // 0x2f9b38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f9b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f9b3c: 0x28c40007  slti        $a0, $a2, 0x7
    ctx->pc = 0x2f9b3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f9b40: 0x0  nop
    ctx->pc = 0x2f9b40u;
    // NOP
    // 0x2f9b44: 0x0  nop
    ctx->pc = 0x2f9b44u;
    // NOP
    // 0x2f9b48: 0x0  nop
    ctx->pc = 0x2f9b48u;
    // NOP
    // 0x2f9b4c: 0x0  nop
    ctx->pc = 0x2f9b4cu;
    // NOP
    // 0x2f9b50: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F9B50u;
    {
        const bool branch_taken_0x2f9b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b50) {
            ctx->pc = 0x2F9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9b38;
        }
    }
    ctx->pc = 0x2F9B58u;
    // 0x2f9b58: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x2f9b58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f9b5c: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x2F9B5Cu;
    {
        const bool branch_taken_0x2f9b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B5Cu;
            // 0x2f9b60: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b5c) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9B64u;
    // 0x2f9b64: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2f9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f9b68: 0x24c61bc0  addiu       $a2, $a2, 0x1BC0
    ctx->pc = 0x2f9b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7104));
    // 0x2f9b6c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2f9b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f9b70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f9b74: 0x800008  jr          $a0
    ctx->pc = 0x2F9B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9B7Cu: goto label_2f9b7c;
            case 0x2F9BA0u: goto label_2f9ba0;
            case 0x2F9D10u: goto label_2f9d10;
            case 0x2F9D20u: goto label_2f9d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9B7Cu;
label_2f9b7c:
    // 0x2f9b7c: 0x10e00069  beqz        $a3, . + 4 + (0x69 << 2)
    ctx->pc = 0x2F9B7Cu;
    {
        const bool branch_taken_0x2f9b7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B7Cu;
            // 0x2f9b80: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b7c) {
            ctx->pc = 0x2F9D24u;
            goto label_2f9d24;
        }
    }
    ctx->pc = 0x2F9B84u;
    // 0x2f9b84: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2f9b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2f9b88: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2f9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2f9b8c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f9b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9b90: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x2F9B90u;
    {
        const bool branch_taken_0x2f9b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b90) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9B98u;
    // 0x2f9b98: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2F9B98u;
    {
        const bool branch_taken_0x2f9b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B98u;
            // 0x2f9b9c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b98) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9BA0u;
label_2f9ba0:
    // 0x2f9ba0: 0x10e0005f  beqz        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x2F9BA0u;
    {
        const bool branch_taken_0x2f9ba0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BA0u;
            // 0x2f9ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ba0) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9BA8u;
    // 0x2f9ba8: 0x14a6000f  bne         $a1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9BA8u;
    {
        const bool branch_taken_0x2f9ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F9BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BA8u;
            // 0x2f9bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ba8) {
            ctx->pc = 0x2F9BE8u;
            goto label_2f9be8;
        }
    }
    ctx->pc = 0x2F9BB0u;
    // 0x2f9bb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f9bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bb8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2f9bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x2f9bbc: 0x24e7d080  addiu       $a3, $a3, -0x2F80
    ctx->pc = 0x2f9bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955136));
label_2f9bc0:
    // 0x2f9bc0: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x2f9bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2f9bc4: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x2f9bc4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f9bc8: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x2f9bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2f9bcc: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9BCCu;
    {
        const bool branch_taken_0x2f9bcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9bcc) {
            ctx->pc = 0x2F9BD8u;
            goto label_2f9bd8;
        }
    }
    ctx->pc = 0x2F9BD4u;
    // 0x2f9bd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9bd8:
    // 0x2f9bd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f9bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f9bdc: 0x29060006  slti        $a2, $t0, 0x6
    ctx->pc = 0x2f9bdcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f9be0: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F9BE0u;
    {
        const bool branch_taken_0x2f9be0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BE0u;
            // 0x2f9be4: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9be0) {
            ctx->pc = 0x2F9BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9bc0;
        }
    }
    ctx->pc = 0x2F9BE8u;
label_2f9be8:
    // 0x2f9be8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2f9be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9bec: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9BECu;
    {
        const bool branch_taken_0x2f9bec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F9BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BECu;
            // 0x2f9bf0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bec) {
            ctx->pc = 0x2F9C28u;
            goto label_2f9c28;
        }
    }
    ctx->pc = 0x2F9BF4u;
    // 0x2f9bf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bf8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2f9bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x2f9bfc: 0x24e7d080  addiu       $a3, $a3, -0x2F80
    ctx->pc = 0x2f9bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955136));
label_2f9c00:
    // 0x2f9c00: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x2f9c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2f9c04: 0x94c6000c  lhu         $a2, 0xC($a2)
    ctx->pc = 0x2f9c04u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f9c08: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x2f9c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2f9c0c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9C0Cu;
    {
        const bool branch_taken_0x2f9c0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c0c) {
            ctx->pc = 0x2F9C18u;
            goto label_2f9c18;
        }
    }
    ctx->pc = 0x2F9C14u;
    // 0x2f9c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9c18:
    // 0x2f9c18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f9c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f9c1c: 0x29060006  slti        $a2, $t0, 0x6
    ctx->pc = 0x2f9c1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f9c20: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F9C20u;
    {
        const bool branch_taken_0x2f9c20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C20u;
            // 0x2f9c24: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c20) {
            ctx->pc = 0x2F9C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9c00;
        }
    }
    ctx->pc = 0x2F9C28u;
label_2f9c28:
    // 0x2f9c28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f9c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f9c2c: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9C2Cu;
    {
        const bool branch_taken_0x2f9c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F9C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C2Cu;
            // 0x2f9c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c2c) {
            ctx->pc = 0x2F9C68u;
            goto label_2f9c68;
        }
    }
    ctx->pc = 0x2F9C34u;
    // 0x2f9c34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c38: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x2f9c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x2f9c3c: 0x24e7d080  addiu       $a3, $a3, -0x2F80
    ctx->pc = 0x2f9c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955136));
label_2f9c40:
    // 0x2f9c40: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x2f9c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2f9c44: 0x94c60018  lhu         $a2, 0x18($a2)
    ctx->pc = 0x2f9c44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2f9c48: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x2f9c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2f9c4c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9C4Cu;
    {
        const bool branch_taken_0x2f9c4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c4c) {
            ctx->pc = 0x2F9C58u;
            goto label_2f9c58;
        }
    }
    ctx->pc = 0x2F9C54u;
    // 0x2f9c54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9c58:
    // 0x2f9c58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f9c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f9c5c: 0x29060006  slti        $a2, $t0, 0x6
    ctx->pc = 0x2f9c5cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f9c60: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F9C60u;
    {
        const bool branch_taken_0x2f9c60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C60u;
            // 0x2f9c64: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c60) {
            ctx->pc = 0x2F9C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9c40;
        }
    }
    ctx->pc = 0x2F9C68u;
label_2f9c68:
    // 0x2f9c68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9c6c: 0x14a6001e  bne         $a1, $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F9C6Cu;
    {
        const bool branch_taken_0x2f9c6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F9C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C6Cu;
            // 0x2f9c70: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c6c) {
            ctx->pc = 0x2F9CE8u;
            goto label_2f9ce8;
        }
    }
    ctx->pc = 0x2F9C74u;
    // 0x2f9c74: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9C74u;
    {
        const bool branch_taken_0x2f9c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C74u;
            // 0x2f9c78: 0x30650020  andi        $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c74) {
            ctx->pc = 0x2F9C8Cu;
            goto label_2f9c8c;
        }
    }
    ctx->pc = 0x2F9C7Cu;
    // 0x2f9c7c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9C7Cu;
    {
        const bool branch_taken_0x2f9c7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C7Cu;
            // 0x2f9c80: 0x30650040  andi        $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c7c) {
            ctx->pc = 0x2F9C8Cu;
            goto label_2f9c8c;
        }
    }
    ctx->pc = 0x2F9C84u;
    // 0x2f9c84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9C84u;
    {
        const bool branch_taken_0x2f9c84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c84) {
            ctx->pc = 0x2F9C94u;
            goto label_2f9c94;
        }
    }
    ctx->pc = 0x2F9C8Cu;
label_2f9c8c:
    // 0x2f9c8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F9C8Cu;
    {
        const bool branch_taken_0x2f9c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C8Cu;
            // 0x2f9c90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c8c) {
            ctx->pc = 0x2F9CE8u;
            goto label_2f9ce8;
        }
    }
    ctx->pc = 0x2F9C94u;
label_2f9c94:
    // 0x2f9c94: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x2f9c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2f9c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f9c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ca0: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x2f9ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f9ca4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2f9ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f9ca8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2f9ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2f9cac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2f9cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2f9cb0: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50
    ctx->pc = 0x2f9cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
    // 0x2f9cb4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2f9cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f9cb8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2f9cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2f9cbc:
    // 0x2f9cbc: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x2f9cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2f9cc0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2f9cc0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9cc4: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x2f9cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f9cc8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9CC8u;
    {
        const bool branch_taken_0x2f9cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cc8) {
            ctx->pc = 0x2F9CD4u;
            goto label_2f9cd4;
        }
    }
    ctx->pc = 0x2F9CD0u;
    // 0x2f9cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f9cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9cd4:
    // 0x2f9cd4: 0x0  nop
    ctx->pc = 0x2f9cd4u;
    // NOP
    // 0x2f9cd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f9cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f9cdc: 0x29050005  slti        $a1, $t0, 0x5
    ctx->pc = 0x2f9cdcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f9ce0: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F9CE0u;
    {
        const bool branch_taken_0x2f9ce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9CE0u;
            // 0x2f9ce4: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ce0) {
            ctx->pc = 0x2F9CBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9cbc;
        }
    }
    ctx->pc = 0x2F9CE8u;
label_2f9ce8:
    // 0x2f9ce8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x2f9ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2f9cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9cf0: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x2f9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f9cf4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2f9cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f9cf8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9CF8u;
    {
        const bool branch_taken_0x2f9cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cf8) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9D00u;
    // 0x2f9d00: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9D00u;
    {
        const bool branch_taken_0x2f9d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d00) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9D08u;
    // 0x2f9d08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9D08u;
    {
        const bool branch_taken_0x2f9d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D08u;
            // 0x2f9d0c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d08) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9D10u;
label_2f9d10:
    // 0x2f9d10: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2f9d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2f9d14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9D14u;
    {
        const bool branch_taken_0x2f9d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D14u;
            // 0x2f9d18: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d14) {
            ctx->pc = 0x2F9D20u;
            goto label_2f9d20;
        }
    }
    ctx->pc = 0x2F9D1Cu;
    // 0x2f9d1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f9d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9d20:
    // 0x2f9d20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9d24:
    // 0x2f9d24: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9D24u;
    {
        const bool branch_taken_0x2f9d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F9D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D24u;
            // 0x2f9d28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d24) {
            ctx->pc = 0x2F9D44u;
            goto label_2f9d44;
        }
    }
    ctx->pc = 0x2F9D2Cu;
    // 0x2f9d2c: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x2f9d2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2f9d30: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2f9d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2f9d34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9D34u;
    {
        const bool branch_taken_0x2f9d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d34) {
            ctx->pc = 0x2F9D40u;
            goto label_2f9d40;
        }
    }
    ctx->pc = 0x2F9D3Cu;
    // 0x2f9d3c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f9d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9d40:
    // 0x2f9d40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9d44:
    // 0x2f9d44: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9D44u;
    {
        const bool branch_taken_0x2f9d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D44u;
            // 0x2f9d48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d44) {
            ctx->pc = 0x2F9D54u;
            goto label_2f9d54;
        }
    }
    ctx->pc = 0x2F9D4Cu;
    // 0x2f9d4c: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9D4Cu;
    {
        const bool branch_taken_0x2f9d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9d4c) {
            ctx->pc = 0x2F9D60u;
            goto label_2f9d60;
        }
    }
    ctx->pc = 0x2F9D54u;
label_2f9d54:
    // 0x2f9d54: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x2f9d54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2f9d58: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2f9d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2f9d5c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2f9d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_2f9d60:
    // 0x2f9d60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9d64: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9D64u;
    {
        const bool branch_taken_0x2f9d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D64u;
            // 0x2f9d68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d64) {
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9D6Cu;
    // 0x2f9d6c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2F9D6Cu;
    SET_GPR_U32(ctx, 31, 0x2F9D74u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D74u; }
        if (ctx->pc != 0x2F9D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D74u; }
        if (ctx->pc != 0x2F9D74u) { return; }
    }
    ctx->pc = 0x2F9D74u;
label_2f9d74:
    // 0x2f9d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f9d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d78: 0xc0677dc  jal         func_19DF70
    ctx->pc = 0x2F9D78u;
    SET_GPR_U32(ctx, 31, 0x2F9D80u);
    ctx->pc = 0x2F9D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D78u;
            // 0x2f9d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DF70u;
    if (runtime->hasFunction(0x19DF70u)) {
        auto targetFn = runtime->lookupFunction(0x19DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D80u; }
        if (ctx->pc != 0x2F9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYarikomiMedal__16CUserDataManagerFi_0x19df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D80u; }
        if (ctx->pc != 0x2F9D80u) { return; }
    }
    ctx->pc = 0x2F9D80u;
label_2f9d80:
    // 0x2f9d80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f9d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d84:
    // 0x2f9d84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f9d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9d88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f9d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D98u;
            // 0x2f9d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9DA0u;
}
