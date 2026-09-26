#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DEAD_OFF__FP12RS_STACKDATAi
// Address: 0x1e5b00 - 0x1e5eec
void ps2__SET_DEAD_OFF__FP12RS_STACKDATAi_0x1e5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DEAD_OFF__FP12RS_STACKDATAi_0x1e5b00");
#endif

    switch (ctx->pc) {
        case 0x1e5ba4u: goto label_1e5ba4;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5ca0u: goto label_1e5ca0;
        case 0x1e5ce0u: goto label_1e5ce0;
        case 0x1e5d60u: goto label_1e5d60;
        case 0x1e5d68u: goto label_1e5d68;
        case 0x1e5d84u: goto label_1e5d84;
        case 0x1e5da4u: goto label_1e5da4;
        case 0x1e5dc4u: goto label_1e5dc4;
        case 0x1e5de8u: goto label_1e5de8;
        case 0x1e5e18u: goto label_1e5e18;
        case 0x1e5e5cu: goto label_1e5e5c;
        case 0x1e5e9cu: goto label_1e5e9c;
        case 0x1e5eb8u: goto label_1e5eb8;
        default: break;
    }

    ctx->pc = 0x1e5b00u;

    // 0x1e5b00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e5b04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e5b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1e5b08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e5b0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e5b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e5b10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e5b14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e5b18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5b1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e5b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e5b20: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e5b20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e5b24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e5b24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e5b28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5B28u;
    {
        const bool branch_taken_0x1e5b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B28u;
            // 0x1e5b2c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b28) {
            ctx->pc = 0x1E5B38u;
            goto label_1e5b38;
        }
    }
    ctx->pc = 0x1E5B30u;
    // 0x1e5b30: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1E5B30u;
    {
        const bool branch_taken_0x1e5b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B30u;
            // 0x1e5b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b30) {
            ctx->pc = 0x1E5EBCu;
            goto label_1e5ebc;
        }
    }
    ctx->pc = 0x1E5B38u;
label_1e5b38:
    // 0x1e5b38: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5b3c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5b40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1e5b44: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e5b48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5b4c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1e5b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e5b50: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1e5b54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e5b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e5b58: 0xac851334  sw          $a1, 0x1334($a0)
    ctx->pc = 0x1e5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 5));
    // 0x1e5b5c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5b60: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1e5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5b64: 0xc480010c  lwc1        $f0, 0x10C($a0)
    ctx->pc = 0x1e5b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5b68: 0x46012542  mul.s       $f21, $f4, $f1
    ctx->pc = 0x1e5b68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e5b6c: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x1e5b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5b70: 0x0  nop
    ctx->pc = 0x1e5b70u;
    // NOP
    // 0x1e5b74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5B74u;
    {
        const bool branch_taken_0x1e5b74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B74u;
            // 0x1e5b78: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b74) {
            ctx->pc = 0x1E5B80u;
            goto label_1e5b80;
        }
    }
    ctx->pc = 0x1E5B7Cu;
    // 0x1e5b7c: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x1e5b7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_1e5b80:
    // 0x1e5b80: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1e5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1e5b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5b8c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5b90: 0x4600ad83  div.s       $f22, $f21, $f0
    ctx->pc = 0x1e5b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1e5b94: 0x0  nop
    ctx->pc = 0x1e5b94u;
    // NOP
    // 0x1e5b98: 0x0  nop
    ctx->pc = 0x1e5b98u;
    // NOP
    // 0x1e5b9c: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x1E5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E5BA4u);
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BA4u; }
        if (ctx->pc != 0x1E5BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5BA4u; }
        if (ctx->pc != 0x1E5BA4u) { return; }
    }
    ctx->pc = 0x1E5BA4u;
label_1e5ba4:
    // 0x1e5ba4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5ba8: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x1e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x1e5bac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e5bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e5bb0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1E5BB0u;
    {
        const bool branch_taken_0x1e5bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BB0u;
            // 0x1e5bb4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bb0) {
            ctx->pc = 0x1E5CA0u;
            goto label_1e5ca0;
        }
    }
    ctx->pc = 0x1E5BB8u;
    // 0x1e5bb8: 0x8c270350  lw          $a3, 0x350($at)
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 848)));
    // 0x1e5bbc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5BBCu;
    {
        const bool branch_taken_0x1e5bbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BBCu;
            // 0x1e5bc0: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bbc) {
            ctx->pc = 0x1E5BCCu;
            goto label_1e5bcc;
        }
    }
    ctx->pc = 0x1E5BC4u;
    // 0x1e5bc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E5BC4u;
    {
        const bool branch_taken_0x1e5bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BC4u;
            // 0x1e5bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bc4) {
            ctx->pc = 0x1E5C04u;
            goto label_1e5c04;
        }
    }
    ctx->pc = 0x1E5BCCu;
