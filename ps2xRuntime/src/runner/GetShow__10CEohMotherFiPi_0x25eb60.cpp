#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetShow__10CEohMotherFiPi
// Address: 0x25eb60 - 0x25ec44
void GetShow__10CEohMotherFiPi_0x25eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShow__10CEohMotherFiPi_0x25eb60");
#endif

    switch (ctx->pc) {
        case 0x25eb60u: goto label_25eb60;
        case 0x25eb64u: goto label_25eb64;
        case 0x25eb68u: goto label_25eb68;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25eb70u: goto label_25eb70;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb7cu: goto label_25eb7c;
        case 0x25eb80u: goto label_25eb80;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eb88u: goto label_25eb88;
        case 0x25eb8cu: goto label_25eb8c;
        case 0x25eb90u: goto label_25eb90;
        case 0x25eb94u: goto label_25eb94;
        case 0x25eb98u: goto label_25eb98;
        case 0x25eb9cu: goto label_25eb9c;
        case 0x25eba0u: goto label_25eba0;
        case 0x25eba4u: goto label_25eba4;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebb0u: goto label_25ebb0;
        case 0x25ebb4u: goto label_25ebb4;
        case 0x25ebb8u: goto label_25ebb8;
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc4u: goto label_25ebc4;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebccu: goto label_25ebcc;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebd4u: goto label_25ebd4;
        case 0x25ebd8u: goto label_25ebd8;
        case 0x25ebdcu: goto label_25ebdc;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ebe8u: goto label_25ebe8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ebf4u: goto label_25ebf4;
        case 0x25ebf8u: goto label_25ebf8;
        case 0x25ebfcu: goto label_25ebfc;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec04u: goto label_25ec04;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec0cu: goto label_25ec0c;
        case 0x25ec10u: goto label_25ec10;
        case 0x25ec14u: goto label_25ec14;
        case 0x25ec18u: goto label_25ec18;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec20u: goto label_25ec20;
        case 0x25ec24u: goto label_25ec24;
        case 0x25ec28u: goto label_25ec28;
        case 0x25ec2cu: goto label_25ec2c;
        case 0x25ec30u: goto label_25ec30;
        case 0x25ec34u: goto label_25ec34;
        case 0x25ec38u: goto label_25ec38;
        case 0x25ec3cu: goto label_25ec3c;
        case 0x25ec40u: goto label_25ec40;
        default: break;
    }

    ctx->pc = 0x25eb60u;

label_25eb60:
    // 0x25eb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25eb64:
    // 0x25eb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25eb68:
    // 0x25eb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25eb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25eb6c:
    // 0x25eb6c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25eb70:
    if (ctx->pc == 0x25EB70u) {
        ctx->pc = 0x25EB70u;
            // 0x25eb70: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EB74u;
        goto label_25eb74;
    }
    ctx->pc = 0x25EB6Cu;
    {
        const bool branch_taken_0x25eb6c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB6Cu;
            // 0x25eb70: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb6c) {
            ctx->pc = 0x25EB80u;
            goto label_25eb80;
        }
    }
    ctx->pc = 0x25EB74u;
label_25eb74:
    // 0x25eb74: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25eb74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25eb78:
    // 0x25eb78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25eb7c:
    if (ctx->pc == 0x25EB7Cu) {
        ctx->pc = 0x25EB7Cu;
            // 0x25eb7c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25EB80u;
        goto label_25eb80;
    }
    ctx->pc = 0x25EB78u;
    {
        const bool branch_taken_0x25eb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB78u;
            // 0x25eb7c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb78) {
            ctx->pc = 0x25EB88u;
            goto label_25eb88;
        }
    }
    ctx->pc = 0x25EB80u;
label_25eb80:
    // 0x25eb80: 0x1000002c  b           . + 4 + (0x2C << 2)
label_25eb84:
    if (ctx->pc == 0x25EB84u) {
        ctx->pc = 0x25EB84u;
            // 0x25eb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EB88u;
        goto label_25eb88;
    }
    ctx->pc = 0x25EB80u;
    {
        const bool branch_taken_0x25eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB80u;
            // 0x25eb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb80) {
            ctx->pc = 0x25EC34u;
            goto label_25ec34;
        }
    }
    ctx->pc = 0x25EB88u;
