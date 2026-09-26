#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _getAllRefs
// Address: 0x107e60 - 0x108564
void _getAllRefs_0x107e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getAllRefs_0x107e60");
#endif

    switch (ctx->pc) {
        case 0x107f7cu: goto label_107f7c;
        case 0x107fbcu: goto label_107fbc;
        case 0x107fe8u: goto label_107fe8;
        case 0x108028u: goto label_108028;
        case 0x108064u: goto label_108064;
        case 0x1080a4u: goto label_1080a4;
        case 0x1080ecu: goto label_1080ec;
        case 0x1081f0u: goto label_1081f0;
        case 0x108290u: goto label_108290;
        case 0x1082d8u: goto label_1082d8;
        case 0x108328u: goto label_108328;
        case 0x108340u: goto label_108340;
        case 0x1083e4u: goto label_1083e4;
        case 0x108424u: goto label_108424;
        case 0x10847cu: goto label_10847c;
        case 0x1084d4u: goto label_1084d4;
        case 0x10851cu: goto label_10851c;
        case 0x108534u: goto label_108534;
        default: break;
    }

    ctx->pc = 0x107e60u;

    // 0x107e60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x107e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x107e64: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x107e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107e68: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x107e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x107e6c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x107e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x107e70: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x107e70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e74: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x107e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x107e78: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x107e78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e7c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x107e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x107e80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x107e80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e84: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x107e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x107e88: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x107e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e8c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x107e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x107e90: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x107e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107e94: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x107e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x107e98: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x107e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e9c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x107e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x107ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ea4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x107ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x107ea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x107eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x107eb0: 0x8e220810  lw          $v0, 0x810($s1)
    ctx->pc = 0x107eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    // 0x107eb4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x107eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x107eb8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x107eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x107ebc: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x107ebcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x107ec0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x107ec4: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x107EC4u;
    {
        const bool branch_taken_0x107ec4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107EC4u;
            // 0x107ec8: 0xac4006bc  sw          $zero, 0x6BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ec4) {
            ctx->pc = 0x107EDCu;
            goto label_107edc;
        }
    }
    ctx->pc = 0x107ECCu;
    // 0x107ecc: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x107eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x107ed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107ed4: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x107ED4u;
    {
        const bool branch_taken_0x107ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107ED4u;
            // 0x107ed8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ed4) {
            ctx->pc = 0x108348u;
            goto label_108348;
        }
    }
    ctx->pc = 0x107EDCu;
label_107edc:
    // 0x107edc: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x107edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x107ee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107ee4: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x107EE4u;
    {
        const bool branch_taken_0x107ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107EE4u;
            // 0x107ee8: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ee4) {
            ctx->pc = 0x1080F4u;
            goto label_1080f4;
        }
    }
    ctx->pc = 0x107EECu;
    // 0x107eec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107ef0: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107EF0u;
    {
        const bool branch_taken_0x107ef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x107ef0) {
            ctx->pc = 0x107EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107EF0u;
            // 0x107ef4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107F04u;
            goto label_107f04;
        }
    }
    ctx->pc = 0x107EF8u;
    // 0x107ef8: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x107EF8u;
    {
        const bool branch_taken_0x107ef8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x107ef8) {
            ctx->pc = 0x107F38u;
            goto label_107f38;
        }
    }
    ctx->pc = 0x107F00u;
    // 0x107f00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_107f04:
    // 0x107f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f08: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x107f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x107f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f10: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x107f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x107f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x107f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x107f1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f20: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x107f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x107f24: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x107f28: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x107f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x107f2c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x107f2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f30: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x107F30u;
    {
        const bool branch_taken_0x107f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F30u;
            // 0x107f34: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f30) {
            ctx->pc = 0x108320u;
            goto label_108320;
        }
    }
    ctx->pc = 0x107F38u;
label_107f38:
    // 0x107f38: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x107F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F38u;
            // 0x107f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107FC4u;
            goto label_107fc4;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x107f44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x107f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x107f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f4c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x107f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x107f50: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x107f54: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x107f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x107f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x107f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x107f60: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x107f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x107f64: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x107f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x107f68: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x107f68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f6c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x107f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x107f70: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x107f70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f74: 0xc04215a  jal         func_108568
    ctx->pc = 0x107F74u;
    SET_GPR_U32(ctx, 31, 0x107F7Cu);
    ctx->pc = 0x107F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F74u;
            // 0x107f78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F7Cu; }
        if (ctx->pc != 0x107F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F7Cu; }
        if (ctx->pc != 0x107F7Cu) { return; }
    }
    ctx->pc = 0x107F7Cu;
