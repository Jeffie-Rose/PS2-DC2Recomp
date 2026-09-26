#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CMenuEffectFv
// Address: 0x230960 - 0x231eb8
void Step__11CMenuEffectFv_0x230960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CMenuEffectFv_0x230960");
#endif

    switch (ctx->pc) {
        case 0x230a48u: goto label_230a48;
        case 0x230a90u: goto label_230a90;
        case 0x230ab4u: goto label_230ab4;
        case 0x230ba4u: goto label_230ba4;
        case 0x230c40u: goto label_230c40;
        case 0x230cf4u: goto label_230cf4;
        case 0x230eb4u: goto label_230eb4;
        case 0x230f44u: goto label_230f44;
        case 0x2310c0u: goto label_2310c0;
        case 0x231130u: goto label_231130;
        case 0x231154u: goto label_231154;
        case 0x23119cu: goto label_23119c;
        case 0x2311a8u: goto label_2311a8;
        case 0x2311e8u: goto label_2311e8;
        case 0x2311f4u: goto label_2311f4;
        case 0x231278u: goto label_231278;
        case 0x23133cu: goto label_23133c;
        case 0x231344u: goto label_231344;
        case 0x231374u: goto label_231374;
        case 0x23137cu: goto label_23137c;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313e8u: goto label_2313e8;
        case 0x231404u: goto label_231404;
        case 0x23149cu: goto label_23149c;
        case 0x2314a8u: goto label_2314a8;
        case 0x23150cu: goto label_23150c;
        case 0x2315b0u: goto label_2315b0;
        case 0x23165cu: goto label_23165c;
        case 0x23168cu: goto label_23168c;
        case 0x231710u: goto label_231710;
        case 0x231720u: goto label_231720;
        case 0x2317f4u: goto label_2317f4;
        case 0x2318bcu: goto label_2318bc;
        case 0x2319b0u: goto label_2319b0;
        case 0x231a4cu: goto label_231a4c;
        case 0x231a90u: goto label_231a90;
        case 0x231ad0u: goto label_231ad0;
        case 0x231b4cu: goto label_231b4c;
        case 0x231b6cu: goto label_231b6c;
        case 0x231becu: goto label_231bec;
        case 0x231bf4u: goto label_231bf4;
        case 0x231c1cu: goto label_231c1c;
        case 0x231c24u: goto label_231c24;
        case 0x231c48u: goto label_231c48;
        case 0x231c84u: goto label_231c84;
        case 0x231df0u: goto label_231df0;
        default: break;
    }

    ctx->pc = 0x230960u;

    // 0x230960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x230960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x230964: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x230964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x230968: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x230968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x23096c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x230970: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x230970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x230974: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x230974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x230978: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x230978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23097c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x230980: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x230980u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x230984: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x230984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x230988: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x230988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x23098c: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x23098cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x230990: 0x1060053e  beqz        $v1, . + 4 + (0x53E << 2)
    ctx->pc = 0x230990u;
    {
        const bool branch_taken_0x230990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230990u;
            // 0x230994: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230990) {
            ctx->pc = 0x231E8Cu;
            goto label_231e8c;
        }
    }
    ctx->pc = 0x230998u;
    // 0x230998: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x230998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x23099c: 0x1220053b  beqz        $s1, . + 4 + (0x53B << 2)
    ctx->pc = 0x23099Cu;
    {
        const bool branch_taken_0x23099c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23099c) {
            ctx->pc = 0x231E8Cu;
            goto label_231e8c;
        }
    }
    ctx->pc = 0x2309A4u;
    // 0x2309a4: 0x82500009  lb          $s0, 0x9($s2)
    ctx->pc = 0x2309a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x2309a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2309a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2309ac: 0x1203046c  beq         $s0, $v1, . + 4 + (0x46C << 2)
    ctx->pc = 0x2309ACu;
    {
        const bool branch_taken_0x2309ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309ACu;
            // 0x2309b0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309ac) {
            ctx->pc = 0x231B60u;
            goto label_231b60;
        }
    }
    ctx->pc = 0x2309B4u;
    // 0x2309b4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2309b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2309b8: 0x12030357  beq         $s0, $v1, . + 4 + (0x357 << 2)
    ctx->pc = 0x2309B8u;
    {
        const bool branch_taken_0x2309b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309B8u;
            // 0x2309bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309b8) {
            ctx->pc = 0x231718u;
            goto label_231718;
        }
    }
    ctx->pc = 0x2309C0u;
    // 0x2309c0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2309c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2309c4: 0x12030324  beq         $s0, $v1, . + 4 + (0x324 << 2)
    ctx->pc = 0x2309C4u;
    {
        const bool branch_taken_0x2309c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309C4u;
            // 0x2309c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309c4) {
            ctx->pc = 0x231658u;
            goto label_231658;
        }
    }
    ctx->pc = 0x2309CCu;
    // 0x2309cc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2309ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2309d0: 0x120302f1  beq         $s0, $v1, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x2309D0u;
    {
        const bool branch_taken_0x2309d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309D0u;
            // 0x2309d4: 0x3c034120  lui         $v1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309d0) {
            ctx->pc = 0x231598u;
            goto label_231598;
        }
    }
    ctx->pc = 0x2309D8u;
    // 0x2309d8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2309d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2309dc: 0x12030280  beq         $s0, $v1, . + 4 + (0x280 << 2)
    ctx->pc = 0x2309DCu;
    {
        const bool branch_taken_0x2309dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309DCu;
            // 0x2309e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309dc) {
            ctx->pc = 0x2313E0u;
            goto label_2313e0;
        }
    }
    ctx->pc = 0x2309E4u;
    // 0x2309e4: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2309e8: 0x1203024b  beq         $s0, $v1, . + 4 + (0x24B << 2)
    ctx->pc = 0x2309E8u;
    {
        const bool branch_taken_0x2309e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309E8u;
            // 0x2309ec: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309e8) {
            ctx->pc = 0x231318u;
            goto label_231318;
        }
    }
    ctx->pc = 0x2309F0u;
    // 0x2309f0: 0x1203051f  beq         $s0, $v1, . + 4 + (0x51F << 2)
    ctx->pc = 0x2309F0u;
    {
        const bool branch_taken_0x2309f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309F0u;
            // 0x2309f4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309f0) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x2309F8u;
    // 0x2309f8: 0x120301ae  beq         $s0, $v1, . + 4 + (0x1AE << 2)
    ctx->pc = 0x2309F8u;
    {
        const bool branch_taken_0x2309f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2309FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2309F8u;
            // 0x2309fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309f8) {
            ctx->pc = 0x2310B4u;
            goto label_2310b4;
        }
    }
    ctx->pc = 0x230A00u;
    // 0x230a00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x230a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x230a04: 0x120301ac  beq         $s0, $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x230A04u;
    {
        const bool branch_taken_0x230a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x230A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A04u;
            // 0x230a08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a04) {
            ctx->pc = 0x2310B8u;
            goto label_2310b8;
        }
    }
    ctx->pc = 0x230A0Cu;
    // 0x230a0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x230a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230a10: 0x12030106  beq         $s0, $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x230A10u;
    {
        const bool branch_taken_0x230a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x230A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A10u;
            // 0x230a14: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a10) {
            ctx->pc = 0x230E2Cu;
            goto label_230e2c;
        }
    }
    ctx->pc = 0x230A18u;
    // 0x230a18: 0x120300f9  beq         $s0, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x230A18u;
    {
        const bool branch_taken_0x230a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x230A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A18u;
            // 0x230a1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a18) {
            ctx->pc = 0x230E00u;
            goto label_230e00;
        }
    }
    ctx->pc = 0x230A20u;
    // 0x230a20: 0x120300af  beq         $s0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x230A20u;
    {
        const bool branch_taken_0x230a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x230A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A20u;
            // 0x230a24: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a20) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230A28u;
    // 0x230a28: 0x1214007d  beq         $s0, $s4, . + 4 + (0x7D << 2)
    ctx->pc = 0x230A28u;
    {
        const bool branch_taken_0x230a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x230A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A28u;
            // 0x230a2c: 0x3c043e80  lui         $a0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a28) {
            ctx->pc = 0x230C20u;
            goto label_230c20;
        }
    }
    ctx->pc = 0x230A30u;
    // 0x230a30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230A30u;
    {
        const bool branch_taken_0x230a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A30u;
            // 0x230a34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a30) {
            ctx->pc = 0x230A40u;
            goto label_230a40;
        }
    }
    ctx->pc = 0x230A38u;
    // 0x230a38: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x230A38u;
    {
        const bool branch_taken_0x230a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230A38u;
            // 0x230a3c: 0x82430009  lb          $v1, 0x9($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a38) {
            ctx->pc = 0x231E74u;
            goto label_231e74;
        }
    }
    ctx->pc = 0x230A40u;
label_230a40:
    // 0x230a40: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x230A40u;
    {
        const bool branch_taken_0x230a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230a40) {
            ctx->pc = 0x230C00u;
            goto label_230c00;
        }
    }
    ctx->pc = 0x230A48u;
label_230a48:
    // 0x230a48: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x230a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230a4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x230a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230a50: 0x0  nop
    ctx->pc = 0x230a50u;
    // NOP
    // 0x230a54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230a58: 0x0  nop
    ctx->pc = 0x230a58u;
    // NOP
    // 0x230a5c: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x230A5Cu;
    {
        const bool branch_taken_0x230a5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230a5c) {
            ctx->pc = 0x230BF4u;
            goto label_230bf4;
        }
    }
    ctx->pc = 0x230A64u;
    // 0x230a64: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x230a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x230a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x230a6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x230a70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x230a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230a74: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x230a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230a78: 0xc634001c  lwc1        $f20, 0x1C($s1)
    ctx->pc = 0x230a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x230a7c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x230a7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x230a80: 0x0  nop
    ctx->pc = 0x230a80u;
    // NOP
    // 0x230a84: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x230a84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x230a88: 0xc047964  jal         func_11E590
    ctx->pc = 0x230A88u;
    SET_GPR_U32(ctx, 31, 0x230A90u);
    ctx->pc = 0x230A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230A88u;
            // 0x230a8c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A90u; }
        if (ctx->pc != 0x230A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A90u; }
        if (ctx->pc != 0x230A90u) { return; }
    }
    ctx->pc = 0x230A90u;
label_230a90:
    // 0x230a90: 0x86420014  lh          $v0, 0x14($s2)
    ctx->pc = 0x230a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x230a94: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x230a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x230a98: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x230a98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x230a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230aa0: 0x0  nop
    ctx->pc = 0x230aa0u;
    // NOP
    // 0x230aa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230aa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230aac: 0xc047a42  jal         func_11E908
    ctx->pc = 0x230AACu;
    SET_GPR_U32(ctx, 31, 0x230AB4u);
    ctx->pc = 0x230AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230AACu;
            // 0x230ab0: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230AB4u; }
        if (ctx->pc != 0x230AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230AB4u; }
        if (ctx->pc != 0x230AB4u) { return; }
    }
    ctx->pc = 0x230AB4u;
