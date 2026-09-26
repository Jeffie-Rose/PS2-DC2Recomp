#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWin__6ClsMesFi
// Address: 0x158b20 - 0x158d24
void MakeMesWin__6ClsMesFi_0x158b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWin__6ClsMesFi_0x158b20");
#endif

    switch (ctx->pc) {
        case 0x158b70u: goto label_158b70;
        case 0x158b88u: goto label_158b88;
        case 0x158b9cu: goto label_158b9c;
        case 0x158ba8u: goto label_158ba8;
        case 0x158be0u: goto label_158be0;
        case 0x158c10u: goto label_158c10;
        case 0x158c7cu: goto label_158c7c;
        case 0x158d00u: goto label_158d00;
        default: break;
    }

    ctx->pc = 0x158b20u;

    // 0x158b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158b30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x158b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b34: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158B34u;
    {
        const bool branch_taken_0x158b34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B34u;
            // 0x158b38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b34) {
            ctx->pc = 0x158B5Cu;
            goto label_158b5c;
        }
    }
    ctx->pc = 0x158B3Cu;
    // 0x158b3c: 0x8e2417e4  lw          $a0, 0x17E4($s1)
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6116)));
    // 0x158b40: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x158b44: 0x14830072  bne         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x158B44u;
    {
        const bool branch_taken_0x158b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b44) {
            ctx->pc = 0x158D10u;
            goto label_158d10;
        }
    }
    ctx->pc = 0x158B4Cu;
    // 0x158b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b50: 0xae23018c  sw          $v1, 0x18C($s1)
    ctx->pc = 0x158b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 3));
    // 0x158b54: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x158B54u;
    {
        const bool branch_taken_0x158b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B54u;
            // 0x158b58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b54) {
            ctx->pc = 0x158D14u;
            goto label_158d14;
        }
    }
    ctx->pc = 0x158B5Cu;
label_158b5c:
    // 0x158b5c: 0x8e2217e4  lw          $v0, 0x17E4($s1)
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6116)));
    // 0x158b60: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x158B60u;
    {
        const bool branch_taken_0x158b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x158B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B60u;
            // 0x158b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b60) {
            ctx->pc = 0x158B94u;
            goto label_158b94;
        }
    }
    ctx->pc = 0x158B68u;
    // 0x158b68: 0xc054808  jal         func_152020
    ctx->pc = 0x158B68u;
    SET_GPR_U32(ctx, 31, 0x158B70u);
    ctx->pc = 0x152020u;
    if (runtime->hasFunction(0x152020u)) {
        auto targetFn = runtime->lookupFunction(0x152020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B70u; }
        if (ctx->pc != 0x158B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPageAutoFlg__6ClsMesFv_0x152020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B70u; }
        if (ctx->pc != 0x158B70u) { return; }
    }
    ctx->pc = 0x158B70u;
label_158b70:
    // 0x158b70: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x158B70u;
    {
        const bool branch_taken_0x158b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b70) {
            ctx->pc = 0x158D10u;
            goto label_158d10;
        }
    }
    ctx->pc = 0x158B78u;
    // 0x158b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b80: 0xc054fb0  jal         func_153EC0
    ctx->pc = 0x158B80u;
    SET_GPR_U32(ctx, 31, 0x158B88u);
    ctx->pc = 0x158B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158B80u;
            // 0x158b84: 0xae22018c  sw          $v0, 0x18C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153EC0u;
    if (runtime->hasFunction(0x153EC0u)) {
        auto targetFn = runtime->lookupFunction(0x153EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B88u; }
        if (ctx->pc != 0x158B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GoNextPage__6ClsMesFv_0x153ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B88u; }
        if (ctx->pc != 0x158B88u) { return; }
    }
    ctx->pc = 0x158B88u;
label_158b88:
    // 0x158b88: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x158B88u;
    {
        const bool branch_taken_0x158b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b88) {
            ctx->pc = 0x158D10u;
            goto label_158d10;
        }
    }
    ctx->pc = 0x158B90u;
    // 0x158b90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158b94:
    // 0x158b94: 0xc056280  jal         func_158A00
    ctx->pc = 0x158B94u;
    SET_GPR_U32(ctx, 31, 0x158B9Cu);
    ctx->pc = 0x158B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158B94u;
            // 0x158b98: 0xae3017e4  sw          $s0, 0x17E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158A00u;
    if (runtime->hasFunction(0x158A00u)) {
        auto targetFn = runtime->lookupFunction(0x158A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B9Cu; }
        if (ctx->pc != 0x158B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin_init__6ClsMesFi_0x158a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B9Cu; }
        if (ctx->pc != 0x158B9Cu) { return; }
    }
    ctx->pc = 0x158B9Cu;