label_107f7c:
    // 0x107f7c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x107f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f84: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x107f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x107f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x107f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f8c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x107f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x107f90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x107f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x107f94: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x107f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x107f98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107f98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x107f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x107fa0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x107fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x107fa4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x107fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x107fa8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x107fa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fac: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x107facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x107fb0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x107fb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fb4: 0xc04215a  jal         func_108568
    ctx->pc = 0x107FB4u;
    SET_GPR_U32(ctx, 31, 0x107FBCu);
    ctx->pc = 0x107FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107FB4u;
            // 0x107fb8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107FBCu; }
        if (ctx->pc != 0x107FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107FBCu; }
        if (ctx->pc != 0x107FBCu) { return; }
    }
    ctx->pc = 0x107FBCu;
label_107fbc:
    // 0x107fbc: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x107FBCu;
    {
        const bool branch_taken_0x107fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107FBCu;
            // 0x107fc0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fbc) {
            ctx->pc = 0x108344u;
            goto label_108344;
        }
    }
    ctx->pc = 0x107FC4u;
label_107fc4:
    // 0x107fc4: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x107FC4u;
    {
        const bool branch_taken_0x107fc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x107FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107FC4u;
            // 0x107fc8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fc4) {
            ctx->pc = 0x1080DCu;
            goto label_1080dc;
        }
    }
    ctx->pc = 0x107FCCu;
    // 0x107fcc: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x107fd0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x107fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fd4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fdc: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x107fe0: 0xc0426e4  jal         func_109B90
    ctx->pc = 0x107FE0u;
    SET_GPR_U32(ctx, 31, 0x107FE8u);
    ctx->pc = 0x107FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107FE0u;
            // 0x107fe4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B90u;
    if (runtime->hasFunction(0x109B90u)) {
        auto targetFn = runtime->lookupFunction(0x109B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107FE8u; }
        if (ctx->pc != 0x107FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x109b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107FE8u; }
        if (ctx->pc != 0x107FE8u) { return; }
    }
    ctx->pc = 0x107FE8u;
label_107fe8:
    // 0x107fe8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x107fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ff0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x107ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ff8: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x107ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x107ffc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x107ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x108000: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x108000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108008: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x108008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x10800c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10800cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108010: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x108010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x108014: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x108014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108018: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x108018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10801c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x10801cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108020: 0xc04215a  jal         func_108568
    ctx->pc = 0x108020u;
    SET_GPR_U32(ctx, 31, 0x108028u);
    ctx->pc = 0x108024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108020u;
            // 0x108024: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108028u; }
        if (ctx->pc != 0x108028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108028u; }
        if (ctx->pc != 0x108028u) { return; }
    }
    ctx->pc = 0x108028u;
label_108028:
    // 0x108028: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x108028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10802c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108030: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x108030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x108034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108038: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x108038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x10803c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10803cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108040: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108048: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x108048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10804c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x10804cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108050: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x108050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x108054: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x108054u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108058: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x108058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x10805c: 0xc04215a  jal         func_108568
    ctx->pc = 0x10805Cu;
    SET_GPR_U32(ctx, 31, 0x108064u);
    ctx->pc = 0x108060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10805Cu;
            // 0x108060: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108064u; }
        if (ctx->pc != 0x108064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108064u; }
        if (ctx->pc != 0x108064u) { return; }
    }
    ctx->pc = 0x108064u;
label_108064:
    // 0x108064: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10806c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108070: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x108070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108074: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x108074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x108078: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x108078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10807c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108084: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x108084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x108088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10808c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x10808cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x108090: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x108090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108094: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x108094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x108098: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x108098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10809c: 0xc04215a  jal         func_108568
    ctx->pc = 0x10809Cu;
    SET_GPR_U32(ctx, 31, 0x1080A4u);
    ctx->pc = 0x1080A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10809Cu;
            // 0x1080a0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080A4u; }
        if (ctx->pc != 0x1080A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080A4u; }
        if (ctx->pc != 0x1080A4u) { return; }
    }
    ctx->pc = 0x1080A4u;