label_230ab4:
    // 0x230ab4: 0x86450016  lh          $a1, 0x16($s2)
    ctx->pc = 0x230ab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x230ab8: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x230ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x230abc: 0x4600a0c2  mul.s       $f3, $f20, $f0
    ctx->pc = 0x230abcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x230ac0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x230ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x230ac4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x230ac4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230acc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x230accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x230ad0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x230ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230ad4: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x230ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x230ad8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x230ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x230adc: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x230adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230ae0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x230ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ae4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x230ae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230ae8: 0x0  nop
    ctx->pc = 0x230ae8u;
    // NOP
    // 0x230aec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x230aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x230af0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x230af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x230af4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x230af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230af8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230afc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x230AFCu;
    {
        const bool branch_taken_0x230afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230AFCu;
            // 0x230b00: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230afc) {
            ctx->pc = 0x230B1Cu;
            goto label_230b1c;
        }
    }
    ctx->pc = 0x230B04u;
    // 0x230b04: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x230b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b08: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x230b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x230b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b10: 0x0  nop
    ctx->pc = 0x230b10u;
    // NOP
    // 0x230b14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230b18: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x230b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_230b1c:
    // 0x230b1c: 0x0  nop
    ctx->pc = 0x230b1cu;
    // NOP
    // 0x230b20: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x230b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b28: 0x0  nop
    ctx->pc = 0x230b28u;
    // NOP
    // 0x230b2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230b30: 0x0  nop
    ctx->pc = 0x230b30u;
    // NOP
    // 0x230b34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x230B34u;
    {
        const bool branch_taken_0x230b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230b34) {
            ctx->pc = 0x230B40u;
            goto label_230b40;
        }
    }
    ctx->pc = 0x230B3Cu;
    // 0x230b3c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x230b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_230b40:
    // 0x230b40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x230b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x230b44: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x230b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230b48: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x230b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x230b4c: 0x0  nop
    ctx->pc = 0x230b4cu;
    // NOP
    // 0x230b50: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x230b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x230b54: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x230b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x230b58: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x230b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230b5c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x230b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230b60: 0x0  nop
    ctx->pc = 0x230b60u;
    // NOP
    // 0x230b64: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x230B64u;
    {
        const bool branch_taken_0x230b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230b64) {
            ctx->pc = 0x230BA4u;
            goto label_230ba4;
        }
    }
    ctx->pc = 0x230B6Cu;
    // 0x230b6c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x230b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b70: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x230b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x230b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b78: 0x0  nop
    ctx->pc = 0x230b78u;
    // NOP
    // 0x230b7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230b80: 0x0  nop
    ctx->pc = 0x230b80u;
    // NOP
    // 0x230b84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x230B84u;
    {
        const bool branch_taken_0x230b84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230B84u;
            // 0x230b88: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b84) {
            ctx->pc = 0x230BA4u;
            goto label_230ba4;
        }
    }
    ctx->pc = 0x230B8Cu;
    // 0x230b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x230b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x230b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b9c: 0xc08bfc8  jal         func_22FF20
    ctx->pc = 0x230B9Cu;
    SET_GPR_U32(ctx, 31, 0x230BA4u);
    ctx->pc = 0x230BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230B9Cu;
            // 0x230ba0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FF20u;
    if (runtime->hasFunction(0x22FF20u)) {
        auto targetFn = runtime->lookupFunction(0x22FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BA4u; }
        if (ctx->pc != 0x230BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii_0x22ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230BA4u; }
        if (ctx->pc != 0x230BA4u) { return; }
    }
    ctx->pc = 0x230BA4u;
label_230ba4:
    // 0x230ba4: 0x0  nop
    ctx->pc = 0x230ba4u;
    // NOP
    // 0x230ba8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x230ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x230bac: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x230bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230bb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230bb4: 0x0  nop
    ctx->pc = 0x230bb4u;
    // NOP
    // 0x230bb8: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x230bb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230bbc: 0x0  nop
    ctx->pc = 0x230bbcu;
    // NOP
    // 0x230bc0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x230BC0u;
    {
        const bool branch_taken_0x230bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230bc0) {
            ctx->pc = 0x230BECu;
            goto label_230bec;
        }
    }
    ctx->pc = 0x230BC8u;
    // 0x230bc8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x230bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230bcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x230bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x230bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230bd4: 0x0  nop
    ctx->pc = 0x230bd4u;
    // NOP
    // 0x230bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230bdc: 0x0  nop
    ctx->pc = 0x230bdcu;
    // NOP
    // 0x230be0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x230BE0u;
    {
        const bool branch_taken_0x230be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230BE0u;
            // 0x230be4: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230be0) {
            ctx->pc = 0x230BECu;
            goto label_230bec;
        }
    }
    ctx->pc = 0x230BE8u;
    // 0x230be8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x230be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_230bec:
    // 0x230bec: 0x0  nop
    ctx->pc = 0x230becu;
    // NOP
    // 0x230bf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x230bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230bf4:
    // 0x230bf4: 0x0  nop
    ctx->pc = 0x230bf4u;
    // NOP
    // 0x230bf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x230bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x230bfc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x230bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_230c00:
    // 0x230c00: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x230c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x230c04: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x230c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230c08: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x230C08u;
    {
        const bool branch_taken_0x230c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230c08) {
            ctx->pc = 0x230A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230a48;
        }
    }
    ctx->pc = 0x230C10u;
    // 0x230c10: 0x12800497  beqz        $s4, . + 4 + (0x497 << 2)
    ctx->pc = 0x230C10u;
    {
        const bool branch_taken_0x230c10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c10) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230C18u;
    // 0x230c18: 0x10000495  b           . + 4 + (0x495 << 2)
    ctx->pc = 0x230C18u;
    {
        const bool branch_taken_0x230c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C18u;
            // 0x230c1c: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c18) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230C20u;
label_230c20:
    // 0x230c20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x230c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x230c24: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x230c24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230c30: 0x3c044402  lui         $a0, 0x4402
    ctx->pc = 0x230c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17410 << 16));
    // 0x230c34: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x230c34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x230c38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x230C38u;
    {
        const bool branch_taken_0x230c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230C38u;
            // 0x230c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c38) {
            ctx->pc = 0x230CC0u;
            goto label_230cc0;
        }
    }
    ctx->pc = 0x230C40u;
label_230c40:
    // 0x230c40: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x230c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x230c44: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x230c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x230c48: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x230c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230c4c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x230c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230c50: 0x0  nop
    ctx->pc = 0x230c50u;
    // NOP
    // 0x230c54: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x230C54u;
    {
        const bool branch_taken_0x230c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230c54) {
            ctx->pc = 0x230CB8u;
            goto label_230cb8;
        }
    }
    ctx->pc = 0x230C5Cu;
    // 0x230c5c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x230c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230c60: 0x86430014  lh          $v1, 0x14($s2)
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x230c64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x230c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230c68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x230c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c6c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x230c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x230c70: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x230c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x230c74: 0x468020e0  cvt.s.w     $f3, $f4
    ctx->pc = 0x230c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x230c78: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x230c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x230c7c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x230c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x230c80: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x230c84: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x230c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x230c88: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x230c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230c8c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x230c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230c90: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x230c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x230c94: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x230c94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x230c98: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x230c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x230c9c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x230c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x230ca0: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x230ca0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x230ca4: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x230ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x230ca8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x230ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x230cac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x230cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230cb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x230cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_230cb8:
    // 0x230cb8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x230cbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x230cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_230cc0:
    // 0x230cc0: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x230cc4: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x230cc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230cc8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x230CC8u;
    {
        const bool branch_taken_0x230cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230cc8) {
            ctx->pc = 0x230C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230c40;
        }
    }
    ctx->pc = 0x230CD0u;
    // 0x230cd0: 0x12800467  beqz        $s4, . + 4 + (0x467 << 2)
    ctx->pc = 0x230CD0u;
    {
        const bool branch_taken_0x230cd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x230cd0) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230CD8u;
    // 0x230cd8: 0x10000465  b           . + 4 + (0x465 << 2)
    ctx->pc = 0x230CD8u;
    {
        const bool branch_taken_0x230cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230CD8u;
            // 0x230cdc: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd8) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230CE0u;
label_230ce0:
    // 0x230ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230ce8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x230ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x230cec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x230CECu;
    {
        const bool branch_taken_0x230cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230CECu;
            // 0x230cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cec) {
            ctx->pc = 0x230DE0u;
            goto label_230de0;
        }
    }
    ctx->pc = 0x230CF4u;
label_230cf4:
    // 0x230cf4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x230cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x230cf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x230cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230cfc: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x230cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d00: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x230d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230d04: 0x0  nop
    ctx->pc = 0x230d04u;
    // NOP
    // 0x230d08: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x230D08u;
    {
        const bool branch_taken_0x230d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230d08) {
            ctx->pc = 0x230DD4u;
            goto label_230dd4;
        }
    }
    ctx->pc = 0x230D10u;
    // 0x230d10: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x230d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230d14: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x230d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230d1c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x230d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x230d20: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x230d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230d24: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x230d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230d2c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x230d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x230d30: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x230d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d34: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x230d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230d38: 0x0  nop
    ctx->pc = 0x230d38u;
    // NOP
    // 0x230d3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x230D3Cu;
    {
        const bool branch_taken_0x230d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230d3c) {
            ctx->pc = 0x230D4Cu;
            goto label_230d4c;
        }
    }
    ctx->pc = 0x230D44u;
    // 0x230d44: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x230d44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x230d48: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x230d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_230d4c:
    // 0x230d4c: 0x0  nop
    ctx->pc = 0x230d4cu;
    // NOP
    // 0x230d50: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x230d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d54: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x230d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230d58: 0x0  nop
    ctx->pc = 0x230d58u;
    // NOP
    // 0x230d5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x230D5Cu;
    {
        const bool branch_taken_0x230d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230d5c) {
            ctx->pc = 0x230D6Cu;
            goto label_230d6c;
        }
    }
    ctx->pc = 0x230D64u;
    // 0x230d64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x230d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x230d68: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x230d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_230d6c:
    // 0x230d6c: 0x0  nop
    ctx->pc = 0x230d6cu;
    // NOP
    // 0x230d70: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x230d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d74: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x230d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230d78: 0x0  nop
    ctx->pc = 0x230d78u;
    // NOP
    // 0x230d7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x230D7Cu;
    {
        const bool branch_taken_0x230d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230d7c) {
            ctx->pc = 0x230D8Cu;
            goto label_230d8c;
        }
    }
    ctx->pc = 0x230D84u;
    // 0x230d84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x230d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x230d88: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x230d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_230d8c:
    // 0x230d8c: 0x0  nop
    ctx->pc = 0x230d8cu;
    // NOP
    // 0x230d90: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x230d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d94: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x230d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230d98: 0x0  nop
    ctx->pc = 0x230d98u;
    // NOP
    // 0x230d9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x230D9Cu;
    {
        const bool branch_taken_0x230d9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230d9c) {
            ctx->pc = 0x230DACu;
            goto label_230dac;
        }
    }
    ctx->pc = 0x230DA4u;
    // 0x230da4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x230da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x230da8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x230da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_230dac:
    // 0x230dac: 0x0  nop
    ctx->pc = 0x230dacu;
    // NOP
    // 0x230db0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x230db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230db4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x230db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230db8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230dbc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x230dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230dc0: 0x0  nop
    ctx->pc = 0x230dc0u;
    // NOP
    // 0x230dc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x230DC4u;
    {
        const bool branch_taken_0x230dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DC4u;
            // 0x230dc8: 0xe460001c  swc1        $f0, 0x1C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dc4) {
            ctx->pc = 0x230DD0u;
            goto label_230dd0;
        }
    }
    ctx->pc = 0x230DCCu;
    // 0x230dcc: 0xe463001c  swc1        $f3, 0x1C($v1)
    ctx->pc = 0x230dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_230dd0:
    // 0x230dd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x230dd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230dd4:
    // 0x230dd4: 0x0  nop
    ctx->pc = 0x230dd4u;
    // NOP
    // 0x230dd8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x230ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_230de0:
    // 0x230de0: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x230de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x230de4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x230de4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230de8: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x230DE8u;
    {
        const bool branch_taken_0x230de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230de8) {
            ctx->pc = 0x230CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_230cf4;
        }
    }
    ctx->pc = 0x230DF0u;
    // 0x230df0: 0x1280041f  beqz        $s4, . + 4 + (0x41F << 2)
    ctx->pc = 0x230DF0u;
    {
        const bool branch_taken_0x230df0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x230df0) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230DF8u;
    // 0x230df8: 0x1000041d  b           . + 4 + (0x41D << 2)
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DF8u;
            // 0x230dfc: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230E00u;