label_25eb88:
    // 0x25eb88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25eb8c:
    // 0x25eb8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25eb90:
    // 0x25eb90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25eb94:
    // 0x25eb94: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_25eb98:
    if (ctx->pc == 0x25EB98u) {
        ctx->pc = 0x25EB9Cu;
        goto label_25eb9c;
    }
    ctx->pc = 0x25EB94u;
    {
        const bool branch_taken_0x25eb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25eb94) {
            ctx->pc = 0x25EC14u;
            goto label_25ec14;
        }
    }
    ctx->pc = 0x25EB9Cu;
label_25eb9c:
    // 0x25eb9c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_25eba0:
    if (ctx->pc == 0x25EBA0u) {
        ctx->pc = 0x25EBA0u;
            // 0x25eba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EBA4u;
        goto label_25eba4;
    }
    ctx->pc = 0x25EB9Cu;
    {
        const bool branch_taken_0x25eb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB9Cu;
            // 0x25eba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb9c) {
            ctx->pc = 0x25EBE4u;
            goto label_25ebe4;
        }
    }
    ctx->pc = 0x25EBA4u;
label_25eba4:
    // 0x25eba4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_25eba8:
    if (ctx->pc == 0x25EBA8u) {
        ctx->pc = 0x25EBACu;
        goto label_25ebac;
    }
    ctx->pc = 0x25EBA4u;
    {
        const bool branch_taken_0x25eba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25eba4) {
            ctx->pc = 0x25EBB4u;
            goto label_25ebb4;
        }
    }
    ctx->pc = 0x25EBACu;
label_25ebac:
    // 0x25ebac: 0x10000021  b           . + 4 + (0x21 << 2)
label_25ebb0:
    if (ctx->pc == 0x25EBB0u) {
        ctx->pc = 0x25EBB0u;
            // 0x25ebb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EBB4u;
        goto label_25ebb4;
    }
    ctx->pc = 0x25EBACu;
    {
        const bool branch_taken_0x25ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EBACu;
            // 0x25ebb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebac) {
            ctx->pc = 0x25EC34u;
            goto label_25ec34;
        }
    }
    ctx->pc = 0x25EBB4u;
label_25ebb4:
    // 0x25ebb4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ebb8:
    // 0x25ebb8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25ebbc:
    if (ctx->pc == 0x25EBBCu) {
        ctx->pc = 0x25EBBCu;
            // 0x25ebbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EBC0u;
        goto label_25ebc0;
    }
    ctx->pc = 0x25EBB8u;
    {
        const bool branch_taken_0x25ebb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EBB8u;
            // 0x25ebbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebb8) {
            ctx->pc = 0x25EBC8u;
            goto label_25ebc8;
        }
    }
    ctx->pc = 0x25EBC0u;
label_25ebc0:
    // 0x25ebc0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_25ebc4:
    if (ctx->pc == 0x25EBC4u) {
        ctx->pc = 0x25EBC4u;
            // 0x25ebc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x25EBC8u;
        goto label_25ebc8;
    }
    ctx->pc = 0x25EBC0u;
    {
        const bool branch_taken_0x25ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EBC0u;
            // 0x25ebc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc0) {
            ctx->pc = 0x25EC38u;
            goto label_25ec38;
        }
    }
    ctx->pc = 0x25EBC8u;
label_25ebc8:
    // 0x25ebc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25ebc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25ebcc:
    // 0x25ebcc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x25ebccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_25ebd0:
    // 0x25ebd0: 0x320f809  jalr        $t9
label_25ebd4:
    if (ctx->pc == 0x25EBD4u) {
        ctx->pc = 0x25EBD8u;
        goto label_25ebd8;
    }
    ctx->pc = 0x25EBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EBD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EBD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EBD8u; }
            if (ctx->pc != 0x25EBD8u) { return; }
        }
        }
    }
    ctx->pc = 0x25EBD8u;
label_25ebd8:
    // 0x25ebd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_25ebdc:
    // 0x25ebdc: 0x10000015  b           . + 4 + (0x15 << 2)
