#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSpectolFusion__14CBaseMenuClassFP13CGameDataUsediP16CMenuPosDataForm
// Address: 0x238c70 - 0x238ee8
void CheckSpectolFusion__14CBaseMenuClassFP13CGameDataUsediP16CMenuPosDataForm_0x238c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSpectolFusion__14CBaseMenuClassFP13CGameDataUsediP16CMenuPosDataForm_0x238c70");
#endif

    switch (ctx->pc) {
        case 0x238cb4u: goto label_238cb4;
        case 0x238cc0u: goto label_238cc0;
        case 0x238d10u: goto label_238d10;
        case 0x238d2cu: goto label_238d2c;
        case 0x238d3cu: goto label_238d3c;
        case 0x238d58u: goto label_238d58;
        case 0x238d68u: goto label_238d68;
        case 0x238d70u: goto label_238d70;
        case 0x238d7cu: goto label_238d7c;
        case 0x238d88u: goto label_238d88;
        case 0x238d94u: goto label_238d94;
        case 0x238da4u: goto label_238da4;
        case 0x238db4u: goto label_238db4;
        case 0x238dc4u: goto label_238dc4;
        case 0x238dd8u: goto label_238dd8;
        case 0x238df8u: goto label_238df8;
        case 0x238e08u: goto label_238e08;
        case 0x238e18u: goto label_238e18;
        case 0x238e38u: goto label_238e38;
        case 0x238e48u: goto label_238e48;
        case 0x238e54u: goto label_238e54;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e78u: goto label_238e78;
        case 0x238e98u: goto label_238e98;
        case 0x238eacu: goto label_238eac;
        case 0x238eb8u: goto label_238eb8;
        default: break;
    }

    ctx->pc = 0x238c70u;

    // 0x238c70: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x238c74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x238c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x238c78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x238c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x238c7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x238c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x238c80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x238c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x238c84: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x238c84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x238c8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x238c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x238c94: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x238c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238c9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x238c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238ca4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238ca8: 0x844400c2  lh          $a0, 0xC2($v0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x238cac: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x238CACu;
    SET_GPR_U32(ctx, 31, 0x238CB4u);
    ctx->pc = 0x238CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238CACu;
            // 0x238cb0: 0x245100c0  addiu       $s1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CB4u; }
        if (ctx->pc != 0x238CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CB4u; }
        if (ctx->pc != 0x238CB4u) { return; }
    }
    ctx->pc = 0x238CB4u;
label_238cb4:
    // 0x238cb4: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x238cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x238cb8: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x238CB8u;
    SET_GPR_U32(ctx, 31, 0x238CC0u);
    ctx->pc = 0x238CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238CB8u;
            // 0x238cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CC0u; }
        if (ctx->pc != 0x238CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CC0u; }
        if (ctx->pc != 0x238CC0u) { return; }
    }
    ctx->pc = 0x238CC0u;
label_238cc0:
    // 0x238cc0: 0x86760000  lh          $s6, 0x0($s3)
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x238cc4: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x238CC4u;
    {
        const bool branch_taken_0x238cc4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CC4u;
            // 0x238cc8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc4) {
            ctx->pc = 0x238CD4u;
            goto label_238cd4;
        }
    }
    ctx->pc = 0x238CCCu;
    // 0x238ccc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x238CCCu;
    {
        const bool branch_taken_0x238ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CCCu;
            // 0x238cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ccc) {
            ctx->pc = 0x238EC0u;
            goto label_238ec0;
        }
    }
    ctx->pc = 0x238CD4u;
label_238cd4:
    // 0x238cd4: 0x1602007a  bne         $s0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x238CD4u;
    {
        const bool branch_taken_0x238cd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x238CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CD4u;
            // 0x238cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd4) {
            ctx->pc = 0x238EC0u;
            goto label_238ec0;
        }
    }
    ctx->pc = 0x238CDCu;
    // 0x238cdc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ce4: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x238ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x238ce8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x238ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x238cec: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x238cecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x238cf0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x238cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x238cf4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x238cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x238cf8: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x238cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x238cfc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x238cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238d00: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x238d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238d04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238d08: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x238D08u;
    SET_GPR_U32(ctx, 31, 0x238D10u);
    ctx->pc = 0x238D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D08u;
            // 0x238d0c: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D10u; }
        if (ctx->pc != 0x238D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D10u; }
        if (ctx->pc != 0x238D10u) { return; }
    }
    ctx->pc = 0x238D10u;