label_230e00:
    // 0x230e00: 0x86450036  lh          $a1, 0x36($s2)
    ctx->pc = 0x230e00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x230e04: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x230e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x230e08: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x230e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x230e0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x230e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x230e10: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230e14: 0xa6430034  sh          $v1, 0x34($s2)
    ctx->pc = 0x230e14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x230e18: 0x86430034  lh          $v1, 0x34($s2)
    ctx->pc = 0x230e18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x230e1c: 0x4610414  bgez        $v1, . + 4 + (0x414 << 2)
    ctx->pc = 0x230E1Cu;
    {
        const bool branch_taken_0x230e1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x230e1c) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230E24u;
    // 0x230e24: 0x10000412  b           . + 4 + (0x412 << 2)
    ctx->pc = 0x230E24u;
    {
        const bool branch_taken_0x230e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E24u;
            // 0x230e28: 0xa6400034  sh          $zero, 0x34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e24) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x230E2Cu;
label_230e2c:
    // 0x230e2c: 0x86470014  lh          $a3, 0x14($s2)
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x230e30: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x230e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x230e34: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x230e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x230e38: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x230e3c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x230e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e40: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x230e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x230e44: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x230e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x230e48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x230e48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e4c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x230e4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230e50: 0x0  nop
    ctx->pc = 0x230e50u;
    // NOP
    // 0x230e54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x230e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x230e58: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x230e58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x230e5c: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x230e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x230e60: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x230e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x230e64: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x230e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230e6c: 0x0  nop
    ctx->pc = 0x230e6cu;
    // NOP
    // 0x230e70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x230e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x230e74: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x230e74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x230e78: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x230e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x230e7c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x230e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e80: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x230e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x230e84: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x230e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x230e88: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x230e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e8c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x230e8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x230e90: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x230e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x230e94: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x230e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e98: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x230e98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e9c: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x230e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230ea0: 0x0  nop
    ctx->pc = 0x230ea0u;
    // NOP
    // 0x230ea4: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x230EA4u;
    {
        const bool branch_taken_0x230ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EA4u;
            // 0x230ea8: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ea4) {
            ctx->pc = 0x230F04u;
            goto label_230f04;
        }
    }
    ctx->pc = 0x230EACu;
    // 0x230eac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x230EACu;
    SET_GPR_U32(ctx, 31, 0x230EB4u);
    ctx->pc = 0x230EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230EACu;
            // 0x230eb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230EB4u; }
        if (ctx->pc != 0x230EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230EB4u; }
        if (ctx->pc != 0x230EB4u) { return; }
    }
    ctx->pc = 0x230EB4u;
label_230eb4:
    // 0x230eb4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230EB4u;
    {
        const bool branch_taken_0x230eb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x230EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EB4u;
            // 0x230eb8: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230eb4) {
            ctx->pc = 0x230EC8u;
            goto label_230ec8;
        }
    }
    ctx->pc = 0x230EBCu;
    // 0x230ebc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x230EBCu;
    {
        const bool branch_taken_0x230ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ebc) {
            ctx->pc = 0x230EC8u;
            goto label_230ec8;
        }
    }
    ctx->pc = 0x230EC4u;
    // 0x230ec4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x230ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_230ec8:
    // 0x230ec8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x230EC8u;
    {
        const bool branch_taken_0x230ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EC8u;
            // 0x230ecc: 0x3c03428c  lui         $v1, 0x428C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec8) {
            ctx->pc = 0x230F08u;
            goto label_230f08;
        }
    }
    ctx->pc = 0x230ED0u;
    // 0x230ed0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x230ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ed4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x230ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230edc: 0x0  nop
    ctx->pc = 0x230edcu;
    // NOP
    // 0x230ee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230ee4: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x230ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x230ee8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x230ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230eec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230ef0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x230ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x230ef4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x230ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ef8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230efc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x230EFCu;
    {
        const bool branch_taken_0x230efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EFCu;
            // 0x230f00: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230efc) {
            ctx->pc = 0x230FF0u;
            goto label_230ff0;
        }
    }
    ctx->pc = 0x230F04u;
label_230f04:
    // 0x230f04: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x230f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
label_230f08:
    // 0x230f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f0c: 0x0  nop
    ctx->pc = 0x230f0cu;
    // NOP
    // 0x230f10: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x230f10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f14: 0x0  nop
    ctx->pc = 0x230f14u;
    // NOP
    // 0x230f18: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x230F18u;
    {
        const bool branch_taken_0x230f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F18u;
            // 0x230f1c: 0x3c0342e0  lui         $v1, 0x42E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f18) {
            ctx->pc = 0x230FA0u;
            goto label_230fa0;
        }
    }
    ctx->pc = 0x230F20u;
    // 0x230f20: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
    // 0x230f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f28: 0x0  nop
    ctx->pc = 0x230f28u;
    // NOP
    // 0x230f2c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x230f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f30: 0x0  nop
    ctx->pc = 0x230f30u;
    // NOP
    // 0x230f34: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x230F34u;
    {
        const bool branch_taken_0x230f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F34u;
            // 0x230f38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f34) {
            ctx->pc = 0x230F9Cu;
            goto label_230f9c;
        }
    }
    ctx->pc = 0x230F3Cu;
    // 0x230f3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x230F3Cu;
    SET_GPR_U32(ctx, 31, 0x230F44u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230F44u; }
        if (ctx->pc != 0x230F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230F44u; }
        if (ctx->pc != 0x230F44u) { return; }
    }
    ctx->pc = 0x230F44u;
label_230f44:
    // 0x230f44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230F44u;
    {
        const bool branch_taken_0x230f44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x230F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F44u;
            // 0x230f48: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f44) {
            ctx->pc = 0x230F58u;
            goto label_230f58;
        }
    }
    ctx->pc = 0x230F4Cu;
    // 0x230f4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x230F4Cu;
    {
        const bool branch_taken_0x230f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f4c) {
            ctx->pc = 0x230F58u;
            goto label_230f58;
        }
    }
    ctx->pc = 0x230F54u;
    // 0x230f54: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x230f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_230f58:
    // 0x230f58: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x230F58u;
    {
        const bool branch_taken_0x230f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230f58) {
            ctx->pc = 0x230F9Cu;
            goto label_230f9c;
        }
    }
    ctx->pc = 0x230F60u;
    // 0x230f60: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x230f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x230f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x230f68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230f6c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x230f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x230f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f74: 0x0  nop
    ctx->pc = 0x230f74u;
    // NOP
    // 0x230f78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x230f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x230f7c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x230f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x230f80: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x230f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x230f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x230f88: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x230f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x230f8c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x230f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230f94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x230F94u;
    {
        const bool branch_taken_0x230f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F94u;
            // 0x230f98: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f94) {
            ctx->pc = 0x230FF0u;
            goto label_230ff0;
        }
    }
    ctx->pc = 0x230F9Cu;
label_230f9c:
    // 0x230f9c: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x230f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
label_230fa0:
    // 0x230fa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230fa4: 0x0  nop
    ctx->pc = 0x230fa4u;
    // NOP
    // 0x230fa8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x230fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230fac: 0x0  nop
    ctx->pc = 0x230facu;
    // NOP
    // 0x230fb0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x230FB0u;
    {
        const bool branch_taken_0x230fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230fb0) {
            ctx->pc = 0x230FF0u;
            goto label_230ff0;
        }
    }
    ctx->pc = 0x230FB8u;
    // 0x230fb8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x230fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fbc: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x230fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x230fc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230fc4: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x230fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x230fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230fcc: 0x0  nop
    ctx->pc = 0x230fccu;
    // NOP
    // 0x230fd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x230fd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x230fd4: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x230fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x230fd8: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x230fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fdc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x230fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x230fe0: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x230fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x230fe4: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x230fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fe8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230fec: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x230fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_230ff0:
    // 0x230ff0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x230ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ff4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x230ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x230ff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230ffc: 0x0  nop
    ctx->pc = 0x230ffcu;
    // NOP
    // 0x231000: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x231000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231004: 0x0  nop
    ctx->pc = 0x231004u;
    // NOP
    // 0x231008: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x231008u;
    {
        const bool branch_taken_0x231008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231008) {
            ctx->pc = 0x231014u;
            goto label_231014;
        }
    }
    ctx->pc = 0x231010u;
    // 0x231010: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x231010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231014:
    // 0x231014: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231018: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23101c: 0x0  nop
    ctx->pc = 0x23101cu;
    // NOP
    // 0x231020: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231024: 0x0  nop
    ctx->pc = 0x231024u;
    // NOP
    // 0x231028: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231028u;
    {
        const bool branch_taken_0x231028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231028) {
            ctx->pc = 0x231034u;
            goto label_231034;
        }
    }
    ctx->pc = 0x231030u;
    // 0x231030: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x231030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231034:
    // 0x231034: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x231034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23103c: 0x0  nop
    ctx->pc = 0x23103cu;
    // NOP
    // 0x231040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231044: 0x0  nop
    ctx->pc = 0x231044u;
    // NOP
    // 0x231048: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231048u;
    {
        const bool branch_taken_0x231048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231048) {
            ctx->pc = 0x231054u;
            goto label_231054;
        }
    }
    ctx->pc = 0x231050u;
    // 0x231050: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x231050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_231054:
    // 0x231054: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x231054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23105c: 0x0  nop
    ctx->pc = 0x23105cu;
    // NOP
    // 0x231060: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231064: 0x0  nop
    ctx->pc = 0x231064u;
    // NOP
    // 0x231068: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231068u;
    {
        const bool branch_taken_0x231068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231068) {
            ctx->pc = 0x231074u;
            goto label_231074;
        }
    }
    ctx->pc = 0x231070u;
    // 0x231070: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x231070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_231074:
    // 0x231074: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231078: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23107c: 0x0  nop
    ctx->pc = 0x23107cu;
    // NOP
    // 0x231080: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x231080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231084: 0x0  nop
    ctx->pc = 0x231084u;
    // NOP
    // 0x231088: 0x45000379  bc1f        . + 4 + (0x379 << 2)
    ctx->pc = 0x231088u;
    {
        const bool branch_taken_0x231088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231088) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231090u;
    // 0x231090: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x231090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231094: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x231094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231098: 0x0  nop
    ctx->pc = 0x231098u;
    // NOP
    // 0x23109c: 0x45000374  bc1f        . + 4 + (0x374 << 2)
    ctx->pc = 0x23109Cu;
    {
        const bool branch_taken_0x23109c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23109c) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x2310A4u;
    // 0x2310a4: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x2310a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2310a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2310a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2310ac: 0x10000370  b           . + 4 + (0x370 << 2)
    ctx->pc = 0x2310ACu;
    {
        const bool branch_taken_0x2310ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2310ACu;
            // 0x2310b0: 0xa2430009  sb          $v1, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310ac) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x2310B4u;
label_2310b4:
    // 0x2310b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2310b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2310b8:
    // 0x2310b8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2310B8u;
    {
        const bool branch_taken_0x2310b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310b8) {
            ctx->pc = 0x2312F0u;
            goto label_2312f0;
        }
    }
    ctx->pc = 0x2310C0u;
