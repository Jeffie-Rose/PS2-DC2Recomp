#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPutPosXY__16CMenuPosDataFormFPcRfRf
// Address: 0x225db0 - 0x22609c
void GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0");
#endif

    switch (ctx->pc) {
        case 0x225e24u: goto label_225e24;
        case 0x225e70u: goto label_225e70;
        case 0x225ea0u: goto label_225ea0;
        case 0x225ebcu: goto label_225ebc;
        case 0x225f04u: goto label_225f04;
        case 0x225f1cu: goto label_225f1c;
        case 0x225f7cu: goto label_225f7c;
        case 0x225ffcu: goto label_225ffc;
        default: break;
    }

    ctx->pc = 0x225db0u;

    // 0x225db0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x225db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x225db4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x225db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x225db8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x225db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x225dbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x225dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x225dc0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x225dc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225dc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x225dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x225dc8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x225dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225dcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x225dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x225dd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225dd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x225dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x225dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225ddc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x225ddcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x225de0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x225de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x225de4: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x225de8: 0xc494000c  lwc1        $f20, 0xC($a0)
    ctx->pc = 0x225de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225dec: 0xc4950010  lwc1        $f21, 0x10($a0)
    ctx->pc = 0x225decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x225df0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x225DF0u;
    {
        const bool branch_taken_0x225df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DF0u;
            // 0x225df4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225df0) {
            ctx->pc = 0x225E38u;
            goto label_225e38;
        }
    }
    ctx->pc = 0x225DF8u;
    // 0x225df8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225dfc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x225dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x225e00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225e04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225e08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x225e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225e0c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x225e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e10: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x225e10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x225e14: 0x0  nop
    ctx->pc = 0x225e14u;
    // NOP
    // 0x225e18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225e1c: 0xc047964  jal         func_11E590
    ctx->pc = 0x225E1Cu;
    SET_GPR_U32(ctx, 31, 0x225E24u);
    ctx->pc = 0x225E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225E1Cu;
            // 0x225e20: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E24u; }
        if (ctx->pc != 0x225E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E24u; }
        if (ctx->pc != 0x225E24u) { return; }
    }
    ctx->pc = 0x225E24u;
label_225e24:
    // 0x225e24: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x225e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x225e28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225e2c: 0x0  nop
    ctx->pc = 0x225e2cu;
    // NOP
    // 0x225e30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225e34: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x225e34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_225e38:
    // 0x225e38: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x225e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x225e3c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x225E3Cu;
    {
        const bool branch_taken_0x225e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e3c) {
            ctx->pc = 0x225E84u;
            goto label_225e84;
        }
    }
    ctx->pc = 0x225E44u;
    // 0x225e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225e48: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x225e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x225e4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225e54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x225e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225e58: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x225e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e5c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x225e5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x225e60: 0x0  nop
    ctx->pc = 0x225e60u;
    // NOP
    // 0x225e64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225e68: 0xc047a42  jal         func_11E908
    ctx->pc = 0x225E68u;
    SET_GPR_U32(ctx, 31, 0x225E70u);
    ctx->pc = 0x225E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225E68u;
            // 0x225e6c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E70u; }
        if (ctx->pc != 0x225E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E70u; }
        if (ctx->pc != 0x225E70u) { return; }
    }
    ctx->pc = 0x225E70u;
label_225e70:
    // 0x225e70: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x225e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x225e74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225e78: 0x0  nop
    ctx->pc = 0x225e78u;
    // NOP
    // 0x225e7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225e80: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x225e80u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_225e84:
    // 0x225e84: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x225E84u;
    {
        const bool branch_taken_0x225e84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E84u;
            // 0x225e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e84) {
            ctx->pc = 0x225E98u;
            goto label_225e98;
        }
    }
    ctx->pc = 0x225E8Cu;
    // 0x225e8c: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x225e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x225e90: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x225E90u;
    {
        const bool branch_taken_0x225e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E90u;
            // 0x225e94: 0xe6b50000  swc1        $f21, 0x0($s5) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e90) {
            ctx->pc = 0x226070u;
            goto label_226070;
        }
    }
    ctx->pc = 0x225E98u;
label_225e98:
    // 0x225e98: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x225E98u;
    {
        const bool branch_taken_0x225e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225E98u;
            // 0x225e9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e98) {
            ctx->pc = 0x226058u;
            goto label_226058;
        }
    }
    ctx->pc = 0x225EA0u;
