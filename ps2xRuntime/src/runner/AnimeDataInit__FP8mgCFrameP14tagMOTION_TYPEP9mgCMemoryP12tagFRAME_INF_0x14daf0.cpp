#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryP12tagFRAME_INF
// Address: 0x14daf0 - 0x14de4c
void AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryP12tagFRAME_INF_0x14daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryP12tagFRAME_INF_0x14daf0");
#endif

    switch (ctx->pc) {
        case 0x14db28u: goto label_14db28;
        case 0x14db3cu: goto label_14db3c;
        case 0x14db48u: goto label_14db48;
        case 0x14db98u: goto label_14db98;
        case 0x14dbbcu: goto label_14dbbc;
        case 0x14dbc8u: goto label_14dbc8;
        case 0x14dc1cu: goto label_14dc1c;
        case 0x14dc44u: goto label_14dc44;
        case 0x14dc74u: goto label_14dc74;
        case 0x14dcccu: goto label_14dccc;
        case 0x14dcecu: goto label_14dcec;
        case 0x14dcf8u: goto label_14dcf8;
        case 0x14dd34u: goto label_14dd34;
        case 0x14dd44u: goto label_14dd44;
        case 0x14dd68u: goto label_14dd68;
        default: break;
    }

    ctx->pc = 0x14daf0u;

    // 0x14daf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14daf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14daf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14dafc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14db00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14db04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14db08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14db0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14db10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14db10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14db18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14db18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db1c: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x14db1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14db20: 0xc04daa0  jal         func_136A80
    ctx->pc = 0x14DB20u;
    SET_GPR_U32(ctx, 31, 0x14DB28u);
    ctx->pc = 0x14DB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB20u;
            // 0x14db24: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136A80u;
    if (runtime->hasFunction(0x136A80u)) {
        auto targetFn = runtime->lookupFunction(0x136A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB28u; }
        if (ctx->pc != 0x14DB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrameNum__8mgCFrameFv_0x136a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB28u; }
        if (ctx->pc != 0x14DB28u) { return; }
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14db28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db2c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x14db2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x14db30: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x14DB30u;
    {
        const bool branch_taken_0x14db30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB30u;
            // 0x14db34: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db30) {
            ctx->pc = 0x14DB90u;
            goto label_14db90;
        }
    }
    ctx->pc = 0x14DB38u;
    // 0x14db38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14db38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14db3c:
    // 0x14db3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db40: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14DB40u;
    SET_GPR_U32(ctx, 31, 0x14DB48u);
    ctx->pc = 0x14DB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB40u;
            // 0x14db44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB48u; }
        if (ctx->pc != 0x14DB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB48u; }
        if (ctx->pc != 0x14DB48u) { return; }
    }
    ctx->pc = 0x14DB48u;
label_14db48:
    // 0x14db48: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x14db48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x14db4c: 0x2162821  addu        $a1, $s0, $s6
    ctx->pc = 0x14db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x14db50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14db50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14db54: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x14db54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x14db58: 0x3c027878  lui         $v0, 0x7878
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30840 << 16));
    // 0x14db5c: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x14db60: 0x34437879  ori         $v1, $v0, 0x7879
    ctx->pc = 0x14db60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30841);
    // 0x14db64: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14db64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14db68: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x14db68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x14db6c: 0x0  nop
    ctx->pc = 0x14db6cu;
    // NOP
    // 0x14db70: 0x1810  mfhi        $v1
    ctx->pc = 0x14db70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14db74: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x14db74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14db78: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x14db78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x14db7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14db80: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14db80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14db84: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x14db84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x14db88: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14DB88u;
    {
        const bool branch_taken_0x14db88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB88u;
            // 0x14db8c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db88) {
            ctx->pc = 0x14DB3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14db3c;
        }
    }
    ctx->pc = 0x14DB90u;
label_14db90:
    // 0x14db90: 0x126000a2  beqz        $s3, . + 4 + (0xA2 << 2)
    ctx->pc = 0x14DB90u;
    {
        const bool branch_taken_0x14db90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db90) {
            ctx->pc = 0x14DE1Cu;
            goto label_14de1c;
        }
    }
    ctx->pc = 0x14DB98u;
label_14db98:
    // 0x14db98: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14db9c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14dba0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBA0u;
    {
        const bool branch_taken_0x14dba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBA0u;
            // 0x14dba4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dba0) {
            ctx->pc = 0x14DBB0u;
            goto label_14dbb0;
        }
    }
    ctx->pc = 0x14DBA8u;
    // 0x14dba8: 0x14620098  bne         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x14DBA8u;
    {
        const bool branch_taken_0x14dba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dba8) {
            ctx->pc = 0x14DE0Cu;
            goto label_14de0c;
        }
    }
    ctx->pc = 0x14DBB0u;
label_14dbb0:
    // 0x14dbb0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14dbb4: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14DBB4u;
    SET_GPR_U32(ctx, 31, 0x14DBBCu);
    ctx->pc = 0x14DBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBB4u;
            // 0x14dbb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBBCu; }
        if (ctx->pc != 0x14DBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBBCu; }
        if (ctx->pc != 0x14DBBCu) { return; }
    }
    ctx->pc = 0x14DBBCu;