label_2310c0:
    // 0x2310c0: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2310c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2310c4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2310c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2310c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2310c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2310cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2310ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2310d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2310d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2310d4: 0x0  nop
    ctx->pc = 0x2310d4u;
    // NOP
    // 0x2310d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2310D8u;
    {
        const bool branch_taken_0x2310d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2310DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2310D8u;
            // 0x2310dc: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310d8) {
            ctx->pc = 0x2310E4u;
            goto label_2310e4;
        }
    }
    ctx->pc = 0x2310E0u;
    // 0x2310e0: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x2310e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2310e4:
    // 0x2310e4: 0x0  nop
    ctx->pc = 0x2310e4u;
    // NOP
    // 0x2310e8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2310e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2310ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2310ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2310f0: 0x0  nop
    ctx->pc = 0x2310f0u;
    // NOP
    // 0x2310f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2310f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2310f8: 0x0  nop
    ctx->pc = 0x2310f8u;
    // NOP
    // 0x2310fc: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x2310FCu;
    {
        const bool branch_taken_0x2310fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2310fc) {
            ctx->pc = 0x2312C4u;
            goto label_2312c4;
        }
    }
    ctx->pc = 0x231104u;
    // 0x231104: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x231104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231108: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x231108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x23110c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x231110: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x231110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231114: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x231114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231118: 0xc635001c  lwc1        $f21, 0x1C($s1)
    ctx->pc = 0x231118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23111c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x23111cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x231120: 0x0  nop
    ctx->pc = 0x231120u;
    // NOP
    // 0x231124: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x231124u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231128: 0xc047964  jal         func_11E590
    ctx->pc = 0x231128u;
    SET_GPR_U32(ctx, 31, 0x231130u);
    ctx->pc = 0x23112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231128u;
            // 0x23112c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231130u; }
        if (ctx->pc != 0x231130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231130u; }
        if (ctx->pc != 0x231130u) { return; }
    }
    ctx->pc = 0x231130u;
label_231130:
    // 0x231130: 0x86420014  lh          $v0, 0x14($s2)
    ctx->pc = 0x231130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x231134: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x231134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x231138: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x231138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23113c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23113cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231140: 0x0  nop
    ctx->pc = 0x231140u;
    // NOP
    // 0x231144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23114c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x23114Cu;
    SET_GPR_U32(ctx, 31, 0x231154u);
    ctx->pc = 0x231150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23114Cu;
            // 0x231150: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231154u; }
        if (ctx->pc != 0x231154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231154u; }
        if (ctx->pc != 0x231154u) { return; }
    }
    ctx->pc = 0x231154u;
label_231154:
    // 0x231154: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x231154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x231158: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x231158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x23115c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x231160: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x231160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x231164: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x231164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23116c: 0x0  nop
    ctx->pc = 0x23116cu;
    // NOP
    // 0x231170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231174: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231178: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x23117c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x23117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231180: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x231180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231184: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x231184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x231188: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x231188u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x23118c: 0x0  nop
    ctx->pc = 0x23118cu;
    // NOP
    // 0x231190: 0x0  nop
    ctx->pc = 0x231190u;
    // NOP
    // 0x231194: 0xc047a42  jal         func_11E908
    ctx->pc = 0x231194u;
    SET_GPR_U32(ctx, 31, 0x23119Cu);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23119Cu; }
        if (ctx->pc != 0x23119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23119Cu; }
        if (ctx->pc != 0x23119Cu) { return; }
    }
    ctx->pc = 0x23119Cu;
label_23119c:
    // 0x23119c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x23119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2311a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2311A0u;
    SET_GPR_U32(ctx, 31, 0x2311A8u);
    ctx->pc = 0x2311A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2311A0u;
            // 0x2311a4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2311A8u; }
        if (ctx->pc != 0x2311A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2311A8u; }
        if (ctx->pc != 0x2311A8u) { return; }
    }
    ctx->pc = 0x2311A8u;
label_2311a8:
    // 0x2311a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2311a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311ac: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2311acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2311b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2311b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2311b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2311b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2311b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2311b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2311bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2311bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2311c0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2311c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2311c4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2311c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2311c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2311c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2311cc: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2311ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2311d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2311d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2311d4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2311d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2311d8: 0x0  nop
    ctx->pc = 0x2311d8u;
    // NOP
    // 0x2311dc: 0x0  nop
    ctx->pc = 0x2311dcu;
    // NOP
    // 0x2311e0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2311E0u;
    SET_GPR_U32(ctx, 31, 0x2311E8u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2311E8u; }
        if (ctx->pc != 0x2311E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2311E8u; }
        if (ctx->pc != 0x2311E8u) { return; }
    }
    ctx->pc = 0x2311E8u;
label_2311e8:
    // 0x2311e8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2311e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2311ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2311ECu;
    SET_GPR_U32(ctx, 31, 0x2311F4u);
    ctx->pc = 0x2311F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2311ECu;
            // 0x2311f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2311F4u; }
        if (ctx->pc != 0x2311F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2311F4u; }
        if (ctx->pc != 0x2311F4u) { return; }
    }
    ctx->pc = 0x2311F4u;
label_2311f4:
    // 0x2311f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2311f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2311fc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2311fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231208: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x23120c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x23120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231210: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x231210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231214: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x231214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x231218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23121c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x23121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x231220: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x231220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231224: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x231224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x231228: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x231228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x23122c: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x23122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231230: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x231230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231234: 0x0  nop
    ctx->pc = 0x231234u;
    // NOP
    // 0x231238: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x231238u;
    {
        const bool branch_taken_0x231238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231238) {
            ctx->pc = 0x231278u;
            goto label_231278;
        }
    }
    ctx->pc = 0x231240u;
    // 0x231240: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x231240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231244: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x231244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x231248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23124c: 0x0  nop
    ctx->pc = 0x23124cu;
    // NOP
    // 0x231250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231254: 0x0  nop
    ctx->pc = 0x231254u;
    // NOP
    // 0x231258: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x231258u;
    {
        const bool branch_taken_0x231258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231258u;
            // 0x23125c: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231258) {
            ctx->pc = 0x231278u;
            goto label_231278;
        }
    }
    ctx->pc = 0x231260u;
    // 0x231260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231268: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x231268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23126c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23126cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231270: 0xc08bfc8  jal         func_22FF20
    ctx->pc = 0x231270u;
    SET_GPR_U32(ctx, 31, 0x231278u);
    ctx->pc = 0x231274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231270u;
            // 0x231274: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FF20u;
    if (runtime->hasFunction(0x22FF20u)) {
        auto targetFn = runtime->lookupFunction(0x22FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231278u; }
        if (ctx->pc != 0x231278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii_0x22ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231278u; }
        if (ctx->pc != 0x231278u) { return; }
    }
    ctx->pc = 0x231278u;
label_231278:
    // 0x231278: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23127c: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x23127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231280: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x231280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231284: 0x0  nop
    ctx->pc = 0x231284u;
    // NOP
    // 0x231288: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x231288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23128c: 0x0  nop
    ctx->pc = 0x23128cu;
    // NOP
    // 0x231290: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x231290u;
    {
        const bool branch_taken_0x231290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231290) {
            ctx->pc = 0x2312BCu;
            goto label_2312bc;
        }
    }
    ctx->pc = 0x231298u;
    // 0x231298: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x231298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23129c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23129cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2312a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2312a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312a4: 0x0  nop
    ctx->pc = 0x2312a4u;
    // NOP
    // 0x2312a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2312a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2312ac: 0x0  nop
    ctx->pc = 0x2312acu;
    // NOP
    // 0x2312b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2312B0u;
    {
        const bool branch_taken_0x2312b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2312B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2312B0u;
            // 0x2312b4: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312b0) {
            ctx->pc = 0x2312BCu;
            goto label_2312bc;
        }
    }
    ctx->pc = 0x2312B8u;
    // 0x2312b8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2312b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2312bc:
    // 0x2312bc: 0x0  nop
    ctx->pc = 0x2312bcu;
    // NOP
    // 0x2312c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2312c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2312c4:
    // 0x2312c4: 0x0  nop
    ctx->pc = 0x2312c4u;
    // NOP
    // 0x2312c8: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2312c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2312cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2312ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312d0: 0x0  nop
    ctx->pc = 0x2312d0u;
    // NOP
    // 0x2312d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2312d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2312d8: 0x0  nop
    ctx->pc = 0x2312d8u;
    // NOP
    // 0x2312dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2312DCu;
    {
        const bool branch_taken_0x2312dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2312dc) {
            ctx->pc = 0x2312E8u;
            goto label_2312e8;
        }
    }
    ctx->pc = 0x2312E4u;
    // 0x2312e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2312e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2312e8:
    // 0x2312e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2312ec: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2312ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2312f0:
    // 0x2312f0: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x2312f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2312f4: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2312f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2312f8: 0x1460ff71  bnez        $v1, . + 4 + (-0x8F << 2)
    ctx->pc = 0x2312F8u;
    {
        const bool branch_taken_0x2312f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2312f8) {
            ctx->pc = 0x2310C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2310c0;
        }
    }
    ctx->pc = 0x231300u;
    // 0x231300: 0x128002db  beqz        $s4, . + 4 + (0x2DB << 2)
    ctx->pc = 0x231300u;
    {
        const bool branch_taken_0x231300 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x231300) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231308u;
    // 0x231308: 0x126002d9  beqz        $s3, . + 4 + (0x2D9 << 2)
    ctx->pc = 0x231308u;
    {
        const bool branch_taken_0x231308 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x231308) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231310u;
    // 0x231310: 0x100002d7  b           . + 4 + (0x2D7 << 2)
    ctx->pc = 0x231310u;
    {
        const bool branch_taken_0x231310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231310u;
            // 0x231314: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231310) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231318u;
label_231318:
    // 0x231318: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x231318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23131c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231324: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x231328: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x231328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23132c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23132cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231330: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231334: 0xc0941c0  jal         func_250700
    ctx->pc = 0x231334u;
    SET_GPR_U32(ctx, 31, 0x23133Cu);
    ctx->pc = 0x231338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231334u;
            // 0x231338: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23133Cu; }
        if (ctx->pc != 0x23133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23133Cu; }
        if (ctx->pc != 0x23133Cu) { return; }
    }
    ctx->pc = 0x23133Cu;
label_23133c:
    // 0x23133c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x23133Cu;
    SET_GPR_U32(ctx, 31, 0x231344u);
    ctx->pc = 0x231340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23133Cu;
            // 0x231340: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231344u; }
        if (ctx->pc != 0x231344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231344u; }
        if (ctx->pc != 0x231344u) { return; }
    }
    ctx->pc = 0x231344u;
label_231344:
    // 0x231344: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x231344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231348: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x231348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x23134c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x231350: 0x86430014  lh          $v1, 0x14($s2)
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x231354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x231354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231358: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x231358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23135c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23135cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231360: 0x0  nop
    ctx->pc = 0x231360u;
    // NOP
    // 0x231364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23136c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x23136Cu;
    SET_GPR_U32(ctx, 31, 0x231374u);
    ctx->pc = 0x231370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23136Cu;
            // 0x231370: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231374u; }
        if (ctx->pc != 0x231374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231374u; }
        if (ctx->pc != 0x231374u) { return; }
    }
    ctx->pc = 0x231374u;