label_1080a4:
    // 0x1080a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1080a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1080a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1080a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080ac: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1080acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1080b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1080b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080b4: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1080b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1080b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1080b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1080bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1080bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1080c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1080c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1080c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1080c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1080c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1080cc: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1080ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1080d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1080d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080d4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1080D4u;
    {
        const bool branch_taken_0x1080d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1080D4u;
            // 0x1080d8: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080d4) {
            ctx->pc = 0x108320u;
            goto label_108320;
        }
    }
    ctx->pc = 0x1080DCu;
label_1080dc:
    // 0x1080dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1080dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080e0: 0x24a50590  addiu       $a1, $a1, 0x590
    ctx->pc = 0x1080e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1424));
    // 0x1080e4: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x1080E4u;
    SET_GPR_U32(ctx, 31, 0x1080ECu);
    ctx->pc = 0x1080E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1080E4u;
            // 0x1080e8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080ECu; }
        if (ctx->pc != 0x1080ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1080ECu; }
        if (ctx->pc != 0x1080ECu) { return; }
    }
    ctx->pc = 0x1080ECu;
label_1080ec:
    // 0x1080ec: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1080ECu;
    {
        const bool branch_taken_0x1080ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1080ECu;
            // 0x1080f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080ec) {
            ctx->pc = 0x108344u;
            goto label_108344;
        }
    }
    ctx->pc = 0x1080F4u;
label_1080f4:
    // 0x1080f4: 0x8e2701c8  lw          $a3, 0x1C8($s1)
    ctx->pc = 0x1080f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1080f8: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x1080f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x1080fc: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1080fcu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x108100: 0x8e2401cc  lw          $a0, 0x1CC($s1)
    ctx->pc = 0x108100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x108104: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x108104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108108: 0x8e2301dc  lw          $v1, 0x1DC($s1)
    ctx->pc = 0x108108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x10810c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10810cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108110: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x108110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x108114: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x108114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x108118: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x108118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x10811c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x10811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x108120: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x108120u;
    {
        const bool branch_taken_0x108120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x108124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108120u;
            // 0x108124: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108120) {
            ctx->pc = 0x108140u;
            goto label_108140;
        }
    }
    ctx->pc = 0x108128u;
    // 0x108128: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x10812c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10812Cu;
    {
        const bool branch_taken_0x10812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10812Cu;
            // 0x108130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10812c) {
            ctx->pc = 0x108144u;
            goto label_108144;
        }
    }
    ctx->pc = 0x108134u;
    // 0x108134: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x108134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x108138: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x108138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x10813c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x10813cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_108140:
    // 0x108140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108144:
    // 0x108144: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108144u;
    {
        const bool branch_taken_0x108144 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x108144) {
            ctx->pc = 0x108148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108144u;
            // 0x108148: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108158u;
            goto label_108158;
        }
    }
    ctx->pc = 0x10814Cu;
    // 0x10814c: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x10814Cu;
    {
        const bool branch_taken_0x10814c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x108150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10814Cu;
            // 0x108150: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10814c) {
            ctx->pc = 0x108194u;
            goto label_108194;
        }
    }
    ctx->pc = 0x108154u;
    // 0x108154: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x108154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_108158:
    // 0x108158: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x10815c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108164: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10816c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x10816cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x108170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108174: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x108174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x108178: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x108178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x10817c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x10817cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x108180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108184: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x108184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x108188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10818c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x10818Cu;
    {
        const bool branch_taken_0x10818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10818Cu;
            // 0x108190: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10818c) {
            ctx->pc = 0x108314u;
            goto label_108314;
        }
    }
    ctx->pc = 0x108194u;
label_108194:
    // 0x108194: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x108194u;
    {
        const bool branch_taken_0x108194 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x108198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108194u;
            // 0x108198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108194) {
            ctx->pc = 0x108264u;
            goto label_108264;
        }
    }
    ctx->pc = 0x10819Cu;
    // 0x10819c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1081a0: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1081a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1081a8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1081a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1081ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1081b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1081b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1081b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1081b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1081b8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1081b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1081bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1081c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1081c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1081c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1081c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1081c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1081d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1081d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081d4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1081d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1081d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1081d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081dc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1081dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1081e0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1081e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1081e4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1081e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081e8: 0xc04215a  jal         func_108568
    ctx->pc = 0x1081E8u;
    SET_GPR_U32(ctx, 31, 0x1081F0u);
    ctx->pc = 0x1081ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1081E8u;
            // 0x1081ec: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081F0u; }
        if (ctx->pc != 0x1081F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081F0u; }
        if (ctx->pc != 0x1081F0u) { return; }
    }
    ctx->pc = 0x1081F0u;