label_14dbbc:
    // 0x14dbbc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dbc0: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14DBC0u;
    SET_GPR_U32(ctx, 31, 0x14DBC8u);
    ctx->pc = 0x14DBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBC0u;
            // 0x14dbc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBC8u; }
        if (ctx->pc != 0x14DBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBC8u; }
        if (ctx->pc != 0x14DBC8u) { return; }
    }
    ctx->pc = 0x14DBC8u;
label_14dbc8:
    // 0x14dbc8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dbcc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14dbd0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dbd4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14dbd8: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x14DBD8u;
    {
        const bool branch_taken_0x14dbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dbd8) {
            ctx->pc = 0x14DE0Cu;
            goto label_14de0c;
        }
    }
    ctx->pc = 0x14DBE0u;
    // 0x14dbe0: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x14DBE0u;
    {
        const bool branch_taken_0x14dbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbe0) {
            ctx->pc = 0x14DE0Cu;
            goto label_14de0c;
        }
    }
    ctx->pc = 0x14DBE8u;
    // 0x14dbe8: 0x8c5400f8  lw          $s4, 0xF8($v0)
    ctx->pc = 0x14dbe8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x14dbec: 0x12800087  beqz        $s4, . + 4 + (0x87 << 2)
    ctx->pc = 0x14DBECu;
    {
        const bool branch_taken_0x14dbec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbec) {
            ctx->pc = 0x14DE0Cu;
            goto label_14de0c;
        }
    }
    ctx->pc = 0x14DBF4u;
    // 0x14dbf4: 0x12800085  beqz        $s4, . + 4 + (0x85 << 2)
    ctx->pc = 0x14DBF4u;
    {
        const bool branch_taken_0x14dbf4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbf4) {
            ctx->pc = 0x14DE0Cu;
            goto label_14de0c;
        }
    }
    ctx->pc = 0x14DBFCu;
    // 0x14dbfc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14dc00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14dc04: 0x8e950030  lw          $s5, 0x30($s4)
    ctx->pc = 0x14dc04u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14dc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc0c: 0x8e960034  lw          $s6, 0x34($s4)
    ctx->pc = 0x14dc0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x14dc10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14dc14: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14DC14u;
    SET_GPR_U32(ctx, 31, 0x14DC1Cu);
    ctx->pc = 0x14DC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC14u;
            // 0x14dc18: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC1Cu; }
        if (ctx->pc != 0x14DC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC1Cu; }
        if (ctx->pc != 0x14DC1Cu) { return; }
    }
    ctx->pc = 0x14DC1Cu;
label_14dc1c:
    // 0x14dc1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dc20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14dc28: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dc2c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x14dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x14dc30: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14dc34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14dc38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14dc3c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14DC3Cu;
    SET_GPR_U32(ctx, 31, 0x14DC44u);
    ctx->pc = 0x14DC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC3Cu;
            // 0x14dc40: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC44u; }
        if (ctx->pc != 0x14DC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC44u; }
        if (ctx->pc != 0x14DC44u) { return; }
    }
    ctx->pc = 0x14DC44u;
label_14dc44:
    // 0x14dc44: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dc48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14dc50: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dc54: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x14dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x14dc58: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x14dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14dc5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14dc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dc64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14dc68: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x14dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14dc6c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14DC6Cu;
    SET_GPR_U32(ctx, 31, 0x14DC74u);
    ctx->pc = 0x14DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC6Cu;
            // 0x14dc70: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC74u; }
        if (ctx->pc != 0x14DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC74u; }
        if (ctx->pc != 0x14DC74u) { return; }
    }
    ctx->pc = 0x14DC74u;
label_14dc74:
    // 0x14dc74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dc78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14dc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14dc80: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dc84: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x14dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x14dc88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dc8c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x14dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14dc90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14dc94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14dc98: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14dc9c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dca0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x14dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14dca4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14dca8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14dcac: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x14dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x14dcb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dcb4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14dcb8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14dcbc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dcc0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x14dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14dcc4: 0xc049c18  jal         func_127060
    ctx->pc = 0x14DCC4u;
    SET_GPR_U32(ctx, 31, 0x14DCCCu);
    ctx->pc = 0x14DCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCC4u;
            // 0x14dcc8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCCCu; }
        if (ctx->pc != 0x14DCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCCCu; }
        if (ctx->pc != 0x14DCCCu) { return; }
    }
    ctx->pc = 0x14DCCCu;
label_14dccc:
    // 0x14dccc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dcd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14dcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcd4: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x14dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14dcd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14dcdc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14dce0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x14dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14dce4: 0xc049c18  jal         func_127060
    ctx->pc = 0x14DCE4u;
    SET_GPR_U32(ctx, 31, 0x14DCECu);
    ctx->pc = 0x14DCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCE4u;
            // 0x14dce8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCECu; }
        if (ctx->pc != 0x14DCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCECu; }
        if (ctx->pc != 0x14DCECu) { return; }
    }
    ctx->pc = 0x14DCECu;
