#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatSmoothPass__FPA4_fPA4_fiiii
// Address: 0x1c8c90 - 0x1c9014
void CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90");
#endif

    switch (ctx->pc) {
        case 0x1c8d8cu: goto label_1c8d8c;
        case 0x1c8e10u: goto label_1c8e10;
        case 0x1c8f18u: goto label_1c8f18;
        case 0x1c8f24u: goto label_1c8f24;
        case 0x1c8f54u: goto label_1c8f54;
        default: break;
    }

    ctx->pc = 0x1c8c90u;

    // 0x1c8c90: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1c8c94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c8c98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c8c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c8c9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c8c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c8ca0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1c8ca0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ca4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c8ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c8ca8: 0x2bc10003  slti        $at, $fp, 0x3
    ctx->pc = 0x1c8ca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c8cac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c8cb0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1c8cb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8cb4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c8cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c8cb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c8cb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8cbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c8cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c8cc0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1c8cc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8cc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c8cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c8cc8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1c8cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c8cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c8cd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8cd4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c8cd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c8cd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c8cd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8cdc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8CDCu;
    {
        const bool branch_taken_0x1c8cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CDCu;
            // 0x1c8ce0: 0xafa800bc  sw          $t0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cdc) {
            ctx->pc = 0x1C8CECu;
            goto label_1c8cec;
        }
    }
    ctx->pc = 0x1C8CE4u;
    // 0x1c8ce4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1C8CE4u;
    {
        const bool branch_taken_0x1c8ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8CE4u;
            // 0x1c8ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ce4) {
            ctx->pc = 0x1C8FDCu;
            goto label_1c8fdc;
        }
    }
    ctx->pc = 0x1C8CECu;
label_1c8cec:
    // 0x1c8cec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1c8cf0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8cf4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c8cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c8cf8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8cfc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c8cfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8d00: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1c8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x1c8d04: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1c8d04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1c8d08: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x1c8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x1c8d0c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1c8d0cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1c8d10: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1c8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1c8d14: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1c8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1c8d18: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x1c8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x1c8d1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8d20: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x1c8d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x1c8d24: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1c8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x1c8d28: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x1c8d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1c8d2c: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1c8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1c8d30: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x1c8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x1c8d34: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x1c8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x1c8d38: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1c8d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8d3c: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x1c8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x1c8d40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c8d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d48: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1c8d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1c8d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d50: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1c8d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8d54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8d54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8d58: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1c8d58u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1c8d5c: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c8d5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1c8d60: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1c8d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x1c8d64: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x1c8d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1c8d68: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1c8d68u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1c8d6c: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x1c8d6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1c8d70: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1c8d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1c8d74: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1c8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1c8d78: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x1c8d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x1c8d7c: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x1c8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x1c8d80: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x1C8D80u;
    {
        const bool branch_taken_0x1c8d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D80u;
            // 0x1c8d84: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d80) {
            ctx->pc = 0x1C8FD8u;
            goto label_1c8fd8;
        }
    }
    ctx->pc = 0x1C8D88u;
    // 0x1c8d88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c8d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8d8c:
    // 0x1c8d8c: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8D8Cu;
    {
        const bool branch_taken_0x1c8d8c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C8D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D8Cu;
            // 0x1c8d90: 0x27c2fffe  addiu       $v0, $fp, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d8c) {
            ctx->pc = 0x1C8DBCu;
            goto label_1c8dbc;
        }
    }
    ctx->pc = 0x1C8D94u;
    // 0x1c8d94: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1c8d94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8d98: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8D98u;
    {
        const bool branch_taken_0x1c8d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8D98u;
            // 0x1c8d9c: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d98) {
            ctx->pc = 0x1C8DBCu;
            goto label_1c8dbc;
        }
    }
    ctx->pc = 0x1C8DA0u;
    // 0x1c8da0: 0xafb101a4  sw          $s1, 0x1A4($sp)
    ctx->pc = 0x1c8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 17));
    // 0x1c8da4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1c8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1c8da8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1c8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c8dac: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x1c8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x1c8db0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x1c8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1c8db4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C8DB4u;
    {
        const bool branch_taken_0x1c8db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8DB4u;
            // 0x1c8db8: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8db4) {
            ctx->pc = 0x1C8E04u;
            goto label_1c8e04;
        }
    }
    ctx->pc = 0x1C8DBCu;
