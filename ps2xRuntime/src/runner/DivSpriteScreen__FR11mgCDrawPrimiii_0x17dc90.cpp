#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DivSpriteScreen__FR11mgCDrawPrimiii
// Address: 0x17dc90 - 0x17dec4
void DivSpriteScreen__FR11mgCDrawPrimiii_0x17dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DivSpriteScreen__FR11mgCDrawPrimiii_0x17dc90");
#endif

    switch (ctx->pc) {
        case 0x17dce0u: goto label_17dce0;
        case 0x17dd58u: goto label_17dd58;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddecu: goto label_17ddec;
        case 0x17de50u: goto label_17de50;
        case 0x17de7cu: goto label_17de7c;
        case 0x17de94u: goto label_17de94;
        default: break;
    }

    ctx->pc = 0x17dc90u;

    // 0x17dc90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17dc94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x17dc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dc98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17dc9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17dca0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17dca4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17dca8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17dcac: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x17dcacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17dcb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17dcb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17dcbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dcc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17dcc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17dcc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17dccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17dcccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcd0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17dcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17dcd8: 0xc04d224  jal         func_134890
    ctx->pc = 0x17DCD8u;
    SET_GPR_U32(ctx, 31, 0x17DCE0u);
    ctx->pc = 0x17DCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCD8u;
            // 0x17dcdc: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134890u;
    if (runtime->hasFunction(0x134890u)) {
        auto targetFn = runtime->lookupFunction(0x134890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCE0u; }
        if (ctx->pc != 0x17DCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCE0u; }
        if (ctx->pc != 0x17DCE0u) { return; }
    }
    ctx->pc = 0x17DCE0u;
label_17dce0:
    // 0x17dce0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17dce4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x17dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17dce8: 0x24420780  addiu       $v0, $v0, 0x780
    ctx->pc = 0x17dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x17dcec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17dcecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dcf0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17dcf4: 0x8f848798  lw          $a0, -0x7868($gp)
    ctx->pc = 0x17dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17dcf8: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17dcfc: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x17dd00: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17dd04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17dd08: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x17dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x17dd0c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x17dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x17dd10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DD10u;
    {
        const bool branch_taken_0x17dd10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD10u;
            // 0x17dd14: 0x2f103  sra         $fp, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd10) {
            ctx->pc = 0x17DD20u;
            goto label_17dd20;
        }
    }
    ctx->pc = 0x17DD18u;
    // 0x17dd18: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x17dd1c: 0x2f103  sra         $fp, $v0, 4
    ctx->pc = 0x17dd1cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 4));
label_17dd20:
    // 0x17dd20: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17dd24: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17dd28: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x17dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x17dd2c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17dd30: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17dd30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dd34: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x17dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x17dd38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17dd38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17dd40: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x17dd40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x17dd44: 0x244207a0  addiu       $v0, $v0, 0x7A0
    ctx->pc = 0x17dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
    // 0x17dd48: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17dd48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dd4c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x17dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x17dd50: 0xdf828030  ld          $v0, -0x7FD0($gp)
    ctx->pc = 0x17dd50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x17dd54: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x17dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_17dd58:
    // 0x17dd58: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x17DD58u;
    {
        const bool branch_taken_0x17dd58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD58u;
            // 0x17dd5c: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd58) {
            ctx->pc = 0x17DD88u;
            goto label_17dd88;
        }
    }
    ctx->pc = 0x17DD60u;
    // 0x17dd60: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DD60u;
    {
        const bool branch_taken_0x17dd60 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x17DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD60u;
            // 0x17dd64: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd60) {
            ctx->pc = 0x17DD74u;
            goto label_17dd74;
        }
    }
    ctx->pc = 0x17DD68u;
    // 0x17dd68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DD68u;
    {
        const bool branch_taken_0x17dd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd68) {
            ctx->pc = 0x17DD74u;
            goto label_17dd74;
        }
    }
    ctx->pc = 0x17DD70u;
    // 0x17dd70: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_17dd74:
    // 0x17dd74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17dd78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17dd7c: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x17dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x17dd80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17dd84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17dd88:
    // 0x17dd88: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x17dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x17dd8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17dd90: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DD90u;
    {
        const bool branch_taken_0x17dd90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17dd90) {
            ctx->pc = 0x17DD9Cu;
            goto label_17dd9c;
        }
    }
    ctx->pc = 0x17DD98u;
    // 0x17dd98: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x17dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_17dd9c:
    // 0x17dd9c: 0x0  nop
    ctx->pc = 0x17dd9cu;
    // NOP
    // 0x17dda0: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x17dda4: 0x27e1018  mult        $v0, $s3, $fp
    ctx->pc = 0x17dda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17dda8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17dda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddac: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17ddb0: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17ddb4: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DDB4u;
    SET_GPR_U32(ctx, 31, 0x17DDBCu);
    ctx->pc = 0x17DDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDB4u;
            // 0x17ddb8: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDBCu; }
        if (ctx->pc != 0x17DDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDBCu; }
        if (ctx->pc != 0x17DDBCu) { return; }
    }
    ctx->pc = 0x17DDBCu;
