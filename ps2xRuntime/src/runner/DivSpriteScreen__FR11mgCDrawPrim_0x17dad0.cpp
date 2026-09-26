#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DivSpriteScreen__FR11mgCDrawPrim
// Address: 0x17dad0 - 0x17dc8c
void DivSpriteScreen__FR11mgCDrawPrim_0x17dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DivSpriteScreen__FR11mgCDrawPrim_0x17dad0");
#endif

    switch (ctx->pc) {
        case 0x17db10u: goto label_17db10;
        case 0x17db70u: goto label_17db70;
        case 0x17db78u: goto label_17db78;
        case 0x17dba0u: goto label_17dba0;
        case 0x17dbd4u: goto label_17dbd4;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dc24u: goto label_17dc24;
        case 0x17dc60u: goto label_17dc60;
        default: break;
    }

    ctx->pc = 0x17dad0u;

    // 0x17dad0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17dad4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17dad8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17dadc: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x17dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x17dae0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17dae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17dae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dae8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17daec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x17daecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17daf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17daf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17daf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17daf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17dafc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17dafcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17db04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17db08: 0xc04d224  jal         func_134890
    ctx->pc = 0x17DB08u;
    SET_GPR_U32(ctx, 31, 0x17DB10u);
    ctx->pc = 0x17DB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB08u;
            // 0x17db0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134890u;
    if (runtime->hasFunction(0x134890u)) {
        auto targetFn = runtime->lookupFunction(0x134890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        if (ctx->pc != 0x17DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        if (ctx->pc != 0x17DB10u) { return; }
    }
    ctx->pc = 0x17DB10u;
label_17db10:
    // 0x17db10: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17db14: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x17db14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x17db18: 0x24420750  addiu       $v0, $v0, 0x750
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x17db1c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17db20: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17db20u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17db24: 0x24840760  addiu       $a0, $a0, 0x760
    ctx->pc = 0x17db24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
    // 0x17db28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17db2c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17db30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17db30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17db34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db38: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x17db38u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x17db3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17db40: 0x8f878798  lw          $a3, -0x7868($gp)
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17db44: 0x24420770  addiu       $v0, $v0, 0x770
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    // 0x17db48: 0x8f86879c  lw          $a2, -0x7864($gp)
    ctx->pc = 0x17db48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17db4c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x17db4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x17db50: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17db54: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x17db54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x17db58: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x17db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    // 0x17db5c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x17db5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17db60: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x17db60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x17db64: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17db64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17db68: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x17DB68u;
    {
        const bool branch_taken_0x17db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB68u;
            // 0x17db6c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db68) {
            ctx->pc = 0x17DC48u;
            goto label_17dc48;
        }
    }
    ctx->pc = 0x17DB70u;
label_17db70:
    // 0x17db70: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x17DB70u;
    {
        const bool branch_taken_0x17db70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB70u;
            // 0x17db74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db70) {
            ctx->pc = 0x17DC2Cu;
            goto label_17dc2c;
        }
    }
    ctx->pc = 0x17DB78u;
label_17db78:
    // 0x17db78: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17db7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17db7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17db80: 0x27b300b4  addiu       $s3, $sp, 0xB4
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x17db84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db88: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17db8c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17db90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17db90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17db94: 0xafb700b0  sw          $s7, 0xB0($sp)
    ctx->pc = 0x17db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 23));
    // 0x17db98: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DB98u;
    SET_GPR_U32(ctx, 31, 0x17DBA0u);
    ctx->pc = 0x17DB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB98u;
            // 0x17db9c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBA0u; }
        if (ctx->pc != 0x17DBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBA0u; }
        if (ctx->pc != 0x17DBA0u) { return; }
    }
    ctx->pc = 0x17DBA0u;
label_17dba0:
    // 0x17dba0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17dba4: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x17dba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x17dba8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17dbac: 0x27b500a4  addiu       $s5, $sp, 0xA4
    ctx->pc = 0x17dbacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x17dbb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbb4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17dbb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17dbbc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x17dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x17dbc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17dbc4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x17dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17dbc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17dbcc: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DBCCu;
    SET_GPR_U32(ctx, 31, 0x17DBD4u);
    ctx->pc = 0x17DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBCCu;
            // 0x17dbd0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBD4u; }
        if (ctx->pc != 0x17DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBD4u; }
        if (ctx->pc != 0x17DBD4u) { return; }
    }
    ctx->pc = 0x17DBD4u;
label_17dbd4:
    // 0x17dbd4: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17dbd8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x17dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17dbdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17dbe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17dbe4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x17dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x17dbe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17dbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17dbf0: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DBF0u;
    SET_GPR_U32(ctx, 31, 0x17DBF8u);
    ctx->pc = 0x17DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBF0u;
            // 0x17dbf4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBF8u; }
        if (ctx->pc != 0x17DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBF8u; }
        if (ctx->pc != 0x17DBF8u) { return; }
    }
    ctx->pc = 0x17DBF8u;
label_17dbf8:
    // 0x17dbf8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17dbfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17dc04: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17dc08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17dc0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x17dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x17dc10: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17dc14: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17dc18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17dc1c: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DC1Cu;
    SET_GPR_U32(ctx, 31, 0x17DC24u);
    ctx->pc = 0x17DC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC1Cu;
            // 0x17dc20: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC24u; }
        if (ctx->pc != 0x17DC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC24u; }
        if (ctx->pc != 0x17DC24u) { return; }
    }
    ctx->pc = 0x17DC24u;
label_17dc24:
    // 0x17dc24: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x17dc28: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x17dc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_17dc2c:
    // 0x17dc2c: 0x0  nop
    ctx->pc = 0x17dc2cu;
    // NOP
    // 0x17dc30: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x17dc34: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17dc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17dc38: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x17DC38u;
    {
        const bool branch_taken_0x17dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc38) {
            ctx->pc = 0x17DB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17db78;
        }
    }
    ctx->pc = 0x17DC40u;
    // 0x17dc40: 0x26f70400  addiu       $s7, $s7, 0x400
    ctx->pc = 0x17dc40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
    // 0x17dc44: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17dc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_17dc48:
    // 0x17dc48: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x17dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x17dc4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17dc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17dc50: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x17DC50u;
    {
        const bool branch_taken_0x17dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC50u;
            // 0x17dc54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc50) {
            ctx->pc = 0x17DB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17db70;
        }
    }
    ctx->pc = 0x17DC58u;
    // 0x17dc58: 0xc04d250  jal         func_134940
    ctx->pc = 0x17DC58u;
    SET_GPR_U32(ctx, 31, 0x17DC60u);
    ctx->pc = 0x17DC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC58u;
            // 0x17dc5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC60u; }
        if (ctx->pc != 0x17DC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC60u; }
        if (ctx->pc != 0x17DC60u) { return; }
    }
    ctx->pc = 0x17DC60u;
label_17dc60:
    // 0x17dc60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17dc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17dc64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17dc64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17dc68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17dc68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17dc6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17dc6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17dc70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17dc70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dc74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17dc74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dc78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dc78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17dc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x17DC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC84u;
            // 0x17dc88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DC8Cu;
}