label_158b9c:
    // 0x158b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ba0: 0xc055bd4  jal         func_156F50
    ctx->pc = 0x158BA0u;
    SET_GPR_U32(ctx, 31, 0x158BA8u);
    ctx->pc = 0x158BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158BA0u;
            // 0x158ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156F50u;
    if (runtime->hasFunction(0x156F50u)) {
        auto targetFn = runtime->lookupFunction(0x156F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BA8u; }
        if (ctx->pc != 0x158BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NeedMesWinWH__6ClsMesFi_0x156f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BA8u; }
        if (ctx->pc != 0x158BA8u) { return; }
    }
    ctx->pc = 0x158BA8u;
label_158ba8:
    // 0x158ba8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x158ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x158bac: 0x2841002d  slti        $at, $v0, 0x2D
    ctx->pc = 0x158bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x158bb0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x158BB0u;
    {
        const bool branch_taken_0x158bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bb0) {
            ctx->pc = 0x158BC4u;
            goto label_158bc4;
        }
    }
    ctx->pc = 0x158BB8u;
    // 0x158bb8: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x158bbc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x158BBCu;
    {
        const bool branch_taken_0x158bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BBCu;
            // 0x158bc0: 0xae220144  sw          $v0, 0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bbc) {
            ctx->pc = 0x158CE8u;
            goto label_158ce8;
        }
    }
    ctx->pc = 0x158BC4u;
label_158bc4:
    // 0x158bc4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x158bc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x158bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158bcc: 0xae220144  sw          $v0, 0x144($s1)
    ctx->pc = 0x158bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
    // 0x158bd0: 0x8e2300e4  lw          $v1, 0xE4($s1)
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x158bd4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x158BD4u;
    {
        const bool branch_taken_0x158bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BD4u;
            // 0x158bd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bd4) {
            ctx->pc = 0x158CC4u;
            goto label_158cc4;
        }
    }
    ctx->pc = 0x158BDCu;
    // 0x158bdc: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_158be0:
    // 0x158be0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158BE0u;
    {
        const bool branch_taken_0x158be0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x158be0) {
            ctx->pc = 0x158BF0u;
            goto label_158bf0;
        }
    }
    ctx->pc = 0x158BE8u;
    // 0x158be8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x158BE8u;
    {
        const bool branch_taken_0x158be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BE8u;
            // 0x158bec: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158be8) {
            ctx->pc = 0x158CA0u;
            goto label_158ca0;
        }
    }
    ctx->pc = 0x158BF0u;
label_158bf0:
    // 0x158bf0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x158bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x158bf4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x158bf4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158bf8: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x158BF8u;
    {
        const bool branch_taken_0x158bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BF8u;
            // 0x158bfc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bf8) {
            ctx->pc = 0x158C9Cu;
            goto label_158c9c;
        }
    }
    ctx->pc = 0x158C00u;
    // 0x158c00: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x158c00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x158c04: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x158C04u;
    {
        const bool branch_taken_0x158c04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C04u;
            // 0x158c08: 0x256efff9  addiu       $t6, $t3, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c04) {
            ctx->pc = 0x158C64u;
            goto label_158c64;
        }
    }
    ctx->pc = 0x158C0Cu;
    // 0x158c0c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x158c0cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158c10:
    // 0x158c10: 0x22fc021  addu        $t8, $s1, $t7
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x158c14: 0x8f0500e8  lw          $a1, 0xE8($t8)
    ctx->pc = 0x158c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x158c18: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x158c18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x158c1c: 0x8f0400ec  lw          $a0, 0xEC($t8)
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 236)));
    // 0x158c20: 0x18e102a  slt         $v0, $t4, $t6
    ctx->pc = 0x158c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x158c24: 0x8f0900f0  lw          $t1, 0xF0($t8)
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 240)));
    // 0x158c28: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x158c2c: 0x8f0800f4  lw          $t0, 0xF4($t8)
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 244)));
    // 0x158c30: 0x8f0700f8  lw          $a3, 0xF8($t8)
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 248)));
    // 0x158c34: 0x8f0600fc  lw          $a2, 0xFC($t8)
    ctx->pc = 0x158c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 252)));
    // 0x158c38: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x158c38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x158c3c: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x158c40: 0x8f050100  lw          $a1, 0x100($t8)
    ctx->pc = 0x158c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 256)));
    // 0x158c44: 0x8f040104  lw          $a0, 0x104($t8)
    ctx->pc = 0x158c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 260)));
    // 0x158c48: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x158c4c: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x158c4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x158c50: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x158c54: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x158c54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x158c58: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x158c58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x158c5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x158C5Cu;
    {
        const bool branch_taken_0x158c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C5Cu;
            // 0x158c60: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c5c) {
            ctx->pc = 0x158C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158c10;
        }
    }
    ctx->pc = 0x158C64u;