label_17ddbc:
    // 0x17ddbc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ddc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ddc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ddc8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17ddcc: 0x8fb500a4  lw          $s5, 0xA4($sp)
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x17ddd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ddd4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x17ddd8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17dddc: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x17dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17dde0: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x17dde4: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DDE4u;
    SET_GPR_U32(ctx, 31, 0x17DDECu);
    ctx->pc = 0x17DDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDE4u;
            // 0x17dde8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDECu; }
        if (ctx->pc != 0x17DDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDECu; }
        if (ctx->pc != 0x17DDECu) { return; }
    }
    ctx->pc = 0x17DDECu;
label_17ddec:
    // 0x17ddec: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x17DDECu;
    {
        const bool branch_taken_0x17ddec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDECu;
            // 0x17ddf0: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddec) {
            ctx->pc = 0x17DE24u;
            goto label_17de24;
        }
    }
    ctx->pc = 0x17DDF4u;
    // 0x17ddf4: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DDF4u;
    {
        const bool branch_taken_0x17ddf4 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x17ddf4) {
            ctx->pc = 0x17DE08u;
            goto label_17de08;
        }
    }
    ctx->pc = 0x17DDFCu;
    // 0x17ddfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DDFCu;
    {
        const bool branch_taken_0x17ddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ddfc) {
            ctx->pc = 0x17DE08u;
            goto label_17de08;
        }
    }
    ctx->pc = 0x17DE04u;
    // 0x17de04: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x17de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_17de08:
    // 0x17de08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17de0c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17de10: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x17de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x17de14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17de18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17de18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17de1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17DE1Cu;
    {
        const bool branch_taken_0x17de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE1Cu;
            // 0x17de20: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de1c) {
            ctx->pc = 0x17DE30u;
            goto label_17de30;
        }
    }
    ctx->pc = 0x17DE24u;
label_17de24:
    // 0x17de24: 0x0  nop
    ctx->pc = 0x17de24u;
    // NOP
    // 0x17de28: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17de2c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x17de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_17de30:
    // 0x17de30: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17de34: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE34u;
    {
        const bool branch_taken_0x17de34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17de34) {
            ctx->pc = 0x17DE40u;
            goto label_17de40;
        }
    }
    ctx->pc = 0x17DE3Cu;
    // 0x17de3c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x17de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_17de40:
    // 0x17de40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17de40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de44: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x17de44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17de48: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DE48u;
    SET_GPR_U32(ctx, 31, 0x17DE50u);
    ctx->pc = 0x17DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE48u;
            // 0x17de4c: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE50u; }
        if (ctx->pc != 0x17DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE50u; }
        if (ctx->pc != 0x17DE50u) { return; }
    }
    ctx->pc = 0x17DE50u;
label_17de50:
    // 0x17de50: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17de54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17de5c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17de60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17de64: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17de64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x17de68: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x17de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17de6c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x17de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17de70: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x17de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x17de74: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x17DE74u;
    SET_GPR_U32(ctx, 31, 0x17DE7Cu);
    ctx->pc = 0x17DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE74u;
            // 0x17de78: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE7Cu; }
        if (ctx->pc != 0x17DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE7Cu; }
        if (ctx->pc != 0x17DE7Cu) { return; }
    }
    ctx->pc = 0x17DE7Cu;
label_17de7c:
    // 0x17de7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17de7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17de80: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x17de80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x17de84: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x17DE84u;
    {
        const bool branch_taken_0x17de84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE84u;
            // 0x17de88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de84) {
            ctx->pc = 0x17DD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17dd58;
        }
    }
    ctx->pc = 0x17DE8Cu;
    // 0x17de8c: 0xc04d250  jal         func_134940
    ctx->pc = 0x17DE8Cu;
    SET_GPR_U32(ctx, 31, 0x17DE94u);
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE94u; }
        if (ctx->pc != 0x17DE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE94u; }
        if (ctx->pc != 0x17DE94u) { return; }
    }
    ctx->pc = 0x17DE94u;
label_17de94:
    // 0x17de94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17de98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17de98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17de9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17de9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17dea0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17dea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17dea4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17dea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17dea8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17dea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17deac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17deacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17deb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17deb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17deb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17deb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17deb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17deb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17debc: 0x3e00008  jr          $ra
    ctx->pc = 0x17DEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEBCu;
            // 0x17dec0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DEC4u;
}