label_231374:
    // 0x231374: 0xc047a42  jal         func_11E908
    ctx->pc = 0x231374u;
    SET_GPR_U32(ctx, 31, 0x23137Cu);
    ctx->pc = 0x231378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231374u;
            // 0x231378: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23137Cu; }
        if (ctx->pc != 0x23137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23137Cu; }
        if (ctx->pc != 0x23137Cu) { return; }
    }
    ctx->pc = 0x23137Cu;
label_23137c:
    // 0x23137c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x23137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231380: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x231384: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x231384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23138c: 0x0  nop
    ctx->pc = 0x23138cu;
    // NOP
    // 0x231390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231394: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231398: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x23139c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x23139Cu;
    SET_GPR_U32(ctx, 31, 0x2313A4u);
    ctx->pc = 0x2313A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23139Cu;
            // 0x2313a0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2313A4u; }
        if (ctx->pc != 0x2313A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2313A4u; }
        if (ctx->pc != 0x2313A4u) { return; }
    }
    ctx->pc = 0x2313A4u;
label_2313a4:
    // 0x2313a4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2313A4u;
    {
        const bool branch_taken_0x2313a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2313A4u;
            // 0x2313a8: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313a4) {
            ctx->pc = 0x2313B8u;
            goto label_2313b8;
        }
    }
    ctx->pc = 0x2313ACu;
    // 0x2313ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2313ACu;
    {
        const bool branch_taken_0x2313ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313ac) {
            ctx->pc = 0x2313B8u;
            goto label_2313b8;
        }
    }
    ctx->pc = 0x2313B4u;
    // 0x2313b4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2313b8:
    // 0x2313b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2313B8u;
    {
        const bool branch_taken_0x2313b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2313B8u;
            // 0x2313bc: 0x3c034348  lui         $v1, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313b8) {
            ctx->pc = 0x2313D0u;
            goto label_2313d0;
        }
    }
    ctx->pc = 0x2313C0u;
    // 0x2313c0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2313c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2313c4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2313c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2313c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2313c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2313cc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2313ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2313d0:
    // 0x2313d0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2313d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2313d4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2313d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x2313d8: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x2313D8u;
    {
        const bool branch_taken_0x2313d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2313D8u;
            // 0x2313dc: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313d8) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x2313E0u;
label_2313e0:
    // 0x2313e0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2313E0u;
    {
        const bool branch_taken_0x2313e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313e0) {
            ctx->pc = 0x231578u;
            goto label_231578;
        }
    }
    ctx->pc = 0x2313E8u;
label_2313e8:
    // 0x2313e8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2313e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2313ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2313ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2313f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2313f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2313f4: 0x0  nop
    ctx->pc = 0x2313f4u;
    // NOP
    // 0x2313f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2313f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2313fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2313FCu;
    SET_GPR_U32(ctx, 31, 0x231404u);
    ctx->pc = 0x231400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2313FCu;
            // 0x231400: 0xe62c0000  swc1        $f12, 0x0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231404u; }
        if (ctx->pc != 0x231404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231404u; }
        if (ctx->pc != 0x231404u) { return; }
    }
    ctx->pc = 0x231404u;
label_231404:
    // 0x231404: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231404u;
    {
        const bool branch_taken_0x231404 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x231408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231404u;
            // 0x231408: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231404) {
            ctx->pc = 0x231418u;
            goto label_231418;
        }
    }
    ctx->pc = 0x23140Cu;
    // 0x23140c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23140Cu;
    {
        const bool branch_taken_0x23140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23140c) {
            ctx->pc = 0x231418u;
            goto label_231418;
        }
    }
    ctx->pc = 0x231414u;
    // 0x231414: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x231414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_231418:
    // 0x231418: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x231418u;
    {
        const bool branch_taken_0x231418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231418) {
            ctx->pc = 0x231430u;
            goto label_231430;
        }
    }
    ctx->pc = 0x231420u;
    // 0x231420: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x231420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231424: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231428: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23142c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x23142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231430:
    // 0x231430: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231434: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231438: 0x0  nop
    ctx->pc = 0x231438u;
    // NOP
    // 0x23143c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23143cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231440: 0x0  nop
    ctx->pc = 0x231440u;
    // NOP
    // 0x231444: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231444u;
    {
        const bool branch_taken_0x231444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231444) {
            ctx->pc = 0x231450u;
            goto label_231450;
        }
    }
    ctx->pc = 0x23144Cu;
    // 0x23144c: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x23144cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231450:
    // 0x231450: 0x3c034324  lui         $v1, 0x4324
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17188 << 16));
    // 0x231454: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23145c: 0x0  nop
    ctx->pc = 0x23145cu;
    // NOP
    // 0x231460: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x231460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231464: 0x0  nop
    ctx->pc = 0x231464u;
    // NOP
    // 0x231468: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x231468u;
    {
        const bool branch_taken_0x231468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231468) {
            ctx->pc = 0x231474u;
            goto label_231474;
        }
    }
    ctx->pc = 0x231470u;
    // 0x231470: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x231470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231474:
    // 0x231474: 0x0  nop
    ctx->pc = 0x231474u;
    // NOP
    // 0x231478: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x231478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23147c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23147cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231480: 0x0  nop
    ctx->pc = 0x231480u;
    // NOP
    // 0x231484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x231484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231488: 0x0  nop
    ctx->pc = 0x231488u;
    // NOP
    // 0x23148c: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x23148Cu;
    {
        const bool branch_taken_0x23148c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23148c) {
            ctx->pc = 0x23154Cu;
            goto label_23154c;
        }
    }
    ctx->pc = 0x231494u;
    // 0x231494: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231494u;
    SET_GPR_U32(ctx, 31, 0x23149Cu);
    ctx->pc = 0x231498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231494u;
            // 0x231498: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23149Cu; }
        if (ctx->pc != 0x23149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23149Cu; }
        if (ctx->pc != 0x23149Cu) { return; }
    }
    ctx->pc = 0x23149Cu;
label_23149c:
    // 0x23149c: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x23149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2314a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2314A0u;
    SET_GPR_U32(ctx, 31, 0x2314A8u);
    ctx->pc = 0x2314A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2314A0u;
            // 0x2314a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314A8u; }
        if (ctx->pc != 0x2314A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314A8u; }
        if (ctx->pc != 0x2314A8u) { return; }
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2314A8u;
    {
        const bool branch_taken_0x2314a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2314ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2314A8u;
            // 0x2314ac: 0x282001a  div         $zero, $s4, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314a8) {
            ctx->pc = 0x2314B4u;
            goto label_2314b4;
        }
    }
    ctx->pc = 0x2314B0u;
    // 0x2314b0: 0x1cd  break       0, 7
    ctx->pc = 0x2314b0u;
    runtime->handleBreak(rdram, ctx);
label_2314b4:
    // 0x2314b4: 0x1810  mfhi        $v1
    ctx->pc = 0x2314b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2314b8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2314B8u;
    {
        const bool branch_taken_0x2314b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2314b8) {
            ctx->pc = 0x23150Cu;
            goto label_23150c;
        }
    }
    ctx->pc = 0x2314C0u;
    // 0x2314c0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2314c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2314c4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2314c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2314c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2314c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2314cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2314ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2314d0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2314d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2314d4: 0x0  nop
    ctx->pc = 0x2314d4u;
    // NOP
    // 0x2314d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2314D8u;
    {
        const bool branch_taken_0x2314d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2314DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2314D8u;
            // 0x2314dc: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314d8) {
            ctx->pc = 0x23150Cu;
            goto label_23150c;
        }
    }
    ctx->pc = 0x2314E0u;
    // 0x2314e0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2314e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2314e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2314e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2314e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2314e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2314ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2314ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2314f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2314f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2314f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2314fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231500: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x231500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x231504: 0xc08bfc8  jal         func_22FF20
    ctx->pc = 0x231504u;
    SET_GPR_U32(ctx, 31, 0x23150Cu);
    ctx->pc = 0x231508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231504u;
            // 0x231508: 0xe6220014  swc1        $f2, 0x14($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FF20u;
    if (runtime->hasFunction(0x22FF20u)) {
        auto targetFn = runtime->lookupFunction(0x22FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23150Cu; }
        if (ctx->pc != 0x23150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii_0x22ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23150Cu; }
        if (ctx->pc != 0x23150Cu) { return; }
    }
    ctx->pc = 0x23150Cu;
label_23150c:
    // 0x23150c: 0x0  nop
    ctx->pc = 0x23150cu;
    // NOP
    // 0x231510: 0x86430014  lh          $v1, 0x14($s2)
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x231514: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x231514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231518: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x231518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23151c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23151cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231520: 0x0  nop
    ctx->pc = 0x231520u;
    // NOP
    // 0x231524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231528: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23152c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x23152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x231530: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x231530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x231534: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x231534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23153c: 0x0  nop
    ctx->pc = 0x23153cu;
    // NOP
    // 0x231540: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231544: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231548: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_23154c:
    // 0x23154c: 0x0  nop
    ctx->pc = 0x23154cu;
    // NOP
    // 0x231550: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x231550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231558: 0x0  nop
    ctx->pc = 0x231558u;
    // NOP
    // 0x23155c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23155cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231560: 0x0  nop
    ctx->pc = 0x231560u;
    // NOP
    // 0x231564: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231564u;
    {
        const bool branch_taken_0x231564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231564) {
            ctx->pc = 0x231570u;
            goto label_231570;
        }
    }
    ctx->pc = 0x23156Cu;
    // 0x23156c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x23156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231570:
    // 0x231570: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x231570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x231574: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x231574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_231578:
    // 0x231578: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x231578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23157c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x23157cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231580: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x231580u;
    {
        const bool branch_taken_0x231580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231580) {
            ctx->pc = 0x2313E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2313e8;
        }
    }
    ctx->pc = 0x231588u;
    // 0x231588: 0x12800239  beqz        $s4, . + 4 + (0x239 << 2)
    ctx->pc = 0x231588u;
    {
        const bool branch_taken_0x231588 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x231588) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231590u;
    // 0x231590: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x231590u;
    {
        const bool branch_taken_0x231590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231590u;
            // 0x231594: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231590) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23159c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x23159cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2315a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2315a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2315a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2315a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2315a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2315A8u;
    {
        const bool branch_taken_0x2315a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2315A8u;
            // 0x2315ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315a8) {
            ctx->pc = 0x231638u;
            goto label_231638;
        }
    }
    ctx->pc = 0x2315B0u;