label_225ea0:
    // 0x225ea0: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x225ea4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x225ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x225ea8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225eac: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x225EACu;
    {
        const bool branch_taken_0x225eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225EACu;
            // 0x225eb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225eac) {
            ctx->pc = 0x226050u;
            goto label_226050;
        }
    }
    ctx->pc = 0x225EB4u;
    // 0x225eb4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x225EB4u;
    SET_GPR_U32(ctx, 31, 0x225EBCu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225EBCu; }
        if (ctx->pc != 0x225EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225EBCu; }
        if (ctx->pc != 0x225EBCu) { return; }
    }
    ctx->pc = 0x225EBCu;
label_225ebc:
    // 0x225ebc: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x225EBCu;
    {
        const bool branch_taken_0x225ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ebc) {
            ctx->pc = 0x226050u;
            goto label_226050;
        }
    }
    ctx->pc = 0x225EC4u;
    // 0x225ec4: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x225ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x225ec8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x225ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x225ecc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x225eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x225ed0: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x225ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x225ed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225ed8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x225ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x225edc: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x225edcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x225ee0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x225EE0u;
    {
        const bool branch_taken_0x225ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x225EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225EE0u;
            // 0x225ee4: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ee0) {
            ctx->pc = 0x225F38u;
            goto label_225f38;
        }
    }
    ctx->pc = 0x225EE8u;
    // 0x225ee8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225EE8u;
    {
        const bool branch_taken_0x225ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x225ee8) {
            ctx->pc = 0x225EF8u;
            goto label_225ef8;
        }
    }
    ctx->pc = 0x225EF0u;
    // 0x225ef0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x225EF0u;
    {
        const bool branch_taken_0x225ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225EF0u;
            // 0x225ef4: 0xc4a1001c  lwc1        $f1, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ef0) {
            ctx->pc = 0x226040u;
            goto label_226040;
        }
    }
    ctx->pc = 0x225EF8u;
label_225ef8:
    // 0x225ef8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x225ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x225efc: 0xc08abbc  jal         func_22AEF0
    ctx->pc = 0x225EFCu;
    SET_GPR_U32(ctx, 31, 0x225F04u);
    ctx->pc = 0x225F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225EFCu;
            // 0x225f00: 0x90a50018  lbu         $a1, 0x18($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F04u; }
        if (ctx->pc != 0x225F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F04u; }
        if (ctx->pc != 0x225F04u) { return; }
    }
    ctx->pc = 0x225F04u;
label_225f04:
    // 0x225f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225F08u;
    {
        const bool branch_taken_0x225f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F08u;
            // 0x225f0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f08) {
            ctx->pc = 0x225F1Cu;
            goto label_225f1c;
        }
    }
    ctx->pc = 0x225F10u;
    // 0x225f10: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x225f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x225f14: 0xc08974c  jal         func_225D30
    ctx->pc = 0x225F14u;
    SET_GPR_U32(ctx, 31, 0x225F1Cu);
    ctx->pc = 0x225F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F14u;
            // 0x225f18: 0x27a7008c  addiu       $a3, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F1Cu; }
        if (ctx->pc != 0x225F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F1Cu; }
        if (ctx->pc != 0x225F1Cu) { return; }
    }
    ctx->pc = 0x225F1Cu;
label_225f1c:
    // 0x225f1c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x225f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225f20: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x225f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225f24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225f2c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x225f2cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x225f30: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x225F30u;
    {
        const bool branch_taken_0x225f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F30u;
            // 0x225f34: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f30) {
            ctx->pc = 0x226068u;
            goto label_226068;
        }
    }
    ctx->pc = 0x225F38u;
label_225f38:
    // 0x225f38: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x225f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225f3c: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x225f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x225f40: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x225f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225f44: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x225f44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x225f48: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x225F48u;
    {
        const bool branch_taken_0x225f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F48u;
            // 0x225f4c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f48) {
            ctx->pc = 0x225FBCu;
            goto label_225fbc;
        }
    }
    ctx->pc = 0x225F50u;
    // 0x225f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x225f58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225f60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225f64: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x225f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225f68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x225f68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x225f6c: 0x0  nop
    ctx->pc = 0x225f6cu;
    // NOP
    // 0x225f70: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x225f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225f74: 0xc047964  jal         func_11E590
    ctx->pc = 0x225F74u;
    SET_GPR_U32(ctx, 31, 0x225F7Cu);
    ctx->pc = 0x225F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225F74u;
            // 0x225f78: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F7Cu; }
        if (ctx->pc != 0x225F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F7Cu; }
        if (ctx->pc != 0x225F7Cu) { return; }
    }
    ctx->pc = 0x225F7Cu;