label_1081f0:
    // 0x1081f0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1081f4: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1081F4u;
    {
        const bool branch_taken_0x1081f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1081F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1081F4u;
            // 0x1081f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081f4) {
            ctx->pc = 0x108218u;
            goto label_108218;
        }
    }
    ctx->pc = 0x1081FCu;
    // 0x1081fc: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1081fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x108200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108200u;
    {
        const bool branch_taken_0x108200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108200u;
            // 0x108204: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108200) {
            ctx->pc = 0x10821Cu;
            goto label_10821c;
        }
    }
    ctx->pc = 0x108208u;
    // 0x108208: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x108208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10820c: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x10820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x108210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108210u;
    {
        const bool branch_taken_0x108210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108210u;
            // 0x108214: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108210) {
            ctx->pc = 0x10821Cu;
            goto label_10821c;
        }
    }
    ctx->pc = 0x108218u;
label_108218:
    // 0x108218: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x108218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_10821c:
    // 0x10821c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10821cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x108220: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x108224: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x108228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10822c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108234: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108238: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10823c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108240: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x108240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108244: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x108244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x108248: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x108248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10824c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10824cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108250: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x108250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x108254: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x108254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x108258: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x108258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10825c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x10825Cu;
    {
        const bool branch_taken_0x10825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10825Cu;
            // 0x108260: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10825c) {
            ctx->pc = 0x108320u;
            goto label_108320;
        }
    }
    ctx->pc = 0x108264u;
label_108264:
    // 0x108264: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x108264u;
    {
        const bool branch_taken_0x108264 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x108268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108264u;
            // 0x108268: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108264) {
            ctx->pc = 0x108330u;
            goto label_108330;
        }
    }
    ctx->pc = 0x10826Cu;
    // 0x10826c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x10826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x108270: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x108270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108274: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x108274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108278: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x108278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10827c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108280: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x108280u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
    // 0x108284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108288: 0xc0426e4  jal         func_109B90
    ctx->pc = 0x108288u;
    SET_GPR_U32(ctx, 31, 0x108290u);
    ctx->pc = 0x10828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108288u;
            // 0x10828c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B90u;
    if (runtime->hasFunction(0x109B90u)) {
        auto targetFn = runtime->lookupFunction(0x109B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108290u; }
        if (ctx->pc != 0x108290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x109b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108290u; }
        if (ctx->pc != 0x108290u) { return; }
    }
    ctx->pc = 0x108290u;
label_108290:
    // 0x108290: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x108290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x108294: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x108298: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10829c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1082a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1082a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1082a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1082a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1082a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1082ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1082acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082b0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1082b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1082b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1082b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1082b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1082bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1082bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1082c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1082c4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1082c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1082c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1082c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1082cc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1082ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d0: 0xc04215a  jal         func_108568
    ctx->pc = 0x1082D0u;
    SET_GPR_U32(ctx, 31, 0x1082D8u);
    ctx->pc = 0x1082D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1082D0u;
            // 0x1082d4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082D8u; }
        if (ctx->pc != 0x1082D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082D8u; }
        if (ctx->pc != 0x1082D8u) { return; }
    }
    ctx->pc = 0x1082D8u;
label_1082d8:
    // 0x1082d8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1082d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1082dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1082dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1082e0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1082e4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1082e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1082e8: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1082e8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1082ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1082ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1082f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1082f4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1082f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1082f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1082fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1082fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108304: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x108304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x108308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10830c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x108310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108314:
    // 0x108314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108318: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x108318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10831c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x10831cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_108320:
    // 0x108320: 0xc04215a  jal         func_108568
    ctx->pc = 0x108320u;
    SET_GPR_U32(ctx, 31, 0x108328u);
    ctx->pc = 0x108324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108320u;
            // 0x108324: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108328u; }
        if (ctx->pc != 0x108328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108328u; }
        if (ctx->pc != 0x108328u) { return; }
    }
    ctx->pc = 0x108328u;
label_108328:
    // 0x108328: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108328u;
    {
        const bool branch_taken_0x108328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108328u;
            // 0x10832c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108328) {
            ctx->pc = 0x108344u;
            goto label_108344;
        }
    }
    ctx->pc = 0x108330u;
