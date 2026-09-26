#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNumStackOverBoard__16CUserDataManagerFv
// Address: 0x19db80 - 0x19dc28
void GetNumStackOverBoard__16CUserDataManagerFv_0x19db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNumStackOverBoard__16CUserDataManagerFv_0x19db80");
#endif

    switch (ctx->pc) {
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbb4u: goto label_19dbb4;
        case 0x19dbc4u: goto label_19dbc4;
        case 0x19dbd0u: goto label_19dbd0;
        case 0x19dbf8u: goto label_19dbf8;
        default: break;
    }

    ctx->pc = 0x19db80u;

    // 0x19db80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19db84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19db88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19db8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19db90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19db90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19db98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19dba0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19DBA0u;
    SET_GPR_U32(ctx, 31, 0x19DBA8u);
    ctx->pc = 0x19DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBA0u;
            // 0x19dba4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBA8u; }
        if (ctx->pc != 0x19DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBA8u; }
        if (ctx->pc != 0x19DBA8u) { return; }
    }
    ctx->pc = 0x19DBA8u;
label_19dba8:
    // 0x19dba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbac: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19DBACu;
    SET_GPR_U32(ctx, 31, 0x19DBB4u);
    ctx->pc = 0x19DBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBACu;
            // 0x19dbb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBB4u; }
        if (ctx->pc != 0x19DBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBB4u; }
        if (ctx->pc != 0x19DBB4u) { return; }
    }
    ctx->pc = 0x19DBB4u;
label_19dbb4:
    // 0x19dbb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19dbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19dbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbbc: 0xc0670c4  jal         func_19C310
    ctx->pc = 0x19DBBCu;
    SET_GPR_U32(ctx, 31, 0x19DBC4u);
    ctx->pc = 0x19DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBBCu;
            // 0x19dbc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    if (runtime->hasFunction(0x19C310u)) {
        auto targetFn = runtime->lookupFunction(0x19C310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBC4u; }
        if (ctx->pc != 0x19DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBC4u; }
        if (ctx->pc != 0x19DBC4u) { return; }
    }
    ctx->pc = 0x19DBC4u;
label_19dbc4:
    // 0x19dbc4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19dbc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19dbc8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19DBC8u;
    {
        const bool branch_taken_0x19dbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dbc8) {
            ctx->pc = 0x19DC04u;
            goto label_19dc04;
        }
    }
    ctx->pc = 0x19DBD0u;
label_19dbd0:
    // 0x19dbd0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x19dbd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19dbd4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19dbd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19dbd8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DBD8u;
    {
        const bool branch_taken_0x19dbd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dbd8) {
            ctx->pc = 0x19DBE4u;
            goto label_19dbe4;
        }
    }
    ctx->pc = 0x19DBE0u;
    // 0x19dbe0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19dbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19dbe4:
    // 0x19dbe4: 0x0  nop
    ctx->pc = 0x19dbe4u;
    // NOP
    // 0x19dbe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19dbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19dbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19dbf0: 0xc0670c4  jal         func_19C310
    ctx->pc = 0x19DBF0u;
    SET_GPR_U32(ctx, 31, 0x19DBF8u);
    ctx->pc = 0x19DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBF0u;
            // 0x19dbf4: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    if (runtime->hasFunction(0x19C310u)) {
        auto targetFn = runtime->lookupFunction(0x19C310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBF8u; }
        if (ctx->pc != 0x19DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBF8u; }
        if (ctx->pc != 0x19DBF8u) { return; }
    }
    ctx->pc = 0x19DBF8u;
label_19dbf8:
    // 0x19dbf8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19dbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19dbfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19DBFCu;
    {
        const bool branch_taken_0x19dbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dbfc) {
            ctx->pc = 0x19DBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19dbd0;
        }
    }
    ctx->pc = 0x19DC04u;
label_19dc04:
    // 0x19dc04: 0x0  nop
    ctx->pc = 0x19dc04u;
    // NOP
    // 0x19dc08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19dc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19dc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19dc10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19dc10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dc14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19dc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19dc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc20: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC20u;
            // 0x19dc24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DC28u;
}