label_1c8dbc:
    // 0x1c8dbc: 0x0  nop
    ctx->pc = 0x1c8dbcu;
    // NOP
    // 0x1c8dc0: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8DC0u;
    {
        const bool branch_taken_0x1c8dc0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1C8DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8DC0u;
            // 0x1c8dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dc0) {
            ctx->pc = 0x1C8DDCu;
            goto label_1c8ddc;
        }
    }
    ctx->pc = 0x1C8DC8u;
    // 0x1c8dc8: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x1c8dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x1c8dcc: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x1c8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x1c8dd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8dd4: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x1c8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x1c8dd8: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x1c8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_1c8ddc:
    // 0x1c8ddc: 0x0  nop
    ctx->pc = 0x1c8ddcu;
    // NOP
    // 0x1c8de0: 0x27c2fffe  addiu       $v0, $fp, -0x2
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x1c8de4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c8de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8de8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8DE8u;
    {
        const bool branch_taken_0x1c8de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8DE8u;
            // 0x1c8dec: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8de8) {
            ctx->pc = 0x1C8E04u;
            goto label_1c8e04;
        }
    }
    ctx->pc = 0x1C8DF0u;
    // 0x1c8df0: 0xafb101a4  sw          $s1, 0x1A4($sp)
    ctx->pc = 0x1c8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 17));
    // 0x1c8df4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1c8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1c8df8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c8dfc: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x1c8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x1c8e00: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x1c8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_1c8e04:
    // 0x1c8e04: 0x0  nop
    ctx->pc = 0x1c8e04u;
    // NOP
    // 0x1c8e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e10:
    // 0x1c8e10: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c8e14: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1c8e18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c8e1c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1c8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1c8e20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8e24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1c8e28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c8e2c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1c8e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1c8e30: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8E30u;
    {
        const bool branch_taken_0x1c8e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E30u;
            // 0x1c8e34: 0x741023  subu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e30) {
            ctx->pc = 0x1C8E3Cu;
            goto label_1c8e3c;
        }
    }
    ctx->pc = 0x1C8E38u;
    // 0x1c8e38: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1c8e3c:
    // 0x1c8e3c: 0x0  nop
    ctx->pc = 0x1c8e3cu;
    // NOP
    // 0x1c8e40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c8e44: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8E44u;
    {
        const bool branch_taken_0x1c8e44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c8e44) {
            ctx->pc = 0x1C8E54u;
            goto label_1c8e54;
        }
    }
    ctx->pc = 0x1C8E4Cu;
    // 0x1c8e4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c8e50: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1c8e54:
    // 0x1c8e54: 0x0  nop
    ctx->pc = 0x1c8e54u;
    // NOP
    // 0x1c8e58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c8e5c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1c8e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c8e60: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C8E60u;
    {
        const bool branch_taken_0x1c8e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E60u;
            // 0x1c8e64: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e60) {
            ctx->pc = 0x1C8E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8e10;
        }
    }
    ctx->pc = 0x1C8E68u;
    // 0x1c8e68: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x1c8e68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c8e6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c8e70: 0x8fa701a4  lw          $a3, 0x1A4($sp)
    ctx->pc = 0x1c8e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1c8e74: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1c8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c8e78: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1c8e7c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1c8e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c8e80: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x1c8e84: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1c8e84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1c8e88: 0x2e84021  addu        $t0, $s7, $t0
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x1c8e8c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1c8e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1c8e90: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1c8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c8e98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c8e9c: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x1c8e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x1c8ea0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1c8ea4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1c8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c8ea8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1c8ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1c8eac: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1c8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8eb0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1c8eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1c8eb4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1c8eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8eb8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1c8eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1c8ebc: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x1c8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x1c8ec0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1c8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ec4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1c8ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1c8ec8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1c8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ecc: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1c8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1c8ed0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c8ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ed4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1c8ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1c8ed8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x1c8ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x1c8edc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ee0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1c8ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1c8ee4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ee8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1c8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1c8eec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c8eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ef0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1c8ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1c8ef4: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1c8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x1c8ef8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8efc: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1c8efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1c8f00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f04: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1c8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1c8f08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f0c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1c8f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1c8f10: 0xc041bbc  jal         func_106EF0
    ctx->pc = 0x1C8F10u;
    SET_GPR_U32(ctx, 31, 0x1C8F18u);
    ctx->pc = 0x1C8F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F10u;
            // 0x1c8f14: 0xafa0013c  sw          $zero, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (runtime->hasFunction(0x106EF0u)) {
        auto targetFn = runtime->lookupFunction(0x106EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F18u; }
        if (ctx->pc != 0x1C8F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x106ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F18u; }
        if (ctx->pc != 0x1C8F18u) { return; }
    }
    ctx->pc = 0x1C8F18u;