label_1e5bcc:
    // 0x1e5bcc: 0x8c230358  lw          $v1, 0x358($at)
    ctx->pc = 0x1e5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 856)));
    // 0x1e5bd0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5bd4: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x1e5bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e5bd8: 0x8c220354  lw          $v0, 0x354($at)
    ctx->pc = 0x1e5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 852)));
    // 0x1e5bdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5be0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5be4: 0xac230358  sw          $v1, 0x358($at)
    ctx->pc = 0x1e5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 3));
    // 0x1e5be8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5bec: 0x8c230358  lw          $v1, 0x358($at)
    ctx->pc = 0x1e5becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 856)));
    // 0x1e5bf0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5BF4u;
    {
        const bool branch_taken_0x1e5bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5BF4u;
            // 0x1e5bf8: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bf4) {
            ctx->pc = 0x1E5C04u;
            goto label_1e5c04;
        }
    }
    ctx->pc = 0x1E5BFCu;
    // 0x1e5bfc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5c00: 0xac200358  sw          $zero, 0x358($at)
    ctx->pc = 0x1e5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 0));
label_1e5c04:
    // 0x1e5c04: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5C04u;
    {
        const bool branch_taken_0x1e5c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c04) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5C0Cu;
    // 0x1e5c0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e5c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c10: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5c14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e5c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e5c18: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x1e5c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1e5c1c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1e5c1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1e5c20: 0xc070d90  jal         func_1C3640
    ctx->pc = 0x1E5C20u;
    SET_GPR_U32(ctx, 31, 0x1E5C28u);
    ctx->pc = 0x1E5C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C20u;
            // 0x1e5c24: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3640u;
    if (runtime->hasFunction(0x1C3640u)) {
        auto targetFn = runtime->lookupFunction(0x1C3640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C28u; }
        if (ctx->pc != 0x1E5C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDeadEffect__11CDeadEffectFPffffi_0x1c3640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C28u; }
        if (ctx->pc != 0x1E5C28u) { return; }
    }
    ctx->pc = 0x1E5C28u;
label_1e5c28:
    // 0x1e5c28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5c2c: 0x8c270350  lw          $a3, 0x350($at)
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 848)));
    // 0x1e5c30: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5C30u;
    {
        const bool branch_taken_0x1e5c30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C30u;
            // 0x1e5c34: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c30) {
            ctx->pc = 0x1E5C40u;
            goto label_1e5c40;
        }
    }
    ctx->pc = 0x1E5C38u;
    // 0x1e5c38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E5C38u;
    {
        const bool branch_taken_0x1e5c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C38u;
            // 0x1e5c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c38) {
            ctx->pc = 0x1E5C78u;
            goto label_1e5c78;
        }
    }
    ctx->pc = 0x1E5C40u;
label_1e5c40:
    // 0x1e5c40: 0x8c230358  lw          $v1, 0x358($at)
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 856)));
    // 0x1e5c44: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5c48: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x1e5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e5c4c: 0x8c220354  lw          $v0, 0x354($at)
    ctx->pc = 0x1e5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 852)));
    // 0x1e5c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5c54: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5c58: 0xac230358  sw          $v1, 0x358($at)
    ctx->pc = 0x1e5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 3));
    // 0x1e5c5c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5c60: 0x8c230358  lw          $v1, 0x358($at)
    ctx->pc = 0x1e5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 856)));
    // 0x1e5c64: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5c68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5C68u;
    {
        const bool branch_taken_0x1e5c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C68u;
            // 0x1e5c6c: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c68) {
            ctx->pc = 0x1E5C78u;
            goto label_1e5c78;
        }
    }
    ctx->pc = 0x1E5C70u;
    // 0x1e5c70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1e5c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1e5c74: 0xac200358  sw          $zero, 0x358($at)
    ctx->pc = 0x1e5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 0));