label_25ebe0:
    if (ctx->pc == 0x25EBE0u) {
        ctx->pc = 0x25EBE0u;
            // 0x25ebe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EBE4u;
        goto label_25ebe4;
    }
    ctx->pc = 0x25EBDCu;
    {
        const bool branch_taken_0x25ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EBDCu;
            // 0x25ebe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebdc) {
            ctx->pc = 0x25EC34u;
            goto label_25ec34;
        }
    }
    ctx->pc = 0x25EBE4u;
label_25ebe4:
    // 0x25ebe4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ebe8:
    // 0x25ebe8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25ebec:
    if (ctx->pc == 0x25EBECu) {
        ctx->pc = 0x25EBECu;
            // 0x25ebec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EBF0u;
        goto label_25ebf0;
    }
    ctx->pc = 0x25EBE8u;
    {
        const bool branch_taken_0x25ebe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EBE8u;
            // 0x25ebec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebe8) {
            ctx->pc = 0x25EBF8u;
            goto label_25ebf8;
        }
    }
    ctx->pc = 0x25EBF0u;
label_25ebf0:
    // 0x25ebf0: 0x10000010  b           . + 4 + (0x10 << 2)
label_25ebf4:
    if (ctx->pc == 0x25EBF4u) {
        ctx->pc = 0x25EBF8u;
        goto label_25ebf8;
    }
    ctx->pc = 0x25EBF0u;
    {
        const bool branch_taken_0x25ebf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebf0) {
            ctx->pc = 0x25EC34u;
            goto label_25ec34;
        }
    }
    ctx->pc = 0x25EBF8u;
label_25ebf8:
    // 0x25ebf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25ebf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25ebfc:
    // 0x25ebfc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x25ebfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_25ec00:
    // 0x25ec00: 0x320f809  jalr        $t9
label_25ec04:
    if (ctx->pc == 0x25EC04u) {
        ctx->pc = 0x25EC08u;
        goto label_25ec08;
    }
    ctx->pc = 0x25EC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EC08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EC08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EC08u; }
            if (ctx->pc != 0x25EC08u) { return; }
        }
        }
    }
    ctx->pc = 0x25EC08u;
label_25ec08:
    // 0x25ec08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_25ec0c:
    // 0x25ec0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_25ec10:
    if (ctx->pc == 0x25EC10u) {
        ctx->pc = 0x25EC10u;
            // 0x25ec10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EC14u;
        goto label_25ec14;
    }
    ctx->pc = 0x25EC0Cu;
    {
        const bool branch_taken_0x25ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC0Cu;
            // 0x25ec10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec0c) {
            ctx->pc = 0x25EC34u;
            goto label_25ec34;
        }
    }
    ctx->pc = 0x25EC14u;
label_25ec14:
    // 0x25ec14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ec18:
    // 0x25ec18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25ec1c:
    if (ctx->pc == 0x25EC1Cu) {
        ctx->pc = 0x25EC20u;
        goto label_25ec20;
    }
    ctx->pc = 0x25EC18u;
    {
        const bool branch_taken_0x25ec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ec18) {
            ctx->pc = 0x25EC28u;
            goto label_25ec28;
        }
    }
    ctx->pc = 0x25EC20u;
label_25ec20:
    // 0x25ec20: 0x10000004  b           . + 4 + (0x4 << 2)
label_25ec24:
    if (ctx->pc == 0x25EC24u) {
        ctx->pc = 0x25EC24u;
            // 0x25ec24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EC28u;
        goto label_25ec28;
    }
    ctx->pc = 0x25EC20u;
    {
        const bool branch_taken_0x25ec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC20u;
            // 0x25ec24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec20) {
            ctx->pc = 0x25EC34u;
            goto label_25ec34;
        }
    }
    ctx->pc = 0x25EC28u;
label_25ec28:
    // 0x25ec28: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x25ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_25ec2c:
    // 0x25ec2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ec30:
    // 0x25ec30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_25ec34:
    // 0x25ec34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25ec38:
    // 0x25ec38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25ec3c:
    // 0x25ec3c: 0x3e00008  jr          $ra
label_25ec40:
    if (ctx->pc == 0x25EC40u) {
        ctx->pc = 0x25EC40u;
            // 0x25ec40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25EC44u;
        goto label_fallthrough_0x25ec3c;
    }
    ctx->pc = 0x25EC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EC3Cu;
            // 0x25ec40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25ec3c:
    ctx->pc = 0x25EC44u;
}