label_1c8f18:
    // 0x1c8f18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c8f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c8f1c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C8F1Cu;
    {
        const bool branch_taken_0x1c8f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F1Cu;
            // 0x1c8f20: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f1c) {
            ctx->pc = 0x1C8F8Cu;
            goto label_1c8f8c;
        }
    }
    ctx->pc = 0x1C8F24u;
label_1c8f24:
    // 0x1c8f24: 0x0  nop
    ctx->pc = 0x1c8f24u;
    // NOP
    // 0x1c8f28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8f2c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1c8f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1c8f30: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1c8f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x1c8f34: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c8f38: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c8f3c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1c8f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c8f40: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x1c8f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x1c8f44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c8f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c8f48: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1c8f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1c8f4c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1C8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F54u);
    ctx->pc = 0x1C8F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F4Cu;
            // 0x1c8f50: 0xe7b40188  swc1        $f20, 0x188($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F54u; }
        if (ctx->pc != 0x1C8F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F54u; }
        if (ctx->pc != 0x1C8F54u) { return; }
    }
    ctx->pc = 0x1C8F54u;
label_1c8f54:
    // 0x1c8f54: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1c8f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f58: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x1c8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1c8f5c: 0x801821  addu        $v1, $a0, $zero
    ctx->pc = 0x1c8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1c8f60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8f64: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x1c8f64u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1c8f68: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c8f6c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1c8f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1c8f70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c8f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c8f74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c8f78: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1c8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f7c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1c8f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c8f80: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1c8f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f84: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c8f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c8f88: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1c8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1c8f8c:
    // 0x1c8f8c: 0x0  nop
    ctx->pc = 0x1c8f8cu;
    // NOP
    // 0x1c8f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8f94: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1c8f94u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8f9c: 0x0  nop
    ctx->pc = 0x1c8f9cu;
    // NOP
    // 0x1c8fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c8fa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c8fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c8fa8: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1c8fa8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8fac: 0x0  nop
    ctx->pc = 0x1c8facu;
    // NOP
    // 0x1c8fb0: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x1c8fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x1c8fb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c8fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8fb8: 0x0  nop
    ctx->pc = 0x1c8fb8u;
    // NOP
    // 0x1c8fbc: 0x4501ffd9  bc1t        . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C8FBCu;
    {
        const bool branch_taken_0x1c8fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8fbc) {
            ctx->pc = 0x1C8F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8f24;
        }
    }
    ctx->pc = 0x1C8FC4u;
    // 0x1c8fc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c8fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c8fc8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1c8fcc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c8fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8fd0: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x1C8FD0u;
    {
        const bool branch_taken_0x1c8fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fd0) {
            ctx->pc = 0x1C8D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8d8c;
        }
    }
    ctx->pc = 0x1C8FD8u;
label_1c8fd8:
    // 0x1c8fd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c8fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8fdc:
    // 0x1c8fdc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c8fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8fe0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c8fe4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8fe8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8fec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c8fecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8ff0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c8ff0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8ff4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c8ff4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8ff8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c8ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8ffc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c8ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9000: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c9000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9004: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c9004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9008: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c900c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C900Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C900Cu;
            // 0x1c9010: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9014u;
}