label_2315b0:
    // 0x2315b0: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x2315b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2315b4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2315b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2315b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2315bc: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2315bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2315c0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2315c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315c4: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2315c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2315c8: 0x0  nop
    ctx->pc = 0x2315c8u;
    // NOP
    // 0x2315cc: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2315CCu;
    {
        const bool branch_taken_0x2315cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2315cc) {
            ctx->pc = 0x23162Cu;
            goto label_23162c;
        }
    }
    ctx->pc = 0x2315D4u;
    // 0x2315d4: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2315d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2315d8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2315d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2315dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2315e0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2315e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2315e4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x2315e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2315e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2315e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2315ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2315f0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2315f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2315f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2315f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2315f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2315fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2315fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x231600: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x231600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231604: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x231604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231608: 0x0  nop
    ctx->pc = 0x231608u;
    // NOP
    // 0x23160c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x23160Cu;
    {
        const bool branch_taken_0x23160c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x231610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23160Cu;
            // 0x231610: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23160c) {
            ctx->pc = 0x23162Cu;
            goto label_23162c;
        }
    }
    ctx->pc = 0x231614u;
    // 0x231614: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23161c: 0x0  nop
    ctx->pc = 0x23161cu;
    // NOP
    // 0x231620: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231620u;
    {
        const bool branch_taken_0x231620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231620u;
            // 0x231624: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231620) {
            ctx->pc = 0x23162Cu;
            goto label_23162c;
        }
    }
    ctx->pc = 0x231628u;
    // 0x231628: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x231628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_23162c:
    // 0x23162c: 0x0  nop
    ctx->pc = 0x23162cu;
    // NOP
    // 0x231630: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231634: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_231638:
    // 0x231638: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x231638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23163c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x23163cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231640: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x231640u;
    {
        const bool branch_taken_0x231640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231640) {
            ctx->pc = 0x2315B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2315b0;
        }
    }
    ctx->pc = 0x231648u;
    // 0x231648: 0x12800209  beqz        $s4, . + 4 + (0x209 << 2)
    ctx->pc = 0x231648u;
    {
        const bool branch_taken_0x231648 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x231648) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231650u;
    // 0x231650: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x231650u;
    {
        const bool branch_taken_0x231650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231650u;
            // 0x231654: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231650) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231658u;
label_231658:
    // 0x231658: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x231658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23165c:
    // 0x23165c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x23165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231660: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231668: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x231668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x23166c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x23166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x231670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x231670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231674: 0x0  nop
    ctx->pc = 0x231674u;
    // NOP
    // 0x231678: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x231678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23167c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x23167cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x231680: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x231680u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x231684: 0xc047a42  jal         func_11E908
    ctx->pc = 0x231684u;
    SET_GPR_U32(ctx, 31, 0x23168Cu);
    ctx->pc = 0x231688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231684u;
            // 0x231688: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23168Cu; }
        if (ctx->pc != 0x23168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23168Cu; }
        if (ctx->pc != 0x23168Cu) { return; }
    }
    ctx->pc = 0x23168Cu;
label_23168c:
    // 0x23168c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x23168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231690: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x231690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231694: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x231694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231698: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x231698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x23169c: 0x86430014  lh          $v1, 0x14($s2)
    ctx->pc = 0x23169cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2316a0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2316a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2316a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2316a8: 0x0  nop
    ctx->pc = 0x2316a8u;
    // NOP
    // 0x2316ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2316acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2316b0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2316b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2316b4: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x2316b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x2316b8: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x2316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2316bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2316bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2316c0: 0x0  nop
    ctx->pc = 0x2316c0u;
    // NOP
    // 0x2316c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2316c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2316c8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2316c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2316cc: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2316ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2316d0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2316d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2316d4: 0x0  nop
    ctx->pc = 0x2316d4u;
    // NOP
    // 0x2316d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2316D8u;
    {
        const bool branch_taken_0x2316d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2316d8) {
            ctx->pc = 0x2316E8u;
            goto label_2316e8;
        }
    }
    ctx->pc = 0x2316E0u;
    // 0x2316e0: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x2316e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2316e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2316e8:
    // 0x2316e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2316ec: 0x1a80ffdb  blez        $s4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2316ECu;
    {
        const bool branch_taken_0x2316ec = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2316F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2316ECu;
            // 0x2316f0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316ec) {
            ctx->pc = 0x23165Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23165c;
        }
    }
    ctx->pc = 0x2316F4u;
    // 0x2316f4: 0x1a6001de  blez        $s3, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2316F4u;
    {
        const bool branch_taken_0x2316f4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2316f4) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x2316FCu;
    // 0x2316fc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2316fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x231700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231704: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x231704u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x231708: 0xc08bfa8  jal         func_22FEA0
    ctx->pc = 0x231708u;
    SET_GPR_U32(ctx, 31, 0x231710u);
    ctx->pc = 0x23170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231708u;
            // 0x23170c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FEA0u;
    if (runtime->hasFunction(0x22FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x22FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231710u; }
        if (ctx->pc != 0x231710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfoAll__11CMenuEffectFi_0x22fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231710u; }
        if (ctx->pc != 0x231710u) { return; }
    }
    ctx->pc = 0x231710u;
label_231710:
    // 0x231710: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x231710u;
    {
        const bool branch_taken_0x231710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231710u;
            // 0x231714: 0xa6400036  sh          $zero, 0x36($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231710) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231718u;
label_231718:
    // 0x231718: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x231718u;
    {
        const bool branch_taken_0x231718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231718u;
            // 0x23171c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231718) {
            ctx->pc = 0x231B10u;
            goto label_231b10;
        }
    }
    ctx->pc = 0x231720u;
label_231720:
    // 0x231720: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x231720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231724: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x231728: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23172c: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x23172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
    // 0x231730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231734: 0x0  nop
    ctx->pc = 0x231734u;
    // NOP
    // 0x231738: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x231738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x23173c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23173cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231740: 0x0  nop
    ctx->pc = 0x231740u;
    // NOP
    // 0x231744: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x231744u;
    {
        const bool branch_taken_0x231744 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x231748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231744u;
            // 0x231748: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231744) {
            ctx->pc = 0x231764u;
            goto label_231764;
        }
    }
    ctx->pc = 0x23174Cu;
    // 0x23174c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x23174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231750: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x231750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x231754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231758: 0x0  nop
    ctx->pc = 0x231758u;
    // NOP
    // 0x23175c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23175cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231760: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x231760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_231764:
    // 0x231764: 0x0  nop
    ctx->pc = 0x231764u;
    // NOP
    // 0x231768: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x231768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23176c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23176cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231770: 0x0  nop
    ctx->pc = 0x231770u;
    // NOP
    // 0x231774: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x231774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231778: 0x0  nop
    ctx->pc = 0x231778u;
    // NOP
    // 0x23177c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23177Cu;
    {
        const bool branch_taken_0x23177c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23177c) {
            ctx->pc = 0x23178Cu;
            goto label_23178c;
        }
    }
    ctx->pc = 0x231784u;
    // 0x231784: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x231784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x231788: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23178c:
    // 0x23178c: 0x0  nop
    ctx->pc = 0x23178cu;
    // NOP
    // 0x231790: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x231794: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x231794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23179c: 0x0  nop
    ctx->pc = 0x23179cu;
    // NOP
    // 0x2317a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2317a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2317a4: 0x0  nop
    ctx->pc = 0x2317a4u;
    // NOP
    // 0x2317a8: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x2317A8u;
    {
        const bool branch_taken_0x2317a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317a8) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x2317B0u;
    // 0x2317b0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2317b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2317b4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2317b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2317b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2317bc: 0x0  nop
    ctx->pc = 0x2317bcu;
    // NOP
    // 0x2317c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2317c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2317c4: 0x0  nop
    ctx->pc = 0x2317c4u;
    // NOP
    // 0x2317c8: 0x450000ce  bc1f        . + 4 + (0xCE << 2)
    ctx->pc = 0x2317C8u;
    {
        const bool branch_taken_0x2317c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317c8) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x2317D0u;
    // 0x2317d0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2317d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2317d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2317d8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2317d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2317dc: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2317dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2317e0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2317e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2317e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2317e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2317e8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2317e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2317ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2317ECu;
    SET_GPR_U32(ctx, 31, 0x2317F4u);
    ctx->pc = 0x2317F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2317ECu;
            // 0x2317f0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317F4u; }
        if (ctx->pc != 0x2317F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317F4u; }
        if (ctx->pc != 0x2317F4u) { return; }
    }
    ctx->pc = 0x2317F4u;
label_2317f4:
    // 0x2317f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2317f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2317f8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2317f8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2317fc: 0x0  nop
    ctx->pc = 0x2317fcu;
    // NOP
    // 0x231800: 0x0  nop
    ctx->pc = 0x231800u;
    // NOP
    // 0x231804: 0x1010  mfhi        $v0
    ctx->pc = 0x231804u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x231808: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231808u;
    {
        const bool branch_taken_0x231808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231808) {
            ctx->pc = 0x231830u;
            goto label_231830;
        }
    }
    ctx->pc = 0x231810u;
    // 0x231810: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x231810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231814: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x231814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231818: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x231818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23181c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x23181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x231820: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x231820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231824: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x231824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23182c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x23182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_231830:
    // 0x231830: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x231834: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x231834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23183c: 0x0  nop
    ctx->pc = 0x23183cu;
    // NOP
    // 0x231840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231844: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x231844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231848: 0x0  nop
    ctx->pc = 0x231848u;
    // NOP
    // 0x23184c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x23184Cu;
    {
        const bool branch_taken_0x23184c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23184c) {
            ctx->pc = 0x231928u;
            goto label_231928;
        }
    }
    ctx->pc = 0x231854u;
    // 0x231854: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x231854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231858: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x231858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x23185c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23185cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231860: 0x0  nop
    ctx->pc = 0x231860u;
    // NOP
    // 0x231864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x231864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231868: 0x0  nop
    ctx->pc = 0x231868u;
    // NOP
    // 0x23186c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x23186Cu;
    {
        const bool branch_taken_0x23186c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23186c) {
            ctx->pc = 0x231928u;
            goto label_231928;
        }
    }
    ctx->pc = 0x231874u;
    // 0x231874: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x231874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231878: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x231878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23187c: 0x0  nop
    ctx->pc = 0x23187cu;
    // NOP
    // 0x231880: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x231880u;
    {
        const bool branch_taken_0x231880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231880) {
            ctx->pc = 0x231928u;
            goto label_231928;
        }
    }
    ctx->pc = 0x231888u;
    // 0x231888: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x231888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23188c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x23188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x231890: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x231890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x231894: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x231894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x231898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x231898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23189c: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x23189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x2318a0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2318a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2318a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2318a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2318a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2318a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2318ac: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2318acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2318b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2318b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2318b4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2318B4u;
    SET_GPR_U32(ctx, 31, 0x2318BCu);
    ctx->pc = 0x2318B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2318B4u;
            // 0x2318b8: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318BCu; }
        if (ctx->pc != 0x2318BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318BCu; }
        if (ctx->pc != 0x2318BCu) { return; }
    }
    ctx->pc = 0x2318BCu;