label_238d10:
    // 0x238d10: 0xa7b20082  sh          $s2, 0x82($sp)
    ctx->pc = 0x238d10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 18));
    // 0x238d14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238d18: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x238d1c: 0x16c20050  bne         $s6, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x238D1Cu;
    {
        const bool branch_taken_0x238d1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D1Cu;
            // 0x238d20: 0xafb500f8  sw          $s5, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d1c) {
            ctx->pc = 0x238E60u;
            goto label_238e60;
        }
    }
    ctx->pc = 0x238D24u;
    // 0x238d24: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x238D24u;
    SET_GPR_U32(ctx, 31, 0x238D2Cu);
    ctx->pc = 0x238D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D24u;
            // 0x238d28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D2Cu; }
        if (ctx->pc != 0x238D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D2Cu; }
        if (ctx->pc != 0x238D2Cu) { return; }
    }
    ctx->pc = 0x238D2Cu;
label_238d2c:
    // 0x238d2c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x238D2Cu;
    {
        const bool branch_taken_0x238d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D2Cu;
            // 0x238d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d2c) {
            ctx->pc = 0x238E64u;
            goto label_238e64;
        }
    }
    ctx->pc = 0x238D34u;
    // 0x238d34: 0xc065f70  jal         func_197DC0
    ctx->pc = 0x238D34u;
    SET_GPR_U32(ctx, 31, 0x238D3Cu);
    ctx->pc = 0x238D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D34u;
            // 0x238d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DC0u;
    if (runtime->hasFunction(0x197DC0u)) {
        auto targetFn = runtime->lookupFunction(0x197DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D3Cu; }
        if (ctx->pc != 0x238D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemainFusion__13CGameDataUsedFv_0x197dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D3Cu; }
        if (ctx->pc != 0x238D3Cu) { return; }
    }
    ctx->pc = 0x238D3Cu;
label_238d3c:
    // 0x238d3c: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x238d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x238d40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x238d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238d44: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x238D44u;
    {
        const bool branch_taken_0x238d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D44u;
            // 0x238d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d44) {
            ctx->pc = 0x238E40u;
            goto label_238e40;
        }
    }
    ctx->pc = 0x238D4Cu;
    // 0x238d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x238d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d50: 0xc08e9f0  jal         func_23A7C0
    ctx->pc = 0x238D50u;
    SET_GPR_U32(ctx, 31, 0x238D58u);
    ctx->pc = 0x238D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D50u;
            // 0x238d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A7C0u;
    if (runtime->hasFunction(0x23A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x23A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D58u; }
        if (ctx->pc != 0x238D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed_0x23a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D58u; }
        if (ctx->pc != 0x238D58u) { return; }
    }
    ctx->pc = 0x238D58u;
label_238d58:
    // 0x238d58: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x238d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x238d5c: 0xafb100fc  sw          $s1, 0xFC($sp)
    ctx->pc = 0x238d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 17));
    // 0x238d60: 0xc065c24  jal         func_197090
    ctx->pc = 0x238D60u;
    SET_GPR_U32(ctx, 31, 0x238D68u);
    ctx->pc = 0x238D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D60u;
            // 0x238d64: 0xafb30100  sw          $s3, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D68u; }
        if (ctx->pc != 0x238D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D68u; }
        if (ctx->pc != 0x238D68u) { return; }
    }
    ctx->pc = 0x238D68u;
label_238d68:
    // 0x238d68: 0xc065c24  jal         func_197090
    ctx->pc = 0x238D68u;
    SET_GPR_U32(ctx, 31, 0x238D70u);
    ctx->pc = 0x238D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D68u;
            // 0x238d6c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D70u; }
        if (ctx->pc != 0x238D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D70u; }
        if (ctx->pc != 0x238D70u) { return; }
    }
    ctx->pc = 0x238D70u;
label_238d70:
    // 0x238d70: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x238d74: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x238D74u;
    SET_GPR_U32(ctx, 31, 0x238D7Cu);
    ctx->pc = 0x238D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D74u;
            // 0x238d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D7Cu; }
        if (ctx->pc != 0x238D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D7Cu; }
        if (ctx->pc != 0x238D7Cu) { return; }
    }
    ctx->pc = 0x238D7Cu;
label_238d7c:
    // 0x238d7c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x238d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x238d80: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x238D80u;
    SET_GPR_U32(ctx, 31, 0x238D88u);
    ctx->pc = 0x238D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D80u;
            // 0x238d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D88u; }
        if (ctx->pc != 0x238D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D88u; }
        if (ctx->pc != 0x238D88u) { return; }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x238d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x238d8c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x238D8Cu;
    SET_GPR_U32(ctx, 31, 0x238D94u);
    ctx->pc = 0x238D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D8Cu;
            // 0x238d90: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D94u; }
        if (ctx->pc != 0x238D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D94u; }
        if (ctx->pc != 0x238D94u) { return; }
    }
    ctx->pc = 0x238D94u;