label_1e5c78:
    // 0x1e5c78: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5C78u;
    {
        const bool branch_taken_0x1e5c78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C78u;
            // 0x1e5c7c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c78) {
            ctx->pc = 0x1E5CA0u;
            goto label_1e5ca0;
        }
    }
    ctx->pc = 0x1E5C80u;
    // 0x1e5c80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e5c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5c88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e5c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5c8c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1e5c8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1e5c90: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1e5c94: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1e5c94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e5c98: 0xc070d90  jal         func_1C3640
    ctx->pc = 0x1E5C98u;
    SET_GPR_U32(ctx, 31, 0x1E5CA0u);
    ctx->pc = 0x1E5C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C98u;
            // 0x1e5c9c: 0x46150342  mul.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3640u;
    if (runtime->hasFunction(0x1C3640u)) {
        auto targetFn = runtime->lookupFunction(0x1C3640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CA0u; }
        if (ctx->pc != 0x1E5CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDeadEffect__11CDeadEffectFPffffi_0x1c3640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CA0u; }
        if (ctx->pc != 0x1E5CA0u) { return; }
    }
    ctx->pc = 0x1E5CA0u;
label_1e5ca0:
    // 0x1e5ca0: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5ca4: 0x8c70120c  lw          $s0, 0x120C($v1)
    ctx->pc = 0x1e5ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4620)));
    // 0x1e5ca8: 0x8c711210  lw          $s1, 0x1210($v1)
    ctx->pc = 0x1e5ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x1e5cac: 0x8c621328  lw          $v0, 0x1328($v1)
    ctx->pc = 0x1e5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4904)));
    // 0x1e5cb0: 0x8c631214  lw          $v1, 0x1214($v1)
    ctx->pc = 0x1e5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4628)));
    // 0x1e5cb4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1e5cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1e5cb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5CB8u;
    {
        const bool branch_taken_0x1e5cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CB8u;
            // 0x1e5cbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cb8) {
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5CC0u;
    // 0x1e5cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5cc4: 0x0  nop
    ctx->pc = 0x1e5cc4u;
    // NOP
    // 0x1e5cc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e5cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5ccc: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1e5cd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e5cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5cd8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E5CD8u;
    SET_GPR_U32(ctx, 31, 0x1E5CE0u);
    ctx->pc = 0x1E5CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CD8u;
            // 0x1e5cdc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CE0u; }
        if (ctx->pc != 0x1E5CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5CE0u; }
        if (ctx->pc != 0x1E5CE0u) { return; }
    }
    ctx->pc = 0x1E5CE0u;
label_1e5ce0:
    // 0x1e5ce0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1e5ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e5ce4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5CE4u;
    {
        const bool branch_taken_0x1e5ce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CE4u;
            // 0x1e5ce8: 0x28430006  slti        $v1, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ce4) {
            ctx->pc = 0x1E5CFCu;
            goto label_1e5cfc;
        }
    }
    ctx->pc = 0x1E5CECu;
    // 0x1e5cec: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5CECu;
    {
        const bool branch_taken_0x1e5cec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e5cec) {
            ctx->pc = 0x1E5CF8u;
            goto label_1e5cf8;
        }
    }
    ctx->pc = 0x1E5CF4u;
    // 0x1e5cf4: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x1e5cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e5cf8:
    // 0x1e5cf8: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x1e5cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e5cfc:
    // 0x1e5cfc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5CFCu;
    {
        const bool branch_taken_0x1e5cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CFCu;
            // 0x1e5d00: 0x28430032  slti        $v1, $v0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cfc) {
            ctx->pc = 0x1E5D08u;
            goto label_1e5d08;
        }
    }
    ctx->pc = 0x1E5D04u;
    // 0x1e5d04: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e5d08:
    // 0x1e5d08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5D08u;
    {
        const bool branch_taken_0x1e5d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D08u;
            // 0x1e5d0c: 0x284300c8  slti        $v1, $v0, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d08) {
            ctx->pc = 0x1E5D14u;
            goto label_1e5d14;
        }
    }
    ctx->pc = 0x1E5D10u;
    // 0x1e5d10: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x1e5d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e5d14:
    // 0x1e5d14: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5D14u;
    {
        const bool branch_taken_0x1e5d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D14u;
            // 0x1e5d18: 0x284301f4  slti        $v1, $v0, 0x1F4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d14) {
            ctx->pc = 0x1E5D20u;
            goto label_1e5d20;
        }
    }
    ctx->pc = 0x1E5D1Cu;
    // 0x1e5d1c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5d20:
    // 0x1e5d20: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5D20u;
    {
        const bool branch_taken_0x1e5d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d20) {
            ctx->pc = 0x1E5D2Cu;
            goto label_1e5d2c;
        }
    }
    ctx->pc = 0x1E5D28u;
    // 0x1e5d28: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x1e5d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5d2c:
    // 0x1e5d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5d30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e5d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d34: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1e5d34u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5d38: 0x0  nop
    ctx->pc = 0x1e5d38u;
    // NOP
    // 0x1e5d3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5d44: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1e5d44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e5d48: 0x0  nop
    ctx->pc = 0x1e5d48u;
    // NOP
    // 0x1e5d4c: 0x0  nop
    ctx->pc = 0x1e5d4cu;
    // NOP
    // 0x1e5d50: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1e5d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1e5d54: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1E5D54u;
    {
        const bool branch_taken_0x1e5d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d54) {
            ctx->pc = 0x1E5E78u;
            goto label_1e5e78;
        }
    }
    ctx->pc = 0x1E5D5Cu;
    // 0x1e5d5c: 0x27848de8  addiu       $a0, $gp, -0x7218
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
label_1e5d60:
    // 0x1e5d60: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x1E5D60u;
    SET_GPR_U32(ctx, 31, 0x1E5D68u);
    ctx->pc = 0x1E5D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D60u;
            // 0x1e5d64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D68u; }
        if (ctx->pc != 0x1E5D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D68u; }
        if (ctx->pc != 0x1E5D68u) { return; }
    }
    ctx->pc = 0x1E5D68u;