label_2318bc:
    // 0x2318bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2318bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2318c0: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x2318c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x2318c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2318c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2318c8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2318c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2318cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2318ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2318d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2318d4: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x2318d8: 0x3c024039  lui         $v0, 0x4039
    ctx->pc = 0x2318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16441 << 16));
    // 0x2318dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2318dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2318e0: 0x460200c1  sub.s       $f3, $f0, $f2
    ctx->pc = 0x2318e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2318e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2318e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2318e8: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2318e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2318ec: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2318ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2318f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2318f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2318f4: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x2318f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2318f8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2318f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2318fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2318fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231900: 0x0  nop
    ctx->pc = 0x231900u;
    // NOP
    // 0x231904: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x231904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231908: 0x0  nop
    ctx->pc = 0x231908u;
    // NOP
    // 0x23190c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23190Cu;
    {
        const bool branch_taken_0x23190c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x231910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23190Cu;
            // 0x231910: 0x3c023fcc  lui         $v0, 0x3FCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23190c) {
            ctx->pc = 0x231928u;
            goto label_231928;
        }
    }
    ctx->pc = 0x231914u;
    // 0x231914: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x231914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x231918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23191c: 0x0  nop
    ctx->pc = 0x23191cu;
    // NOP
    // 0x231920: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231924: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x231924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_231928:
    // 0x231928: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x231928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x23192c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x23192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231934: 0x0  nop
    ctx->pc = 0x231934u;
    // NOP
    // 0x231938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23193c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23193cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231940: 0x0  nop
    ctx->pc = 0x231940u;
    // NOP
    // 0x231944: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x231944u;
    {
        const bool branch_taken_0x231944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231944) {
            ctx->pc = 0x231A20u;
            goto label_231a20;
        }
    }
    ctx->pc = 0x23194Cu;
    // 0x23194c: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x23194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231950: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x231950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x231954: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x231954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231958: 0x0  nop
    ctx->pc = 0x231958u;
    // NOP
    // 0x23195c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x23195cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231960: 0x0  nop
    ctx->pc = 0x231960u;
    // NOP
    // 0x231964: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x231964u;
    {
        const bool branch_taken_0x231964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231964) {
            ctx->pc = 0x231A20u;
            goto label_231a20;
        }
    }
    ctx->pc = 0x23196Cu;
    // 0x23196c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x23196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231974: 0x0  nop
    ctx->pc = 0x231974u;
    // NOP
    // 0x231978: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x231978u;
    {
        const bool branch_taken_0x231978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231978) {
            ctx->pc = 0x231A20u;
            goto label_231a20;
        }
    }
    ctx->pc = 0x231980u;
    // 0x231980: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x231980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231984: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x231984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x231988: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x231988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x23198c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23198cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231990: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x231994: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x231994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x231998: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x231998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23199c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23199cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2319a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2319a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2319a4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2319a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2319a8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2319A8u;
    SET_GPR_U32(ctx, 31, 0x2319B0u);
    ctx->pc = 0x2319ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2319A8u;
            // 0x2319ac: 0xe622002c  swc1        $f2, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2319B0u; }
        if (ctx->pc != 0x2319B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2319B0u; }
        if (ctx->pc != 0x2319B0u) { return; }
    }
    ctx->pc = 0x2319B0u;
label_2319b0:
    // 0x2319b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2319b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2319b4: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x2319b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x2319b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2319b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2319bc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2319bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2319c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2319c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2319c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2319c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2319c8: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
    // 0x2319cc: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x2319ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2319d0: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x2319d4: 0x460200c1  sub.s       $f3, $f0, $f2
    ctx->pc = 0x2319d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2319d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2319d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2319dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2319dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2319e0: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2319e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2319e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2319e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2319e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2319e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2319ec: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x2319ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2319f0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2319f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2319f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2319f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2319f8: 0x0  nop
    ctx->pc = 0x2319f8u;
    // NOP
    // 0x2319fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2319fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231a00: 0x0  nop
    ctx->pc = 0x231a00u;
    // NOP
    // 0x231a04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x231A04u;
    {
        const bool branch_taken_0x231a04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A04u;
            // 0x231a08: 0x3c023f8c  lui         $v0, 0x3F8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a04) {
            ctx->pc = 0x231A20u;
            goto label_231a20;
        }
    }
    ctx->pc = 0x231A0Cu;
    // 0x231a0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x231a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x231a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231a14: 0x0  nop
    ctx->pc = 0x231a14u;
    // NOP
    // 0x231a18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231a1c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x231a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_231a20:
    // 0x231a20: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x231a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x231a24: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x231a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231a2c: 0x0  nop
    ctx->pc = 0x231a2cu;
    // NOP
    // 0x231a30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231a38: 0x0  nop
    ctx->pc = 0x231a38u;
    // NOP
    // 0x231a3c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x231A3Cu;
    {
        const bool branch_taken_0x231a3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231a3c) {
            ctx->pc = 0x231A84u;
            goto label_231a84;
        }
    }
    ctx->pc = 0x231A44u;
    // 0x231a44: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231A44u;
    SET_GPR_U32(ctx, 31, 0x231A4Cu);
    ctx->pc = 0x231A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231A44u;
            // 0x231a48: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A4Cu; }
        if (ctx->pc != 0x231A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A4Cu; }
        if (ctx->pc != 0x231A4Cu) { return; }
    }
    ctx->pc = 0x231A4Cu;
label_231a4c:
    // 0x231a4c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231a50: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x231a50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x231a54: 0x0  nop
    ctx->pc = 0x231a54u;
    // NOP
    // 0x231a58: 0x0  nop
    ctx->pc = 0x231a58u;
    // NOP
    // 0x231a5c: 0x1010  mfhi        $v0
    ctx->pc = 0x231a5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x231a60: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x231A60u;
    {
        const bool branch_taken_0x231a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a60) {
            ctx->pc = 0x231AC4u;
            goto label_231ac4;
        }
    }
    ctx->pc = 0x231A68u;
    // 0x231a68: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x231a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231a74: 0x0  nop
    ctx->pc = 0x231a74u;
    // NOP
    // 0x231a78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231a7c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x231A7Cu;
    {
        const bool branch_taken_0x231a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A7Cu;
            // 0x231a80: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a7c) {
            ctx->pc = 0x231AC4u;
            goto label_231ac4;
        }
    }
    ctx->pc = 0x231A84u;
label_231a84:
    // 0x231a84: 0x0  nop
    ctx->pc = 0x231a84u;
    // NOP
    // 0x231a88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231A88u;
    SET_GPR_U32(ctx, 31, 0x231A90u);
    ctx->pc = 0x231A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231A88u;
            // 0x231a8c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A90u; }
        if (ctx->pc != 0x231A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231A90u; }
        if (ctx->pc != 0x231A90u) { return; }
    }
    ctx->pc = 0x231A90u;
label_231a90:
    // 0x231a90: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x231a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x231a94: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x231a94u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x231a98: 0x0  nop
    ctx->pc = 0x231a98u;
    // NOP
    // 0x231a9c: 0x0  nop
    ctx->pc = 0x231a9cu;
    // NOP
    // 0x231aa0: 0x1010  mfhi        $v0
    ctx->pc = 0x231aa0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x231aa4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231AA4u;
    {
        const bool branch_taken_0x231aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231aa4) {
            ctx->pc = 0x231AC4u;
            goto label_231ac4;
        }
    }
    ctx->pc = 0x231AACu;
    // 0x231aac: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x231aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ab0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231ab8: 0x0  nop
    ctx->pc = 0x231ab8u;
    // NOP
    // 0x231abc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231ac0: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x231ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_231ac4:
    // 0x231ac4: 0x0  nop
    ctx->pc = 0x231ac4u;
    // NOP
    // 0x231ac8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231AC8u;
    SET_GPR_U32(ctx, 31, 0x231AD0u);
    ctx->pc = 0x231ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231AC8u;
            // 0x231acc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AD0u; }
        if (ctx->pc != 0x231AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231AD0u; }
        if (ctx->pc != 0x231AD0u) { return; }
    }
    ctx->pc = 0x231AD0u;
label_231ad0:
    // 0x231ad0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x231ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x231ad4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x231ad4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x231ad8: 0x0  nop
    ctx->pc = 0x231ad8u;
    // NOP
    // 0x231adc: 0x0  nop
    ctx->pc = 0x231adcu;
    // NOP
    // 0x231ae0: 0x1810  mfhi        $v1
    ctx->pc = 0x231ae0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x231ae4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231AE4u;
    {
        const bool branch_taken_0x231ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ae4) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x231AECu;
    // 0x231aec: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x231aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231af0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x231af4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231af4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231af8: 0x0  nop
    ctx->pc = 0x231af8u;
    // NOP
    // 0x231afc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231b00: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x231b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_231b04:
    // 0x231b04: 0x0  nop
    ctx->pc = 0x231b04u;
    // NOP
    // 0x231b08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x231b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x231b0c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x231b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_231b10:
    // 0x231b10: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x231b10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x231b14: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x231b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231b18: 0x1460ff01  bnez        $v1, . + 4 + (-0xFF << 2)
    ctx->pc = 0x231B18u;
    {
        const bool branch_taken_0x231b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B18u;
            // 0x231b1c: 0x2a630030  slti        $v1, $s3, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b18) {
            ctx->pc = 0x231720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231720;
        }
    }
    ctx->pc = 0x231B20u;
    // 0x231b20: 0x146000d3  bnez        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x231B20u;
    {
        const bool branch_taken_0x231b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231b20) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231B28u;
    // 0x231b28: 0x86430036  lh          $v1, 0x36($s2)
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x231b2c: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x231b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x231b30: 0x142000cf  bnez        $at, . + 4 + (0xCF << 2)
    ctx->pc = 0x231B30u;
    {
        const bool branch_taken_0x231b30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x231b30) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231B38u;
    // 0x231b38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x231b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b40: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x231b40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x231b44: 0xc08bfa8  jal         func_22FEA0
    ctx->pc = 0x231B44u;
    SET_GPR_U32(ctx, 31, 0x231B4Cu);
    ctx->pc = 0x231B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231B44u;
            // 0x231b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FEA0u;
    if (runtime->hasFunction(0x22FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x22FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B4Cu; }
        if (ctx->pc != 0x231B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetInfoAll__11CMenuEffectFi_0x22fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B4Cu; }
        if (ctx->pc != 0x231B4Cu) { return; }
    }
    ctx->pc = 0x231B4Cu;
label_231b4c:
    // 0x231b4c: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x231b50: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x231b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x231b54: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x231b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x231b58: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x231B58u;
    {
        const bool branch_taken_0x231b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B58u;
            // 0x231b5c: 0xa6400036  sh          $zero, 0x36($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b58) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231B60u;
label_231b60:
    // 0x231b60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x231b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b64: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x231B64u;
    {
        const bool branch_taken_0x231b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B64u;
            // 0x231b68: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b64) {
            ctx->pc = 0x231D18u;
            goto label_231d18;
        }
    }
    ctx->pc = 0x231B6Cu;
label_231b6c:
    // 0x231b6c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x231b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b78: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x231b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x231b7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x231b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231b80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231b84: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x231b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x231b88: 0x8642001c  lh          $v0, 0x1C($s2)
    ctx->pc = 0x231b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x231b8c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x231b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b94: 0x0  nop
    ctx->pc = 0x231b94u;
    // NOP
    // 0x231b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231b9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x231ba0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x231ba0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x231ba4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231ba8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x231ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x231bac: 0x8642001e  lh          $v0, 0x1E($s2)
    ctx->pc = 0x231bacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x231bb0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x231bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231bb8: 0x0  nop
    ctx->pc = 0x231bb8u;
    // NOP
    // 0x231bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231bc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x231bc4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x231bc4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x231bc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231bcc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x231bd0: 0x8642001c  lh          $v0, 0x1C($s2)
    ctx->pc = 0x231bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x231bd4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x231bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231bdc: 0x0  nop
    ctx->pc = 0x231bdcu;
    // NOP
    // 0x231be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231be4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231BE4u;
    SET_GPR_U32(ctx, 31, 0x231BECu);
    ctx->pc = 0x231BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231BE4u;
            // 0x231be8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BECu; }
        if (ctx->pc != 0x231BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BECu; }
        if (ctx->pc != 0x231BECu) { return; }
    }
    ctx->pc = 0x231BECu;
label_231bec:
    // 0x231bec: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x231BECu;
    SET_GPR_U32(ctx, 31, 0x231BF4u);
    ctx->pc = 0x231BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231BECu;
            // 0x231bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BF4u; }
        if (ctx->pc != 0x231BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BF4u; }
        if (ctx->pc != 0x231BF4u) { return; }
    }
    ctx->pc = 0x231BF4u;
