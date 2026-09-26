#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LevelCheck__15CInventUserDataFP17USER_PICTURE_INFO
// Address: 0x1fef40 - 0x1ff054
void LevelCheck__15CInventUserDataFP17USER_PICTURE_INFO_0x1fef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LevelCheck__15CInventUserDataFP17USER_PICTURE_INFO_0x1fef40");
#endif

    switch (ctx->pc) {
        case 0x1fef6cu: goto label_1fef6c;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1ff00cu: goto label_1ff00c;
        default: break;
    }

    ctx->pc = 0x1fef40u;

    // 0x1fef40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fef44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fef48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fef4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fef50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fef50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef54: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF54u;
    {
        const bool branch_taken_0x1fef54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF54u;
            // 0x1fef58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef54) {
            ctx->pc = 0x1FEF64u;
            goto label_1fef64;
        }
    }
    ctx->pc = 0x1FEF5Cu;
    // 0x1fef5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1FEF5Cu;
    {
        const bool branch_taken_0x1fef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF5Cu;
            // 0x1fef60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef5c) {
            ctx->pc = 0x1FF040u;
            goto label_1ff040;
        }
    }
    ctx->pc = 0x1FEF64u;
label_1fef64:
    // 0x1fef64: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FEF64u;
    SET_GPR_U32(ctx, 31, 0x1FEF6Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEF6Cu; }
        if (ctx->pc != 0x1FEF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEF6Cu; }
        if (ctx->pc != 0x1FEF6Cu) { return; }
    }
    ctx->pc = 0x1FEF6Cu;
label_1fef6c:
    // 0x1fef6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF6Cu;
    {
        const bool branch_taken_0x1fef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fef6c) {
            ctx->pc = 0x1FEF7Cu;
            goto label_1fef7c;
        }
    }
    ctx->pc = 0x1FEF74u;
    // 0x1fef74: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FEF74u;
    {
        const bool branch_taken_0x1fef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF74u;
            // 0x1fef78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef74) {
            ctx->pc = 0x1FF040u;
            goto label_1ff040;
        }
    }
    ctx->pc = 0x1FEF7Cu;
label_1fef7c:
    // 0x1fef7c: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x1fef7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1fef80: 0x1ce00003  bgtz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF80u;
    {
        const bool branch_taken_0x1fef80 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1FEF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF80u;
            // 0x1fef84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef80) {
            ctx->pc = 0x1FEF90u;
            goto label_1fef90;
        }
    }
    ctx->pc = 0x1FEF88u;
    // 0x1fef88: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FEF88u;
    {
        const bool branch_taken_0x1fef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF88u;
            // 0x1fef8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef88) {
            ctx->pc = 0x1FF040u;
            goto label_1ff040;
        }
    }
    ctx->pc = 0x1FEF90u;
label_1fef90:
    // 0x1fef90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fef94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1fef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1fef9c: 0x34684dd0  ori         $t0, $v1, 0x4DD0
    ctx->pc = 0x1fef9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19920);
label_1fefa0:
    // 0x1fefa0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1fefa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fefa4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1fefa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1fefa8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fefac: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFACu;
    {
        const bool branch_taken_0x1fefac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1fefac) {
            ctx->pc = 0x1FEFBCu;
            goto label_1fefbc;
        }
    }
    ctx->pc = 0x1FEFB4u;
    // 0x1fefb4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1FEFB4u;
    {
        const bool branch_taken_0x1fefb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFB4u;
            // 0x1fefb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefb4) {
            ctx->pc = 0x1FF040u;
            goto label_1ff040;
        }
    }
    ctx->pc = 0x1FEFBCu;
label_1fefbc:
    // 0x1fefbc: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFBCu;
    {
        const bool branch_taken_0x1fefbc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1fefbc) {
            ctx->pc = 0x1FEFCCu;
            goto label_1fefcc;
        }
    }
    ctx->pc = 0x1FEFC4u;
    // 0x1fefc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEFC4u;
    {
        const bool branch_taken_0x1fefc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFC4u;
            // 0x1fefc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefc4) {
            ctx->pc = 0x1FEFDCu;
            goto label_1fefdc;
        }
    }
    ctx->pc = 0x1FEFCCu;
label_1fefcc:
    // 0x1fefcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fefccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fefd0: 0x28830200  slti        $v1, $a0, 0x200
    ctx->pc = 0x1fefd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fefd4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FEFD4u;
    {
        const bool branch_taken_0x1fefd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFD4u;
            // 0x1fefd8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefd4) {
            ctx->pc = 0x1FEFA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fefa0;
        }
    }
    ctx->pc = 0x1FEFDCu;
label_1fefdc:
    // 0x1fefdc: 0x0  nop
    ctx->pc = 0x1fefdcu;
    // NOP
    // 0x1fefe0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFE0u;
    {
        const bool branch_taken_0x1fefe0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FEFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFE0u;
            // 0x1fefe4: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefe0) {
            ctx->pc = 0x1FEFF0u;
            goto label_1feff0;
        }
    }
    ctx->pc = 0x1FEFE8u;
    // 0x1fefe8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FEFE8u;
    {
        const bool branch_taken_0x1fefe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFE8u;
            // 0x1fefec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefe8) {
            ctx->pc = 0x1FF040u;
            goto label_1ff040;
        }
    }
    ctx->pc = 0x1FEFF0u;
label_1feff0:
    // 0x1feff0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1feff4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1feff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1feff8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1feff8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1feffc: 0xa4274dd0  sh          $a3, 0x4DD0($at)
    ctx->pc = 0x1feffcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19920), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ff000: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1ff000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ff004: 0xc07fbb0  jal         func_1FEEC0
    ctx->pc = 0x1FF004u;
    SET_GPR_U32(ctx, 31, 0x1FF00Cu);
    ctx->pc = 0x1FF008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF004u;
            // 0x1ff008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC0u;
    if (runtime->hasFunction(0x1FEEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF00Cu; }
        if (ctx->pc != 0x1FF00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPhotoExp__15CInventUserDataFv_0x1feec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF00Cu; }
        if (ctx->pc != 0x1FF00Cu) { return; }
    }
    ctx->pc = 0x1FF00Cu;
label_1ff00c:
    // 0x1ff00c: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
    // 0x1ff010: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1ff010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1ff014: 0x3484851f  ori         $a0, $a0, 0x851F
    ctx->pc = 0x1ff014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
    // 0x1ff018: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1ff018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ff01c: 0x0  nop
    ctx->pc = 0x1ff01cu;
    // NOP
    // 0x1ff020: 0x0  nop
    ctx->pc = 0x1ff020u;
    // NOP
    // 0x1ff024: 0x1010  mfhi        $v0
    ctx->pc = 0x1ff024u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ff028: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ff028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1ff02c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff030: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ff030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ff034: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ff038: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x1ff038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1ff03c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ff03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ff040:
    // 0x1ff040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF04Cu;
            // 0x1ff050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF054u;
}