label_225f7c:
    // 0x225f7c: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x225f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x225f80: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x225f84: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x225f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x225f88: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x225F88u;
    {
        const bool branch_taken_0x225f88 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x225F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F88u;
            // 0x225f8c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f88) {
            ctx->pc = 0x225F9Cu;
            goto label_225f9c;
        }
    }
    ctx->pc = 0x225F90u;
    // 0x225f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x225F94u;
    {
        const bool branch_taken_0x225f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225F94u;
            // 0x225f98: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f94) {
            ctx->pc = 0x225FB4u;
            goto label_225fb4;
        }
    }
    ctx->pc = 0x225F9Cu;
label_225f9c:
    // 0x225f9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x225f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x225fa0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x225fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x225fa4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x225fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225fa8: 0x0  nop
    ctx->pc = 0x225fa8u;
    // NOP
    // 0x225fac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x225facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225fb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x225fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_225fb4:
    // 0x225fb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x225fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225fb8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x225fb8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_225fbc:
    // 0x225fbc: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x225fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x225fc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x225fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x225fc4: 0x84630010  lh          $v1, 0x10($v1)
    ctx->pc = 0x225fc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x225fc8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x225FC8u;
    {
        const bool branch_taken_0x225fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fc8) {
            ctx->pc = 0x226068u;
            goto label_226068;
        }
    }
    ctx->pc = 0x225FD0u;
    // 0x225fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225fd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x225fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x225fd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225fdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225fe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225fe4: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x225fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225fe8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x225fe8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x225fec: 0x0  nop
    ctx->pc = 0x225fecu;
    // NOP
    // 0x225ff0: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x225ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x225ff4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x225FF4u;
    SET_GPR_U32(ctx, 31, 0x225FFCu);
    ctx->pc = 0x225FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225FF4u;
            // 0x225ff8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225FFCu; }
        if (ctx->pc != 0x225FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225FFCu; }
        if (ctx->pc != 0x225FFCu) { return; }
    }
    ctx->pc = 0x225FFCu;
label_225ffc:
    // 0x225ffc: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x225ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x226000: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x226000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x226004: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x226004u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x226008: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x226008u;
    {
        const bool branch_taken_0x226008 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x22600Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226008u;
            // 0x22600c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226008) {
            ctx->pc = 0x22601Cu;
            goto label_22601c;
        }
    }
    ctx->pc = 0x226010u;
    // 0x226010: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x226010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226014: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x226014u;
    {
        const bool branch_taken_0x226014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226014u;
            // 0x226018: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226014) {
            ctx->pc = 0x226034u;
            goto label_226034;
        }
    }
    ctx->pc = 0x22601Cu;
label_22601c:
    // 0x22601c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22601cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x226020: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x226020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x226024: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x226024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226028: 0x0  nop
    ctx->pc = 0x226028u;
    // NOP
    // 0x22602c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22602cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x226030: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x226030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_226034:
    // 0x226034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x226034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226038: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x226038u;
    {
        const bool branch_taken_0x226038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226038u;
            // 0x22603c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226038) {
            ctx->pc = 0x226068u;
            goto label_226068;
        }
    }
    ctx->pc = 0x226040u;
label_226040:
    // 0x226040: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x226040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226044: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x226044u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x226048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x226048u;
    {
        const bool branch_taken_0x226048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226048u;
            // 0x22604c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226048) {
            ctx->pc = 0x226068u;
            goto label_226068;
        }
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x226054: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x226054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_226058:
    // 0x226058: 0x86830068  lh          $v1, 0x68($s4)
    ctx->pc = 0x226058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x22605c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22605cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x226060: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x226060u;
    {
        const bool branch_taken_0x226060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226060) {
            ctx->pc = 0x225EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225ea0;
        }
    }
    ctx->pc = 0x226068u;
label_226068:
    // 0x226068: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x226068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x22606c: 0xe6b50000  swc1        $f21, 0x0($s5)
    ctx->pc = 0x22606cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_226070:
    // 0x226070: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x226070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226074: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x226074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x226078: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x226078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22607c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226080: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x226080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226084: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x226084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226088: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x226088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22608c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22608cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226090: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226094: 0x3e00008  jr          $ra
    ctx->pc = 0x226094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226094u;
            // 0x226098: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22609Cu;
}