label_238d94:
    // 0x238d94: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x238d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x238d98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x238d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d9c: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x238D9Cu;
    SET_GPR_U32(ctx, 31, 0x238DA4u);
    ctx->pc = 0x238DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D9Cu;
            // 0x238da0: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DA4u; }
        if (ctx->pc != 0x238DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DA4u; }
        if (ctx->pc != 0x238DA4u) { return; }
    }
    ctx->pc = 0x238DA4u;
label_238da4:
    // 0x238da4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x238da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x238da8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dac: 0xc08ea00  jal         func_23A800
    ctx->pc = 0x238DACu;
    SET_GPR_U32(ctx, 31, 0x238DB4u);
    ctx->pc = 0x238DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238DACu;
            // 0x238db0: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A800u;
    if (runtime->hasFunction(0x23A800u)) {
        auto targetFn = runtime->lookupFunction(0x23A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DB4u; }
        if (ctx->pc != 0x238DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AfterSpectolFusion__FP13CGameDataUsedP13CGameDataUsed_0x23a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DB4u; }
        if (ctx->pc != 0x238DB4u) { return; }
    }
    ctx->pc = 0x238DB4u;
label_238db4:
    // 0x238db4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dbc: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x238DBCu;
    SET_GPR_U32(ctx, 31, 0x238DC4u);
    ctx->pc = 0x238DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238DBCu;
            // 0x238dc0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DC4u; }
        if (ctx->pc != 0x238DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DC4u; }
        if (ctx->pc != 0x238DC4u) { return; }
    }
    ctx->pc = 0x238DC4u;
label_238dc4:
    // 0x238dc4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x238dc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x238dc8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x238DC8u;
    {
        const bool branch_taken_0x238dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DC8u;
            // 0x238dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dc8) {
            ctx->pc = 0x238DE0u;
            goto label_238de0;
        }
    }
    ctx->pc = 0x238DD0u;
    // 0x238dd0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x238DD0u;
    SET_GPR_U32(ctx, 31, 0x238DD8u);
    ctx->pc = 0x238DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238DD0u;
            // 0x238dd4: 0x240500ac  addiu       $a1, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD8u; }
        if (ctx->pc != 0x238DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD8u; }
        if (ctx->pc != 0x238DD8u) { return; }
    }
    ctx->pc = 0x238DD8u;
label_238dd8:
    // 0x238dd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x238DD8u;
    {
        const bool branch_taken_0x238dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DD8u;
            // 0x238ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dd8) {
            ctx->pc = 0x238E0Cu;
            goto label_238e0c;
        }
    }
    ctx->pc = 0x238DE0u;
label_238de0:
    // 0x238de0: 0x8f8295e8  lw          $v0, -0x6A18($gp)
    ctx->pc = 0x238de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940136)));
    // 0x238de4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x238DE4u;
    {
        const bool branch_taken_0x238de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DE4u;
            // 0x238de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238de4) {
            ctx->pc = 0x238E00u;
            goto label_238e00;
        }
    }
    ctx->pc = 0x238DECu;
    // 0x238dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238df0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x238DF0u;
    SET_GPR_U32(ctx, 31, 0x238DF8u);
    ctx->pc = 0x238DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238DF0u;
            // 0x238df4: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DF8u; }
        if (ctx->pc != 0x238DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DF8u; }
        if (ctx->pc != 0x238DF8u) { return; }
    }
    ctx->pc = 0x238DF8u;
label_238df8:
    // 0x238df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238DF8u;
    {
        const bool branch_taken_0x238df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238df8) {
            ctx->pc = 0x238E08u;
            goto label_238e08;
        }
    }
    ctx->pc = 0x238E00u;
label_238e00:
    // 0x238e00: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x238E00u;
    SET_GPR_U32(ctx, 31, 0x238E08u);
    ctx->pc = 0x238E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E00u;
            // 0x238e04: 0x240500ce  addiu       $a1, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E08u; }
        if (ctx->pc != 0x238E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E08u; }
        if (ctx->pc != 0x238E08u) { return; }
    }
    ctx->pc = 0x238E08u;
label_238e08:
    // 0x238e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238e0c:
    // 0x238e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238e10: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x238E10u;
    SET_GPR_U32(ctx, 31, 0x238E18u);
    ctx->pc = 0x238E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E10u;
            // 0x238e14: 0x24120012  addiu       $s2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E18u; }
        if (ctx->pc != 0x238E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E18u; }
        if (ctx->pc != 0x238E18u) { return; }
    }
    ctx->pc = 0x238E18u;