label_108330:
    // 0x108330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108334: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x108334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
    // 0x108338: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x108338u;
    SET_GPR_U32(ctx, 31, 0x108340u);
    ctx->pc = 0x10833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108338u;
            // 0x10833c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108340u; }
        if (ctx->pc != 0x108340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108340u; }
        if (ctx->pc != 0x108340u) { return; }
    }
    ctx->pc = 0x108340u;
label_108340:
    // 0x108340: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x108340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108344:
    // 0x108344: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x108344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_108348:
    // 0x108348: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x108348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x10834c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x10834Cu;
    {
        const bool branch_taken_0x10834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10834Cu;
            // 0x108350: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10834c) {
            ctx->pc = 0x108534u;
            goto label_108534;
        }
    }
    ctx->pc = 0x108354u;
    // 0x108354: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x108354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x108358: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x108358u;
    {
        const bool branch_taken_0x108358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108358u;
            // 0x10835c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108358) {
            ctx->pc = 0x10842Cu;
            goto label_10842c;
        }
    }
    ctx->pc = 0x108360u;
    // 0x108360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108364: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108364u;
    {
        const bool branch_taken_0x108364 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x108368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108364u;
            // 0x108368: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108364) {
            ctx->pc = 0x1083A4u;
            goto label_1083a4;
        }
    }
    ctx->pc = 0x10836Cu;
    // 0x10836c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108374: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x108374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x108378: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x108378u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10837c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x108380: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x108380u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108384: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x108384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10838c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x108390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108394: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x108394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x108398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10839c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10839Cu;
    {
        const bool branch_taken_0x10839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10839Cu;
            // 0x1083a0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10839c) {
            ctx->pc = 0x10841Cu;
            goto label_10841c;
        }
    }
    ctx->pc = 0x1083A4u;
label_1083a4:
    // 0x1083a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1083a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1083a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083ac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1083acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1083b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1083b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083b4: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x1083b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x1083b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1083b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1083bc: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1083bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1083c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1083c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1083c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1083c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1083c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1083cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1083ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1083d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1083d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083d4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1083d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1083d8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1083d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083dc: 0xc04215a  jal         func_108568
    ctx->pc = 0x1083DCu;
    SET_GPR_U32(ctx, 31, 0x1083E4u);
    ctx->pc = 0x1083E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083DCu;
            // 0x1083e0: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083E4u; }
        if (ctx->pc != 0x1083E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083E4u; }
        if (ctx->pc != 0x1083E4u) { return; }
    }
    ctx->pc = 0x1083E4u;
label_1083e4:
    // 0x1083e4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1083e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1083e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083ec: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1083ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1083f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1083f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1083f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1083f8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1083f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1083fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1083fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108400: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x108400u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108404: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x108404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x108408: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x108408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10840c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x10840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x108410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108414: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x108414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108418: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x108418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_10841c:
    // 0x10841c: 0xc04215a  jal         func_108568
    ctx->pc = 0x10841Cu;
    SET_GPR_U32(ctx, 31, 0x108424u);
    ctx->pc = 0x108420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10841Cu;
            // 0x108420: 0x8c8501bc  lw          $a1, 0x1BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108424u; }
        if (ctx->pc != 0x108424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108424u; }
        if (ctx->pc != 0x108424u) { return; }
    }
    ctx->pc = 0x108424u;
label_108424:
    // 0x108424: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x108424u;
    {
        const bool branch_taken_0x108424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108424u;
            // 0x108428: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108424) {
            ctx->pc = 0x108538u;
            goto label_108538;
        }
    }
    ctx->pc = 0x10842Cu;
label_10842c:
    // 0x10842c: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10842Cu;
    {
        const bool branch_taken_0x10842c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x108430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10842Cu;
            // 0x108430: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10842c) {
            ctx->pc = 0x108484u;
            goto label_108484;
        }
    }
    ctx->pc = 0x108434u;
    // 0x108434: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x108434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x108438: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x108438u;
    {
        const bool branch_taken_0x108438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108438) {
            ctx->pc = 0x10843Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108438u;
            // 0x10843c: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108444u;
            goto label_108444;
        }
    }
    ctx->pc = 0x108440u;
    // 0x108440: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x108440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_108444:
    // 0x108444: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10844c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x108450: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x108450u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108454: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x108454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x108458: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x108458u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10845c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10845cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108464: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x108464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x108468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10846c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x108470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x108470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108474: 0xc04215a  jal         func_108568
    ctx->pc = 0x108474u;
    SET_GPR_U32(ctx, 31, 0x10847Cu);
    ctx->pc = 0x108478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108474u;
            // 0x108478: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10847Cu; }
        if (ctx->pc != 0x10847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10847Cu; }
        if (ctx->pc != 0x10847Cu) { return; }
    }
    ctx->pc = 0x10847Cu;