label_1e5d68:
    // 0x1e5d68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e5d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d6c: 0x1280003e  beqz        $s4, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E5D6Cu;
    {
        const bool branch_taken_0x1e5d6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D6Cu;
            // 0x1e5d70: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d6c) {
            ctx->pc = 0x1E5E68u;
            goto label_1e5e68;
        }
    }
    ctx->pc = 0x1E5D74u;
    // 0x1e5d74: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e5d78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5d7c: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D84u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D84u; }
        if (ctx->pc != 0x1E5D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5D84u; }
        if (ctx->pc != 0x1E5D84u) { return; }
    }
    ctx->pc = 0x1E5D84u;
label_1e5d84:
    // 0x1e5d84: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1e5d88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e5d8c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1e5d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1e5d90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5d94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5d98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5d9c: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E5DA4u);
    ctx->pc = 0x1E5DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D9Cu;
            // 0x1e5da0: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DA4u; }
        if (ctx->pc != 0x1E5DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DA4u; }
        if (ctx->pc != 0x1E5DA4u) { return; }
    }
    ctx->pc = 0x1E5DA4u;
label_1e5da4:
    // 0x1e5da4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1e5da8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e5dac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5db0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e5db4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5db8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5dbc: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5DBCu;
    SET_GPR_U32(ctx, 31, 0x1E5DC4u);
    ctx->pc = 0x1E5DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DBCu;
            // 0x1e5dc0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DC4u; }
        if (ctx->pc != 0x1E5DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DC4u; }
        if (ctx->pc != 0x1E5DC4u) { return; }
    }
    ctx->pc = 0x1E5DC4u;
label_1e5dc4:
    // 0x1e5dc4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e5dc8: 0x27b50098  addiu       $s5, $sp, 0x98
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e5dcc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e5dd0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e5dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e5dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5dd8: 0x0  nop
    ctx->pc = 0x1e5dd8u;
    // NOP
    // 0x1e5ddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5de0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E5DE0u;
    SET_GPR_U32(ctx, 31, 0x1E5DE8u);
    ctx->pc = 0x1E5DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DE0u;
            // 0x1e5de4: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DE8u; }
        if (ctx->pc != 0x1E5DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5DE8u; }
        if (ctx->pc != 0x1E5DE8u) { return; }
    }
    ctx->pc = 0x1E5DE8u;