label_158c64:
    // 0x158c64: 0x0  nop
    ctx->pc = 0x158c64u;
    // NOP
    // 0x158c68: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x158c6c: 0x185082a  slt         $at, $t4, $a1
    ctx->pc = 0x158c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x158c70: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x158C70u;
    {
        const bool branch_taken_0x158c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c70) {
            ctx->pc = 0x158C9Cu;
            goto label_158c9c;
        }
    }
    ctx->pc = 0x158C78u;
    // 0x158c78: 0xc3080  sll         $a2, $t4, 2
    ctx->pc = 0x158c78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_158c7c:
    // 0x158c7c: 0x0  nop
    ctx->pc = 0x158c7cu;
    // NOP
    // 0x158c80: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x158c84: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x158c88: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x158c88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x158c8c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x158c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x158c90: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x158c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x158c94: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x158C94u;
    {
        const bool branch_taken_0x158c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C94u;
            // 0x158c98: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c94) {
            ctx->pc = 0x158C7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C9Cu;
label_158c9c:
    // 0x158c9c: 0x0  nop
    ctx->pc = 0x158c9cu;
    // NOP
label_158ca0:
    // 0x158ca0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x158ca4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x158ca8: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x158cac: 0x8c421e10  lw          $v0, 0x1E10($v0)
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7696)));
    // 0x158cb0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x158cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x158cb4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x158CB4u;
    {
        const bool branch_taken_0x158cb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158cb4) {
            ctx->pc = 0x158CC0u;
            goto label_158cc0;
        }
    }
    ctx->pc = 0x158CBCu;
    // 0x158cbc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158cc0:
    // 0x158cc0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x158cc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_158cc4:
    // 0x158cc4: 0x0  nop
    ctx->pc = 0x158cc4u;
    // NOP
    // 0x158cc8: 0x163102a  slt         $v0, $t3, $v1
    ctx->pc = 0x158cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x158ccc: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x158CCCu;
    {
        const bool branch_taken_0x158ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158CCCu;
            // 0x158cd0: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ccc) {
            ctx->pc = 0x158BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158be0;
        }
    }
    ctx->pc = 0x158CD4u;
    // 0x158cd4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x158CD4u;
    {
        const bool branch_taken_0x158cd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x158cd4) {
            ctx->pc = 0x158CE8u;
            goto label_158ce8;
        }
    }
    ctx->pc = 0x158CDCu;
    // 0x158cdc: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x158cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x158ce0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x158ce4: 0xae220144  sw          $v0, 0x144($s1)
    ctx->pc = 0x158ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
label_158ce8:
    // 0x158ce8: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x158cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158cf4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x158cf8: 0xc05595c  jal         func_156570
    ctx->pc = 0x158CF8u;
    SET_GPR_U32(ctx, 31, 0x158D00u);
    ctx->pc = 0x158CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158CF8u;
            // 0x158cfc: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156570u;
    if (runtime->hasFunction(0x156570u)) {
        auto targetFn = runtime->lookupFunction(0x156570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D00u; }
        if (ctx->pc != 0x158D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl__6ClsMesFi_0x156570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D00u; }
        if (ctx->pc != 0x158D00u) { return; }
    }
    ctx->pc = 0x158D00u;
label_158d00:
    // 0x158d00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158D00u;
    {
        const bool branch_taken_0x158d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d00) {
            ctx->pc = 0x158D10u;
            goto label_158d10;
        }
    }
    ctx->pc = 0x158D08u;
    // 0x158d08: 0x8e2317c0  lw          $v1, 0x17C0($s1)
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6080)));
    // 0x158d0c: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x158d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_158d10:
    // 0x158d10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158d14:
    // 0x158d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x158D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D1Cu;
            // 0x158d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158D24u;
}
