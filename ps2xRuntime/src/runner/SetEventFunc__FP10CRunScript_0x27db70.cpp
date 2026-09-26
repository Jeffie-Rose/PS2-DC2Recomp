#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEventFunc__FP10CRunScript
// Address: 0x27db70 - 0x27dcf4
void SetEventFunc__FP10CRunScript_0x27db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEventFunc__FP10CRunScript_0x27db70");
#endif

    switch (ctx->pc) {
        case 0x27db98u: goto label_27db98;
        case 0x27dbe0u: goto label_27dbe0;
        case 0x27dc08u: goto label_27dc08;
        case 0x27dc34u: goto label_27dc34;
        case 0x27dc54u: goto label_27dc54;
        case 0x27dc94u: goto label_27dc94;
        case 0x27dcdcu: goto label_27dcdc;
        default: break;
    }

    ctx->pc = 0x27db70u;

    // 0x27db70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27db74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27db74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27db7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27db80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27db84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27db84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27db8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db90: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x27db90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x27db94: 0x24632a90  addiu       $v1, $v1, 0x2A90
    ctx->pc = 0x27db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10896));
label_27db98:
    // 0x27db98: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x27db98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27db9c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27dba0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x27dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x27dba4: 0x288205d4  slti        $v0, $a0, 0x5D4
    ctx->pc = 0x27dba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1492) ? 1 : 0);
    // 0x27dba8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x27dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x27dbac: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27dbb0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x27dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x27dbb4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x27dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x27dbb8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x27dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x27dbbc: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x27dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x27dbc0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x27dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x27dbc4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27DBC4u;
    {
        const bool branch_taken_0x27dbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBC4u;
            // 0x27dbc8: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbc4) {
            ctx->pc = 0x27DB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27db98;
        }
    }
    ctx->pc = 0x27DBCCu;
    // 0x27dbcc: 0x288105dc  slti        $at, $a0, 0x5DC
    ctx->pc = 0x27dbccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1500) ? 1 : 0);
    // 0x27dbd0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x27DBD0u;
    {
        const bool branch_taken_0x27dbd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBD0u;
            // 0x27dbd4: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbd0) {
            ctx->pc = 0x27DC00u;
            goto label_27dc00;
        }
    }
    ctx->pc = 0x27DBD8u;
    // 0x27dbd8: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x27dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x27dbdc: 0x24632a90  addiu       $v1, $v1, 0x2A90
    ctx->pc = 0x27dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10896));
label_27dbe0:
    // 0x27dbe0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x27dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27dbe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27dbe8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27dbec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27dbf0: 0x288205dc  slti        $v0, $a0, 0x5DC
    ctx->pc = 0x27dbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1500) ? 1 : 0);
    // 0x27dbf4: 0x0  nop
    ctx->pc = 0x27dbf4u;
    // NOP
    // 0x27dbf8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27DBF8u;
    {
        const bool branch_taken_0x27dbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dbf8) {
            ctx->pc = 0x27DBE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dbe0;
        }
    }
    ctx->pc = 0x27DC00u;
label_27dc00:
    // 0x27dc00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27dc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27dc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dc08:
    // 0x27dc08: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x27dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x27dc0c: 0x24842860  addiu       $a0, $a0, 0x2860
    ctx->pc = 0x27dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10336));
    // 0x27dc10: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x27dc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27dc14: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x27dc14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27dc18: 0x1100002a  beqz        $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x27DC18u;
    {
        const bool branch_taken_0x27dc18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC18u;
            // 0x27dc1c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc18) {
            ctx->pc = 0x27DCC4u;
            goto label_27dcc4;
        }
    }
    ctx->pc = 0x27DC20u;
    // 0x27dc20: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DC20u;
    {
        const bool branch_taken_0x27dc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC20u;
            // 0x27dc24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc20) {
            ctx->pc = 0x27DC70u;
            goto label_27dc70;
        }
    }
    ctx->pc = 0x27DC28u;
    // 0x27dc28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27dc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc2c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x27dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27dc30: 0x0  nop
    ctx->pc = 0x27dc30u;
    // NOP