label_1e5de8:
    // 0x1e5de8: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1e5de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e5dec: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5DECu;
    {
        const bool branch_taken_0x1e5dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5dec) {
            ctx->pc = 0x1E5E0Cu;
            goto label_1e5e0c;
        }
    }
    ctx->pc = 0x1E5DF4u;
    // 0x1e5df4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1e5df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5df8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e5dfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5e00: 0x0  nop
    ctx->pc = 0x1e5e00u;
    // NOP
    // 0x1e5e04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e5e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e5e08: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e5e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e5e0c:
    // 0x1e5e0c: 0x0  nop
    ctx->pc = 0x1e5e0cu;
    // NOP
    // 0x1e5e10: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E5E10u;
    SET_GPR_U32(ctx, 31, 0x1E5E18u);
    ctx->pc = 0x1E5E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E10u;
            // 0x1e5e14: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E18u; }
        if (ctx->pc != 0x1E5E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E18u; }
        if (ctx->pc != 0x1E5E18u) { return; }
    }
    ctx->pc = 0x1E5E18u;
label_1e5e18:
    // 0x1e5e18: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1e5e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e5e1c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5E1Cu;
    {
        const bool branch_taken_0x1e5e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e1c) {
            ctx->pc = 0x1E5E3Cu;
            goto label_1e5e3c;
        }
    }
    ctx->pc = 0x1E5E24u;
    // 0x1e5e24: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1e5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5e28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e5e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5e30: 0x0  nop
    ctx->pc = 0x1e5e30u;
    // NOP
    // 0x1e5e34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e5e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e5e38: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1e5e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1e5e3c:
    // 0x1e5e3c: 0x0  nop
    ctx->pc = 0x1e5e3cu;
    // NOP
    // 0x1e5e40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5e44: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1e5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1e5e48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e5e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e4c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5e50: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1e5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e5e54: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1E5E54u;
    SET_GPR_U32(ctx, 31, 0x1E5E5Cu);
    ctx->pc = 0x1E5E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E54u;
            // 0x1e5e58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E5Cu; }
        if (ctx->pc != 0x1E5E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E5Cu; }
        if (ctx->pc != 0x1E5E5Cu) { return; }
    }
    ctx->pc = 0x1E5E5Cu;
label_1e5e5c:
    // 0x1e5e5c: 0xe6940064  swc1        $f20, 0x64($s4)
    ctx->pc = 0x1e5e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 100), bits); }
    // 0x1e5e60: 0xa690006a  sh          $s0, 0x6A($s4)
    ctx->pc = 0x1e5e60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 106), (uint16_t)GPR_U32(ctx, 16));
    // 0x1e5e64: 0xa691006c  sh          $s1, 0x6C($s4)
    ctx->pc = 0x1e5e64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 17));
label_1e5e68:
    // 0x1e5e68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5e6c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1e5e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1e5e70: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1E5E70u;
    {
        const bool branch_taken_0x1e5e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E70u;
            // 0x1e5e74: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e70) {
            ctx->pc = 0x1E5D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e5d60;
        }
    }
    ctx->pc = 0x1E5E78u;
label_1e5e78:
    // 0x1e5e78: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5E78u;
    {
        const bool branch_taken_0x1e5e78 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e5e78) {
            ctx->pc = 0x1E5E9Cu;
            goto label_1e5e9c;
        }
    }
    ctx->pc = 0x1E5E80u;
    // 0x1e5e80: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e5e84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e5e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e5e88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5e8c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e5e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e5e90: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x1e5e94: 0xc063818  jal         func_18E060
    ctx->pc = 0x1E5E94u;
    SET_GPR_U32(ctx, 31, 0x1E5E9Cu);
    ctx->pc = 0x1E5E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E94u;
            // 0x1e5e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E9Cu; }
        if (ctx->pc != 0x1E5E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E9Cu; }
        if (ctx->pc != 0x1E5E9Cu) { return; }
    }
    ctx->pc = 0x1E5E9Cu;
label_1e5e9c:
    // 0x1e5e9c: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e5ea0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e5ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e5ea4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e5ea8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e5eac: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1e5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x1e5eb0: 0xc063818  jal         func_18E060
    ctx->pc = 0x1E5EB0u;
    SET_GPR_U32(ctx, 31, 0x1E5EB8u);
    ctx->pc = 0x1E5EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EB0u;
            // 0x1e5eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5EB8u; }
        if (ctx->pc != 0x1E5EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5EB8u; }
        if (ctx->pc != 0x1E5EB8u) { return; }
    }
    ctx->pc = 0x1E5EB8u;
label_1e5eb8:
    // 0x1e5eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ebc:
    // 0x1e5ebc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e5ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5ec0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e5ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e5ec4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e5ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5ec8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e5ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e5ecc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e5eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5ed0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5ed4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e5ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5ed8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e5ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5edc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5ee0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e5ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EE4u;
            // 0x1e5ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5EECu;
}
