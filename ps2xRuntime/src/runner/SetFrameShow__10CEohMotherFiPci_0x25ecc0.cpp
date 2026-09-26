#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFrameShow__10CEohMotherFiPci
// Address: 0x25ecc0 - 0x25ed9c
void SetFrameShow__10CEohMotherFiPci_0x25ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFrameShow__10CEohMotherFiPci_0x25ecc0");
#endif

    switch (ctx->pc) {
        case 0x25ed2cu: goto label_25ed2c;
        default: break;
    }

    ctx->pc = 0x25ecc0u;

    // 0x25ecc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ecc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ecc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25eccc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ECCCu;
    {
        const bool branch_taken_0x25eccc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25ECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ECCCu;
            // 0x25ecd0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eccc) {
            ctx->pc = 0x25ECE0u;
            goto label_25ece0;
        }
    }
    ctx->pc = 0x25ECD4u;
    // 0x25ecd4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25ecd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25ecd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ECD8u;
    {
        const bool branch_taken_0x25ecd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ECD8u;
            // 0x25ecdc: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecd8) {
            ctx->pc = 0x25ECE8u;
            goto label_25ece8;
        }
    }
    ctx->pc = 0x25ECE0u;
label_25ece0:
    // 0x25ece0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25ECE0u;
    {
        const bool branch_taken_0x25ece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ECE0u;
            // 0x25ece4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ece0) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ECE8u;
label_25ece8:
    // 0x25ece8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25ecec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25ecf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ecf4: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x25ECF4u;
    {
        const bool branch_taken_0x25ecf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ecf4) {
            ctx->pc = 0x25ED5Cu;
            goto label_25ed5c;
        }
    }
    ctx->pc = 0x25ECFCu;
    // 0x25ecfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ECFCu;
    {
        const bool branch_taken_0x25ecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ecfc) {
            ctx->pc = 0x25ED0Cu;
            goto label_25ed0c;
        }
    }
    ctx->pc = 0x25ED04u;
    // 0x25ed04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25ED04u;
    {
        const bool branch_taken_0x25ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED04u;
            // 0x25ed08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed04) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED0Cu;
label_25ed0c:
    // 0x25ed0c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ed10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED10u;
    {
        const bool branch_taken_0x25ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed10) {
            ctx->pc = 0x25ED20u;
            goto label_25ed20;
        }
    }
    ctx->pc = 0x25ED18u;
    // 0x25ed18: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25ED18u;
    {
        const bool branch_taken_0x25ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED18u;
            // 0x25ed1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed18) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED20u;
label_25ed20:
    // 0x25ed20: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x25ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x25ed24: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x25ED24u;
    SET_GPR_U32(ctx, 31, 0x25ED2Cu);
    ctx->pc = 0x25ED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED24u;
            // 0x25ed28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ED2Cu; }
        if (ctx->pc != 0x25ED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ED2Cu; }
        if (ctx->pc != 0x25ED2Cu) { return; }
    }
    ctx->pc = 0x25ED2Cu;
label_25ed2c:
    // 0x25ed2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED2Cu;
    {
        const bool branch_taken_0x25ed2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed2c) {
            ctx->pc = 0x25ED3Cu;
            goto label_25ed3c;
        }
    }
    ctx->pc = 0x25ED34u;
    // 0x25ed34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25ED34u;
    {
        const bool branch_taken_0x25ed34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED34u;
            // 0x25ed38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed34) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED3Cu;
label_25ed3c:
    // 0x25ed3c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25ed40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED40u;
    {
        const bool branch_taken_0x25ed40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed40) {
            ctx->pc = 0x25ED50u;
            goto label_25ed50;
        }
    }
    ctx->pc = 0x25ED48u;
    // 0x25ed48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25ED48u;
    {
        const bool branch_taken_0x25ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED48u;
            // 0x25ed4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed48) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED50u;
label_25ed50:
    // 0x25ed50: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x25ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x25ed54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25ED54u;
    {
        const bool branch_taken_0x25ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED54u;
            // 0x25ed58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed54) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED5Cu;
label_25ed5c:
    // 0x25ed5c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ed60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED60u;
    {
        const bool branch_taken_0x25ed60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed60) {
            ctx->pc = 0x25ED70u;
            goto label_25ed70;
        }
    }
    ctx->pc = 0x25ED68u;
    // 0x25ed68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25ED68u;
    {
        const bool branch_taken_0x25ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED68u;
            // 0x25ed6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed68) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED70u;
label_25ed70:
    // 0x25ed70: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x25ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x25ed74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED74u;
    {
        const bool branch_taken_0x25ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed74) {
            ctx->pc = 0x25ED84u;
            goto label_25ed84;
        }
    }
    ctx->pc = 0x25ED7Cu;
    // 0x25ed7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED7Cu;
    {
        const bool branch_taken_0x25ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED7Cu;
            // 0x25ed80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed7c) {
            ctx->pc = 0x25ED8Cu;
            goto label_25ed8c;
        }
    }
    ctx->pc = 0x25ED84u;
label_25ed84:
    // 0x25ed84: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x25ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x25ed88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ed8c:
    // 0x25ed8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ed90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ed90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ed94: 0x3e00008  jr          $ra
    ctx->pc = 0x25ED94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ED94u;
            // 0x25ed98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25ED9Cu;
}