label_238e18:
    // 0x238e18: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
    // 0x238e1c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x238e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x238e20: 0x3c0801ed  lui         $t0, 0x1ED
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)493 << 16));
    // 0x238e24: 0x24a5dce0  addiu       $a1, $a1, -0x2320
    ctx->pc = 0x238e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
    // 0x238e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238e30: 0xc08fdf8  jal         func_23F7E0
    ctx->pc = 0x238E30u;
    SET_GPR_U32(ctx, 31, 0x238E38u);
    ctx->pc = 0x238E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E30u;
            // 0x238e34: 0x2508dd50  addiu       $t0, $t0, -0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (runtime->hasFunction(0x23F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x23F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E38u; }
        if (ctx->pc != 0x238E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E38u; }
        if (ctx->pc != 0x238E38u) { return; }
    }
    ctx->pc = 0x238E38u;
label_238e38:
    // 0x238e38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x238E38u;
    {
        const bool branch_taken_0x238e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E38u;
            // 0x238e3c: 0xc7809618  lwc1        $f0, -0x69E8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e38) {
            ctx->pc = 0x238E84u;
            goto label_238e84;
        }
    }
    ctx->pc = 0x238E40u;
label_238e40:
    // 0x238e40: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x238E40u;
    SET_GPR_U32(ctx, 31, 0x238E48u);
    ctx->pc = 0x238E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E40u;
            // 0x238e44: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E48u; }
        if (ctx->pc != 0x238E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E48u; }
        if (ctx->pc != 0x238E48u) { return; }
    }
    ctx->pc = 0x238E48u;
label_238e48:
    // 0x238e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e4c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x238E4Cu;
    SET_GPR_U32(ctx, 31, 0x238E54u);
    ctx->pc = 0x238E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E4Cu;
            // 0x238e50: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E54u; }
        if (ctx->pc != 0x238E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E54u; }
        if (ctx->pc != 0x238E54u) { return; }
    }
    ctx->pc = 0x238E54u;
label_238e54:
    // 0x238e54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238e58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x238E58u;
    {
        const bool branch_taken_0x238e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E58u;
            // 0x238e5c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e58) {
            ctx->pc = 0x238E80u;
            goto label_238e80;
        }
    }
    ctx->pc = 0x238E60u;
label_238e60:
    // 0x238e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238e64:
    // 0x238e64: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x238E64u;
    SET_GPR_U32(ctx, 31, 0x238E6Cu);
    ctx->pc = 0x238E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E64u;
            // 0x238e68: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E6Cu; }
        if (ctx->pc != 0x238E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E6Cu; }
        if (ctx->pc != 0x238E6Cu) { return; }
    }
    ctx->pc = 0x238E6Cu;
label_238e6c:
    // 0x238e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e70: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x238E70u;
    SET_GPR_U32(ctx, 31, 0x238E78u);
    ctx->pc = 0x238E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E70u;
            // 0x238e74: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E78u; }
        if (ctx->pc != 0x238E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E78u; }
        if (ctx->pc != 0x238E78u) { return; }
    }
    ctx->pc = 0x238E78u;
label_238e78:
    // 0x238e78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238e7c: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x238e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_238e80:
    // 0x238e80: 0xc7809618  lwc1        $f0, -0x69E8($gp)
    ctx->pc = 0x238e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238e84:
    // 0x238e84: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x238e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x238e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238e90: 0xc065dc0  jal         func_197700
    ctx->pc = 0x238E90u;
    SET_GPR_U32(ctx, 31, 0x238E98u);
    ctx->pc = 0x238E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E90u;
            // 0x238e94: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E98u; }
        if (ctx->pc != 0x238E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E98u; }
        if (ctx->pc != 0x238E98u) { return; }
    }
    ctx->pc = 0x238E98u;
label_238e98:
    // 0x238e98: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x238e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x238e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ea0: 0x27a501fc  addiu       $a1, $sp, 0x1FC
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x238ea4: 0xc087720  jal         func_21DC80
    ctx->pc = 0x238EA4u;
    SET_GPR_U32(ctx, 31, 0x238EACu);
    ctx->pc = 0x238EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238EA4u;
            // 0x238ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238EACu; }
        if (ctx->pc != 0x238EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238EACu; }
        if (ctx->pc != 0x238EACu) { return; }
    }
    ctx->pc = 0x238EACu;
label_238eac:
    // 0x238eac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x238eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238eb0: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x238EB0u;
    SET_GPR_U32(ctx, 31, 0x238EB8u);
    ctx->pc = 0x238EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238EB0u;
            // 0x238eb4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238EB8u; }
        if (ctx->pc != 0x238EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238EB8u; }
        if (ctx->pc != 0x238EB8u) { return; }
    }
    ctx->pc = 0x238EB8u;
label_238eb8:
    // 0x238eb8: 0xae12014c  sw          $s2, 0x14C($s0)
    ctx->pc = 0x238eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 18));
    // 0x238ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ec0:
    // 0x238ec0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x238ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238ec4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x238ec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238ec8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x238ec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238ecc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x238eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238ed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x238ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238ed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x238EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238EE0u;
            // 0x238ee4: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238EE8u;
}