label_10847c:
    // 0x10847c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x10847Cu;
    {
        const bool branch_taken_0x10847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10847Cu;
            // 0x108480: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10847c) {
            ctx->pc = 0x108538u;
            goto label_108538;
        }
    }
    ctx->pc = 0x108484u;
label_108484:
    // 0x108484: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x108484u;
    {
        const bool branch_taken_0x108484 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x108488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108484u;
            // 0x108488: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108484) {
            ctx->pc = 0x108524u;
            goto label_108524;
        }
    }
    ctx->pc = 0x10848Cu;
    // 0x10848c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x10848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x108490: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x108490u;
    {
        const bool branch_taken_0x108490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108490) {
            ctx->pc = 0x108494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108490u;
            // 0x108494: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10849Cu;
            goto label_10849c;
        }
    }
    ctx->pc = 0x108498u;
    // 0x108498: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x108498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_10849c:
    // 0x10849c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x10849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1084a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1084a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084a4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1084a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1084a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1084a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1084acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1084b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1084b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084b4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1084b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1084b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1084b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1084bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1084c0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1084c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1084c4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1084c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1084c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1084c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084cc: 0xc04215a  jal         func_108568
    ctx->pc = 0x1084CCu;
    SET_GPR_U32(ctx, 31, 0x1084D4u);
    ctx->pc = 0x1084D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1084CCu;
            // 0x1084d0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084D4u; }
        if (ctx->pc != 0x1084D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084D4u; }
        if (ctx->pc != 0x1084D4u) { return; }
    }
    ctx->pc = 0x1084D4u;
label_1084d4:
    // 0x1084d4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x1084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1084d8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1084D8u;
    {
        const bool branch_taken_0x1084d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1084d8) {
            ctx->pc = 0x1084DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1084D8u;
            // 0x1084dc: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1084E4u;
            goto label_1084e4;
        }
    }
    ctx->pc = 0x1084E0u;
    // 0x1084e0: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1084e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_1084e4:
    // 0x1084e4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1084e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1084e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084ec: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1084ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1084f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1084f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1084f8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1084f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1084fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108504: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x108504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x108508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10850c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10850cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x108510: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x108510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108514: 0xc04215a  jal         func_108568
    ctx->pc = 0x108514u;
    SET_GPR_U32(ctx, 31, 0x10851Cu);
    ctx->pc = 0x108518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108514u;
            // 0x108518: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108568u;
    if (runtime->hasFunction(0x108568u)) {
        auto targetFn = runtime->lookupFunction(0x108568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10851Cu; }
        if (ctx->pc != 0x10851Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x108568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10851Cu; }
        if (ctx->pc != 0x10851Cu) { return; }
    }
    ctx->pc = 0x10851Cu;
label_10851c:
    // 0x10851c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10851Cu;
    {
        const bool branch_taken_0x10851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10851Cu;
            // 0x108520: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10851c) {
            ctx->pc = 0x108538u;
            goto label_108538;
        }
    }
    ctx->pc = 0x108524u;
label_108524:
    // 0x108524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108528: 0x24a505d0  addiu       $a1, $a1, 0x5D0
    ctx->pc = 0x108528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1488));
    // 0x10852c: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x10852Cu;
    SET_GPR_U32(ctx, 31, 0x108534u);
    ctx->pc = 0x108530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10852Cu;
            // 0x108530: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108534u; }
        if (ctx->pc != 0x108534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108534u; }
        if (ctx->pc != 0x108534u) { return; }
    }
    ctx->pc = 0x108534u;
label_108534:
    // 0x108534: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x108534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_108538:
    // 0x108538: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x108538u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10853c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x10853cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x108540: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x108540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x108544: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108548: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x108548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10854c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x10854cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108550: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x108550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108554: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x108554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108558: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10855c: 0x3e00008  jr          $ra
    ctx->pc = 0x10855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10855Cu;
            // 0x108560: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108564u;
}