label_27dc34:
    // 0x27dc34: 0x0  nop
    ctx->pc = 0x27dc34u;
    // NOP
    // 0x27dc38: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x27dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x27dc3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27dc40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DC40u;
    {
        const bool branch_taken_0x27dc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dc40) {
            ctx->pc = 0x27DC5Cu;
            goto label_27dc5c;
        }
    }
    ctx->pc = 0x27DC48u;
    // 0x27dc48: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x27dc4c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x27DC4Cu;
    SET_GPR_U32(ctx, 31, 0x27DC54u);
    ctx->pc = 0x27DC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC4Cu;
            // 0x27dc50: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC54u; }
        if (ctx->pc != 0x27DC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC54u; }
        if (ctx->pc != 0x27DC54u) { return; }
    }
    ctx->pc = 0x27DC54u;
label_27dc54:
    // 0x27dc54: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x27DC54u;
    {
        const bool branch_taken_0x27dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc54) {
            ctx->pc = 0x27DC54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dc54;
        }
    }
    ctx->pc = 0x27DC5Cu;
label_27dc5c:
    // 0x27dc5c: 0x0  nop
    ctx->pc = 0x27dc5cu;
    // NOP
    // 0x27dc60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27dc64: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x27dc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27dc68: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x27DC68u;
    {
        const bool branch_taken_0x27dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC68u;
            // 0x27dc6c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc68) {
            ctx->pc = 0x27DC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dc34;
        }
    }
    ctx->pc = 0x27DC70u;
label_27dc70:
    // 0x27dc70: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x27dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27dc74: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DC74u;
    {
        const bool branch_taken_0x27dc74 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC74u;
            // 0x27dc78: 0x286205dc  slti        $v0, $v1, 0x5DC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc74) {
            ctx->pc = 0x27DC84u;
            goto label_27dc84;
        }
    }
    ctx->pc = 0x27DC7Cu;
    // 0x27dc7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27DC7Cu;
    {
        const bool branch_taken_0x27dc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc7c) {
            ctx->pc = 0x27DC9Cu;
            goto label_27dc9c;
        }
    }
    ctx->pc = 0x27DC84u;
label_27dc84:
    // 0x27dc84: 0x0  nop
    ctx->pc = 0x27dc84u;
    // NOP
    // 0x27dc88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x27dc8c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x27DC8Cu;
    SET_GPR_U32(ctx, 31, 0x27DC94u);
    ctx->pc = 0x27DC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC8Cu;
            // 0x27dc90: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC94u; }
        if (ctx->pc != 0x27DC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC94u; }
        if (ctx->pc != 0x27DC94u) { return; }
    }
    ctx->pc = 0x27DC94u;
label_27dc94:
    // 0x27dc94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27DC94u;
    {
        const bool branch_taken_0x27dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc94) {
            ctx->pc = 0x27DCB4u;
            goto label_27dcb4;
        }
    }
    ctx->pc = 0x27DC9Cu;
label_27dc9c:
    // 0x27dc9c: 0x0  nop
    ctx->pc = 0x27dc9cu;
    // NOP
    // 0x27dca0: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x27dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x27dca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dca8: 0x24422a90  addiu       $v0, $v0, 0x2A90
    ctx->pc = 0x27dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10896));
    // 0x27dcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dcb0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x27dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_27dcb4:
    // 0x27dcb4: 0x0  nop
    ctx->pc = 0x27dcb4u;
    // NOP
    // 0x27dcb8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x27dcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27dcbc: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x27DCBCu;
    {
        const bool branch_taken_0x27dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DCBCu;
            // 0x27dcc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcbc) {
            ctx->pc = 0x27DC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dc08;
        }
    }
    ctx->pc = 0x27DCC4u;
label_27dcc4:
    // 0x27dcc4: 0x0  nop
    ctx->pc = 0x27dcc4u;
    // NOP
    // 0x27dcc8: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x27dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x27dccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27dcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcd0: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x27dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x27dcd4: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x27DCD4u;
    SET_GPR_U32(ctx, 31, 0x27DCDCu);
    ctx->pc = 0x27DCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DCD4u;
            // 0x27dcd8: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (runtime->hasFunction(0x1871D0u)) {
        auto targetFn = runtime->lookupFunction(0x1871D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DCDCu; }
        if (ctx->pc != 0x27DCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DCDCu; }
        if (ctx->pc != 0x27DCDCu) { return; }
    }
    ctx->pc = 0x27DCDCu;
label_27dcdc:
    // 0x27dcdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27dcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27dce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27dce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27dce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27dce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27dce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dcec: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DCECu;
            // 0x27dcf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27DCF4u;
}