label_231bf4:
    // 0x231bf4: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x231bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x231bf8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x231BF8u;
    {
        const bool branch_taken_0x231bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x231bf8) {
            ctx->pc = 0x231CB0u;
            goto label_231cb0;
        }
    }
    ctx->pc = 0x231C00u;
    // 0x231c00: 0x8642001e  lh          $v0, 0x1E($s2)
    ctx->pc = 0x231c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x231c04: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x231c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231c0c: 0x0  nop
    ctx->pc = 0x231c0cu;
    // NOP
    // 0x231c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231c14: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231C14u;
    SET_GPR_U32(ctx, 31, 0x231C1Cu);
    ctx->pc = 0x231C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231C14u;
            // 0x231c18: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C1Cu; }
        if (ctx->pc != 0x231C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C1Cu; }
        if (ctx->pc != 0x231C1Cu) { return; }
    }
    ctx->pc = 0x231C1Cu;
label_231c1c:
    // 0x231c1c: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x231C1Cu;
    SET_GPR_U32(ctx, 31, 0x231C24u);
    ctx->pc = 0x231C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231C1Cu;
            // 0x231c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C24u; }
        if (ctx->pc != 0x231C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C24u; }
        if (ctx->pc != 0x231C24u) { return; }
    }
    ctx->pc = 0x231C24u;
label_231c24:
    // 0x231c24: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x231c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x231c28: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x231C28u;
    {
        const bool branch_taken_0x231c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c28) {
            ctx->pc = 0x231CB0u;
            goto label_231cb0;
        }
    }
    ctx->pc = 0x231C30u;
    // 0x231c30: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x231c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c34: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x231c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x231c38: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x231c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x231c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x231c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231c40: 0xc047a42  jal         func_11E908
    ctx->pc = 0x231C40u;
    SET_GPR_U32(ctx, 31, 0x231C48u);
    ctx->pc = 0x231C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231C40u;
            // 0x231c44: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C48u; }
        if (ctx->pc != 0x231C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C48u; }
        if (ctx->pc != 0x231C48u) { return; }
    }
    ctx->pc = 0x231C48u;
label_231c48:
    // 0x231c48: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x231c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231c4c: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x231c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x231c50: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x231c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x231c54: 0x8643001c  lh          $v1, 0x1C($s2)
    ctx->pc = 0x231c54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x231c58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x231c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231c5c: 0x0  nop
    ctx->pc = 0x231c5cu;
    // NOP
    // 0x231c60: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x231c60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x231c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231c68: 0x0  nop
    ctx->pc = 0x231c68u;
    // NOP
    // 0x231c6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231c70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x231c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x231c74: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x231c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x231c78: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x231c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c7c: 0xc047964  jal         func_11E590
    ctx->pc = 0x231C7Cu;
    SET_GPR_U32(ctx, 31, 0x231C84u);
    ctx->pc = 0x231C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231C7Cu;
            // 0x231c80: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C84u; }
        if (ctx->pc != 0x231C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C84u; }
        if (ctx->pc != 0x231C84u) { return; }
    }
    ctx->pc = 0x231C84u;
label_231c84:
    // 0x231c84: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x231c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c88: 0x8643001e  lh          $v1, 0x1E($s2)
    ctx->pc = 0x231c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x231c8c: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x231c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x231c90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x231c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x231c94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x231c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231c98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231c9c: 0x0  nop
    ctx->pc = 0x231c9cu;
    // NOP
    // 0x231ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231ca4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231CA8u;
    {
        const bool branch_taken_0x231ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CA8u;
            // 0x231cac: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ca8) {
            ctx->pc = 0x231CB8u;
            goto label_231cb8;
        }
    }
    ctx->pc = 0x231CB0u;
label_231cb0:
    // 0x231cb0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x231cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231cb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231cb8:
    // 0x231cb8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x231cb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231cbc: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x231cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231cc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231cc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231cc8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x231cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231ccc: 0x0  nop
    ctx->pc = 0x231cccu;
    // NOP
    // 0x231cd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x231cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231cd4: 0x0  nop
    ctx->pc = 0x231cd4u;
    // NOP
    // 0x231cd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231CD8u;
    {
        const bool branch_taken_0x231cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CD8u;
            // 0x231cdc: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd8) {
            ctx->pc = 0x231CE4u;
            goto label_231ce4;
        }
    }
    ctx->pc = 0x231CE0u;
    // 0x231ce0: 0xe6220030  swc1        $f2, 0x30($s1)
    ctx->pc = 0x231ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_231ce4:
    // 0x231ce4: 0x0  nop
    ctx->pc = 0x231ce4u;
    // NOP
    // 0x231ce8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x231ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x231cec: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x231cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231cf4: 0x0  nop
    ctx->pc = 0x231cf4u;
    // NOP
    // 0x231cf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x231cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231cfc: 0x0  nop
    ctx->pc = 0x231cfcu;
    // NOP
    // 0x231d00: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x231D00u;
    {
        const bool branch_taken_0x231d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231d00) {
            ctx->pc = 0x231D0Cu;
            goto label_231d0c;
        }
    }
    ctx->pc = 0x231D08u;
    // 0x231d08: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x231d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_231d0c:
    // 0x231d0c: 0x0  nop
    ctx->pc = 0x231d0cu;
    // NOP
    // 0x231d10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x231d10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x231d14: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x231d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_231d18:
    // 0x231d18: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x231d18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x231d1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x231d20: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x231d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231d24: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x231D24u;
    {
        const bool branch_taken_0x231d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d24) {
            ctx->pc = 0x231B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231b6c;
        }
    }
    ctx->pc = 0x231D2Cu;
    // 0x231d2c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x231d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x231d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231d38: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x231d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x231d3c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x231d40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231d44: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x231d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x231d48: 0x8646001c  lh          $a2, 0x1C($s2)
    ctx->pc = 0x231d48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x231d4c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x231d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231d50: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x231d50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231d54: 0x0  nop
    ctx->pc = 0x231d54u;
    // NOP
    // 0x231d58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231d60: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x231d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x231d64: 0x8646001e  lh          $a2, 0x1E($s2)
    ctx->pc = 0x231d64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x231d68: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x231d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231d6c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x231d6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231d70: 0x0  nop
    ctx->pc = 0x231d70u;
    // NOP
    // 0x231d74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231d78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231d7c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x231d80: 0x8647000c  lh          $a3, 0xC($s2)
    ctx->pc = 0x231d80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x231d84: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x231d88: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x231d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x231d8c: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x231d90: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x231d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x231d94: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x231d98: 0x0  nop
    ctx->pc = 0x231d98u;
    // NOP
    // 0x231d9c: 0x1810  mfhi        $v1
    ctx->pc = 0x231d9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x231da0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x231da4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x231da8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231dac: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x231dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231db0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x231DB0u;
    {
        const bool branch_taken_0x231db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x231db0) {
            ctx->pc = 0x231DE8u;
            goto label_231de8;
        }
    }
    ctx->pc = 0x231DB8u;
    // 0x231db8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x231db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231dbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x231dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x231dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231dc4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x231dc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x231dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231dcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231dd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x231dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231dd4: 0x0  nop
    ctx->pc = 0x231dd4u;
    // NOP
    // 0x231dd8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x231DD8u;
    {
        const bool branch_taken_0x231dd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x231DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DD8u;
            // 0x231ddc: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dd8) {
            ctx->pc = 0x231E34u;
            goto label_231e34;
        }
    }
    ctx->pc = 0x231DE0u;
    // 0x231de0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x231DE0u;
    {
        const bool branch_taken_0x231de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DE0u;
            // 0x231de4: 0xe6220018  swc1        $f2, 0x18($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231de0) {
            ctx->pc = 0x231E34u;
            goto label_231e34;
        }
    }
    ctx->pc = 0x231DE8u;
label_231de8:
    // 0x231de8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x231DE8u;
    SET_GPR_U32(ctx, 31, 0x231DF0u);
    ctx->pc = 0x231DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231DE8u;
            // 0x231dec: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231DF0u; }
        if (ctx->pc != 0x231DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231DF0u; }
        if (ctx->pc != 0x231DF0u) { return; }
    }
    ctx->pc = 0x231DF0u;
label_231df0:
    // 0x231df0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231DF0u;
    {
        const bool branch_taken_0x231df0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x231DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DF0u;
            // 0x231df4: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231df0) {
            ctx->pc = 0x231E04u;
            goto label_231e04;
        }
    }
    ctx->pc = 0x231DF8u;
    // 0x231df8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x231DF8u;
    {
        const bool branch_taken_0x231df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231df8) {
            ctx->pc = 0x231E04u;
            goto label_231e04;
        }
    }
    ctx->pc = 0x231E00u;
    // 0x231e00: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_231e04:
    // 0x231e04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x231E04u;
    {
        const bool branch_taken_0x231e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E04u;
            // 0x231e08: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e04) {
            ctx->pc = 0x231E34u;
            goto label_231e34;
        }
    }
    ctx->pc = 0x231E0Cu;
    // 0x231e0c: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x231e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x231e10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231e14: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x231e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x231e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231e1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x231e20: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x231e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231e24: 0x0  nop
    ctx->pc = 0x231e24u;
    // NOP
    // 0x231e28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231E28u;
    {
        const bool branch_taken_0x231e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E28u;
            // 0x231e2c: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e28) {
            ctx->pc = 0x231E34u;
            goto label_231e34;
        }
    }
    ctx->pc = 0x231E30u;
    // 0x231e30: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x231e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_231e34:
    // 0x231e34: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x231e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e38: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x231e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x231e3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231e40: 0x0  nop
    ctx->pc = 0x231e40u;
    // NOP
    // 0x231e44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x231e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231e48: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x231E48u;
    {
        const bool branch_taken_0x231e48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E48u;
            // 0x231e4c: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e48) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231E50u;
    // 0x231e50: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x231e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231e58: 0x0  nop
    ctx->pc = 0x231e58u;
    // NOP
    // 0x231e5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x231e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231e60: 0x0  nop
    ctx->pc = 0x231e60u;
    // NOP
    // 0x231e64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x231E64u;
    {
        const bool branch_taken_0x231e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231e64) {
            ctx->pc = 0x231E70u;
            goto label_231e70;
        }
    }
    ctx->pc = 0x231E6Cu;
    // 0x231e6c: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x231e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
label_231e70:
    // 0x231e70: 0x82430009  lb          $v1, 0x9($s2)
    ctx->pc = 0x231e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_231e74:
    // 0x231e74: 0x12030002  beq         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x231E74u;
    {
        const bool branch_taken_0x231e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x231E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E74u;
            // 0x231e78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e74) {
            ctx->pc = 0x231E80u;
            goto label_231e80;
        }
    }
    ctx->pc = 0x231E7Cu;
    // 0x231e7c: 0xa2430008  sb          $v1, 0x8($s2)
    ctx->pc = 0x231e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
label_231e80:
    // 0x231e80: 0x86430036  lh          $v1, 0x36($s2)
    ctx->pc = 0x231e80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x231e84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x231e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x231e88: 0xa6430036  sh          $v1, 0x36($s2)
    ctx->pc = 0x231e88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 3));
label_231e8c:
    // 0x231e8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x231e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x231e90: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x231e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x231e94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x231e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x231e98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x231e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231e9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x231e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231ea0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x231ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231ea4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x231ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231ea8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x231ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x231eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x231EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231EB0u;
            // 0x231eb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231EB8u;
}