label_14dcec:
    // 0x14dcec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14dcecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14DCF0u;
    {
        const bool branch_taken_0x14dcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCF0u;
            // 0x14dcf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcf0) {
            ctx->pc = 0x14DD18u;
            goto label_14dd18;
        }
    }
    ctx->pc = 0x14DCF8u;
label_14dcf8:
    // 0x14dcf8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dcfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dd00: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14dd04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14dd08: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14dd0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14dd10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14dd14: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_14dd18:
    // 0x14dd18: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14dd1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14dd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14dd20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DD20u;
    {
        const bool branch_taken_0x14dd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dd20) {
            ctx->pc = 0x14DCF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14dcf8;
        }
    }
    ctx->pc = 0x14DD28u;
    // 0x14dd28: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x14dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x14dd2c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x14DD2Cu;
    {
        const bool branch_taken_0x14dd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd2c) {
            ctx->pc = 0x14DE0Cu;
            goto label_14de0c;
        }
    }
    ctx->pc = 0x14DD34u;
label_14dd34:
    // 0x14dd34: 0x0  nop
    ctx->pc = 0x14dd34u;
    // NOP
    // 0x14dd38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14dd3c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x14DD3Cu;
    {
        const bool branch_taken_0x14dd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd3c) {
            ctx->pc = 0x14DDFCu;
            goto label_14ddfc;
        }
    }
    ctx->pc = 0x14DD44u;
label_14dd44:
    // 0x14dd44: 0x0  nop
    ctx->pc = 0x14dd44u;
    // NOP
    // 0x14dd48: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14dd4c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x14dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x14dd50: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x14dd50u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dd54: 0x30c60200  andi        $a2, $a2, 0x200
    ctx->pc = 0x14dd54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14dd58: 0x14c00028  bnez        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x14DD58u;
    {
        const bool branch_taken_0x14dd58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD58u;
            // 0x14dd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd58) {
            ctx->pc = 0x14DDFCu;
            goto label_14ddfc;
        }
    }
    ctx->pc = 0x14DD60u;
    // 0x14dd60: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x14DD60u;
    {
        const bool branch_taken_0x14dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd60) {
            ctx->pc = 0x14DDE0u;
            goto label_14dde0;
        }
    }
    ctx->pc = 0x14DD68u;
label_14dd68:
    // 0x14dd68: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x14dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14dd6c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x14dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14dd70: 0x84680002  lh          $t0, 0x2($v1)
    ctx->pc = 0x14dd70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14dd74: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x14dd74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dd78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14dd7c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x14dd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14dd80: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x14dd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x14dd84: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x14dd84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14dd88: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x14dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14dd8c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x14dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x14dd90: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dd94: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x14dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x14dd98: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x14dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x14dd9c: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x14dd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14dda0: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x14dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14dda4: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x14dda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x14dda8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x14dda8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14ddac: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x14ddacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14ddb0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ddb4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14ddb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14ddb8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x14ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14ddbc: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x14ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
    // 0x14ddc0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x14ddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ddc4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x14ddc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14ddc8: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x14ddc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x14ddcc: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x14ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14ddd0: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x14ddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14ddd4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14ddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ddd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14ddd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14dddc: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x14dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_14dde0:
    // 0x14dde0: 0x84660006  lh          $a2, 0x6($v1)
    ctx->pc = 0x14dde0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x14dde4: 0xa6302a  slt         $a2, $a1, $a2
    ctx->pc = 0x14dde4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14dde8: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x14DDE8u;
    {
        const bool branch_taken_0x14dde8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dde8) {
            ctx->pc = 0x14DD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14dd68;
        }
    }
    ctx->pc = 0x14DDF0u;
    // 0x14ddf0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14ddf4: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14DDF4u;
    {
        const bool branch_taken_0x14ddf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ddf4) {
            ctx->pc = 0x14DD44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14dd44;
        }
    }
    ctx->pc = 0x14DDFCu;
label_14ddfc:
    // 0x14ddfc: 0x0  nop
    ctx->pc = 0x14ddfcu;
    // NOP
    // 0x14de00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14de04: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x14DE04u;
    {
        const bool branch_taken_0x14de04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de04) {
            ctx->pc = 0x14DD34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14dd34;
        }
    }
    ctx->pc = 0x14DE0Cu;
label_14de0c:
    // 0x14de0c: 0x0  nop
    ctx->pc = 0x14de0cu;
    // NOP
    // 0x14de10: 0x8e730018  lw          $s3, 0x18($s3)
    ctx->pc = 0x14de10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14de14: 0x1660ff60  bnez        $s3, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x14DE14u;
    {
        const bool branch_taken_0x14de14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de14) {
            ctx->pc = 0x14DB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14db98;
        }
    }
    ctx->pc = 0x14DE1Cu;
label_14de1c:
    // 0x14de1c: 0x0  nop
    ctx->pc = 0x14de1cu;
    // NOP
    // 0x14de20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14de20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14de24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14de24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14de28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14de2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14de2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14de30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14de30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14de34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14de34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14de38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14de38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14de3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14de3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14de40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14de40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de44: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE44u;
            // 0x14de48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DE4Cu;
}
