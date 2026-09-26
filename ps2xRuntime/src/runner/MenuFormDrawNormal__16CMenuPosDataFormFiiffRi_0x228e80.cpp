#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFormDrawNormal__16CMenuPosDataFormFiiffRi
// Address: 0x228e80 - 0x229e68
void MenuFormDrawNormal__16CMenuPosDataFormFiiffRi_0x228e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFormDrawNormal__16CMenuPosDataFormFiiffRi_0x228e80");
#endif

    switch (ctx->pc) {
        case 0x228ed8u: goto label_228ed8;
        case 0x228eecu: goto label_228eec;
        case 0x228f04u: goto label_228f04;
        case 0x228f1cu: goto label_228f1c;
        case 0x228f40u: goto label_228f40;
        case 0x228f94u: goto label_228f94;
        case 0x228fd0u: goto label_228fd0;
        case 0x229014u: goto label_229014;
        case 0x229064u: goto label_229064;
        case 0x2290acu: goto label_2290ac;
        case 0x229100u: goto label_229100;
        case 0x229118u: goto label_229118;
        case 0x229138u: goto label_229138;
        case 0x229154u: goto label_229154;
        case 0x229170u: goto label_229170;
        case 0x2291e0u: goto label_2291e0;
        case 0x229204u: goto label_229204;
        case 0x229214u: goto label_229214;
        case 0x22922cu: goto label_22922c;
        case 0x229244u: goto label_229244;
        case 0x229250u: goto label_229250;
        case 0x2292a0u: goto label_2292a0;
        case 0x2292bcu: goto label_2292bc;
        case 0x22930cu: goto label_22930c;
        case 0x2293d8u: goto label_2293d8;
        case 0x2293e4u: goto label_2293e4;
        case 0x229428u: goto label_229428;
        case 0x22944cu: goto label_22944c;
        case 0x229464u: goto label_229464;
        case 0x229470u: goto label_229470;
        case 0x22947cu: goto label_22947c;
        case 0x229494u: goto label_229494;
        case 0x2294a4u: goto label_2294a4;
        case 0x2294c0u: goto label_2294c0;
        case 0x2294d4u: goto label_2294d4;
        case 0x22950cu: goto label_22950c;
        case 0x229518u: goto label_229518;
        case 0x22952cu: goto label_22952c;
        case 0x229538u: goto label_229538;
        case 0x229550u: goto label_229550;
        case 0x229564u: goto label_229564;
        case 0x22957cu: goto label_22957c;
        case 0x22959cu: goto label_22959c;
        case 0x2295bcu: goto label_2295bc;
        case 0x2295f0u: goto label_2295f0;
        case 0x229610u: goto label_229610;
        case 0x22963cu: goto label_22963c;
        case 0x229660u: goto label_229660;
        case 0x229668u: goto label_229668;
        case 0x2296e0u: goto label_2296e0;
        case 0x2296ecu: goto label_2296ec;
        case 0x2296f8u: goto label_2296f8;
        case 0x229720u: goto label_229720;
        case 0x229738u: goto label_229738;
        case 0x229774u: goto label_229774;
        case 0x22978cu: goto label_22978c;
        case 0x229798u: goto label_229798;
        case 0x2297bcu: goto label_2297bc;
        case 0x2297dcu: goto label_2297dc;
        case 0x2297e8u: goto label_2297e8;
        case 0x22980cu: goto label_22980c;
        case 0x229828u: goto label_229828;
        case 0x229840u: goto label_229840;
        case 0x22984cu: goto label_22984c;
        case 0x229858u: goto label_229858;
        case 0x229864u: goto label_229864;
        case 0x229888u: goto label_229888;
        case 0x2298a4u: goto label_2298a4;
        case 0x2298b0u: goto label_2298b0;
        case 0x2298bcu: goto label_2298bc;
        case 0x2298c8u: goto label_2298c8;
        case 0x2298ecu: goto label_2298ec;
        case 0x2298f8u: goto label_2298f8;
        case 0x229930u: goto label_229930;
        case 0x229978u: goto label_229978;
        case 0x22999cu: goto label_22999c;
        case 0x2299c0u: goto label_2299c0;
        case 0x229a14u: goto label_229a14;
        case 0x229a3cu: goto label_229a3c;
        case 0x229a60u: goto label_229a60;
        case 0x229a80u: goto label_229a80;
        case 0x229a98u: goto label_229a98;
        case 0x229aacu: goto label_229aac;
        case 0x229ac4u: goto label_229ac4;
        case 0x229ae4u: goto label_229ae4;
        case 0x229b78u: goto label_229b78;
        case 0x229b84u: goto label_229b84;
        case 0x229b90u: goto label_229b90;
        case 0x229b9cu: goto label_229b9c;
        case 0x229bacu: goto label_229bac;
        case 0x229bc4u: goto label_229bc4;
        case 0x229bdcu: goto label_229bdc;
        case 0x229c00u: goto label_229c00;
        case 0x229c28u: goto label_229c28;
        case 0x229c44u: goto label_229c44;
        case 0x229c70u: goto label_229c70;
        case 0x229c8cu: goto label_229c8c;
        case 0x229cbcu: goto label_229cbc;
        case 0x229cd8u: goto label_229cd8;
        case 0x229ce0u: goto label_229ce0;
        case 0x229d5cu: goto label_229d5c;
        case 0x229d68u: goto label_229d68;
        case 0x229d94u: goto label_229d94;
        case 0x229da0u: goto label_229da0;
        case 0x229dbcu: goto label_229dbc;
        case 0x229dd8u: goto label_229dd8;
        case 0x229dfcu: goto label_229dfc;
        default: break;
    }

    ctx->pc = 0x228e80u;

    // 0x228e80: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x228e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x228e84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x228e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x228e88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x228e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x228e8c: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x228e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x228e90: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x228e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x228e94: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x228e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x228e98: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x228e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x228e9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x228e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x228ea0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x228ea0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x228ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x228ea8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x228ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x228eac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x228eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228eb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x228eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x228eb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x228eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x228eb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x228eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x228ebc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x228ebcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x228ec0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x228ec0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228ec4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x228ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x228ec8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x228ec8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x228ecc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x228eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x228ed0: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x228ED0u;
    SET_GPR_U32(ctx, 31, 0x228ED8u);
    ctx->pc = 0x228ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228ED0u;
            // 0x228ed4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228ED8u; }
        if (ctx->pc != 0x228ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228ED8u; }
        if (ctx->pc != 0x228ED8u) { return; }
    }
    ctx->pc = 0x228ED8u;
label_228ed8:
    // 0x228ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ee4: 0xc04d104  jal         func_134410
    ctx->pc = 0x228EE4u;
    SET_GPR_U32(ctx, 31, 0x228EECu);
    ctx->pc = 0x228EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228EE4u;
            // 0x228ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EECu; }
        if (ctx->pc != 0x228EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EECu; }
        if (ctx->pc != 0x228EECu) { return; }
    }
    ctx->pc = 0x228EECu;
label_228eec:
    // 0x228eec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228ef0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x228ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x228ef4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x228ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x228ef8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x228ef8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x228efc: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x228EFCu;
    SET_GPR_U32(ctx, 31, 0x228F04u);
    ctx->pc = 0x228F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228EFCu;
            // 0x228f00: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F04u; }
        if (ctx->pc != 0x228F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F04u; }
        if (ctx->pc != 0x228F04u) { return; }
    }
    ctx->pc = 0x228F04u;
label_228f04:
    // 0x228f04: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x228f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x228f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f14: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x228F14u;
    SET_GPR_U32(ctx, 31, 0x228F1Cu);
    ctx->pc = 0x228F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228F14u;
            // 0x228f18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F1Cu; }
        if (ctx->pc != 0x228F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F1Cu; }
        if (ctx->pc != 0x228F1Cu) { return; }
    }
    ctx->pc = 0x228F1Cu;
label_228f1c:
    // 0x228f1c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x228f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x228f20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x228f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228f24: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x228f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x228f28: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x228f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x228f2c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x228f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x228f30: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x228f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x228f34: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x228f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x228f38: 0x100003b7  b           . + 4 + (0x3B7 << 2)
    ctx->pc = 0x228F38u;
    {
        const bool branch_taken_0x228f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F38u;
            // 0x228f3c: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f38) {
            ctx->pc = 0x229E18u;
            goto label_229e18;
        }
    }
    ctx->pc = 0x228F40u;
label_228f40:
    // 0x228f40: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x228f44: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x228f48: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x228f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x228f4c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x228f4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x228f50: 0x106003aa  beqz        $v1, . + 4 + (0x3AA << 2)
    ctx->pc = 0x228F50u;
    {
        const bool branch_taken_0x228f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f50) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x228F58u;
    // 0x228f58: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x228f58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x228f5c: 0x106003a7  beqz        $v1, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x228F5Cu;
    {
        const bool branch_taken_0x228f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f5c) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x228F64u;
    // 0x228f64: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x228f64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x228f68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x228f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228f6c: 0x108303a3  beq         $a0, $v1, . + 4 + (0x3A3 << 2)
    ctx->pc = 0x228F6Cu;
    {
        const bool branch_taken_0x228f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x228f6c) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x228F74u;
    // 0x228f74: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x228f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228f78: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x228f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x228f7c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x228f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f80: 0xc64e0024  lwc1        $f14, 0x24($s2)
    ctx->pc = 0x228f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x228f84: 0xc64f0028  lwc1        $f15, 0x28($s2)
    ctx->pc = 0x228f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x228f88: 0x4601ab00  add.s       $f12, $f21, $f1
    ctx->pc = 0x228f88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x228f8c: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x228F8Cu;
    SET_GPR_U32(ctx, 31, 0x228F94u);
    ctx->pc = 0x228F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228F8Cu;
            // 0x228f90: 0x4600a340  add.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F94u; }
        if (ctx->pc != 0x228F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F94u; }
        if (ctx->pc != 0x228F94u) { return; }
    }
    ctx->pc = 0x228F94u;
label_228f94:
    // 0x228f94: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x228f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x228f98: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x228F98u;
    {
        const bool branch_taken_0x228f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f98) {
            ctx->pc = 0x229024u;
            goto label_229024;
        }
    }
    ctx->pc = 0x228FA0u;
    // 0x228fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228fa4: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x228fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228fac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x228facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x228fb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x228fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x228fb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x228fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228fb8: 0x0  nop
    ctx->pc = 0x228fb8u;
    // NOP
    // 0x228fbc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x228fbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x228fc0: 0x0  nop
    ctx->pc = 0x228fc0u;
    // NOP
    // 0x228fc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228fc8: 0xc047964  jal         func_11E590
    ctx->pc = 0x228FC8u;
    SET_GPR_U32(ctx, 31, 0x228FD0u);
    ctx->pc = 0x228FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228FC8u;
            // 0x228fcc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FD0u; }
        if (ctx->pc != 0x228FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FD0u; }
        if (ctx->pc != 0x228FD0u) { return; }
    }
    ctx->pc = 0x228FD0u;
label_228fd0:
    // 0x228fd0: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x228fd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x228fd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228FD4u;
    {
        const bool branch_taken_0x228fd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x228FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228FD4u;
            // 0x228fd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fd4) {
            ctx->pc = 0x228FE8u;
            goto label_228fe8;
        }
    }
    ctx->pc = 0x228FDCu;
    // 0x228fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x228FE0u;
    {
        const bool branch_taken_0x228fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228FE0u;
            // 0x228fe4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fe0) {
            ctx->pc = 0x229000u;
            goto label_229000;
        }
    }
    ctx->pc = 0x228FE8u;
label_228fe8:
    // 0x228fe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228fec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x228fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x228ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x228ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228ff4: 0x0  nop
    ctx->pc = 0x228ff4u;
    // NOP
    // 0x228ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228ffc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x228ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_229000:
    // 0x229000: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x229000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229004: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x229004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229008: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x229008u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22900c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22900Cu;
    SET_GPR_U32(ctx, 31, 0x229014u);
    ctx->pc = 0x229010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22900Cu;
            // 0x229010: 0xe7ac0180  swc1        $f12, 0x180($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229014u; }
        if (ctx->pc != 0x229014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229014u; }
        if (ctx->pc != 0x229014u) { return; }
    }
    ctx->pc = 0x229014u;
label_229014:
    // 0x229014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229018: 0x0  nop
    ctx->pc = 0x229018u;
    // NOP
    // 0x22901c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22901cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229020: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x229020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_229024:
    // 0x229024: 0x0  nop
    ctx->pc = 0x229024u;
    // NOP
    // 0x229028: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x229028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22902c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x22902Cu;
    {
        const bool branch_taken_0x22902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22902c) {
            ctx->pc = 0x2290BCu;
            goto label_2290bc;
        }
    }
    ctx->pc = 0x229034u;
    // 0x229034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229038: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x229038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22903c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22903cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229040: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x229044: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x229048: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x229048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22904c: 0x0  nop
    ctx->pc = 0x22904cu;
    // NOP
    // 0x229050: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x229050u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x229054: 0x0  nop
    ctx->pc = 0x229054u;
    // NOP
    // 0x229058: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22905c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22905Cu;
    SET_GPR_U32(ctx, 31, 0x229064u);
    ctx->pc = 0x229060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22905Cu;
            // 0x229060: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229064u; }
        if (ctx->pc != 0x229064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229064u; }
        if (ctx->pc != 0x229064u) { return; }
    }
    ctx->pc = 0x229064u;
label_229064:
    // 0x229064: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x229064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x229068: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229068u;
    {
        const bool branch_taken_0x229068 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22906Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229068u;
            // 0x22906c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229068) {
            ctx->pc = 0x22907Cu;
            goto label_22907c;
        }
    }
    ctx->pc = 0x229070u;
    // 0x229070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229074: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x229074u;
    {
        const bool branch_taken_0x229074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229074u;
            // 0x229078: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229074) {
            ctx->pc = 0x229094u;
            goto label_229094;
        }
    }
    ctx->pc = 0x22907Cu;
label_22907c:
    // 0x22907c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22907cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x229080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x229080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x229084: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x229084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229088: 0x0  nop
    ctx->pc = 0x229088u;
    // NOP
    // 0x22908c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22908cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229090: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x229090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_229094:
    // 0x229094: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x229094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229098: 0x27b30184  addiu       $s3, $sp, 0x184
    ctx->pc = 0x229098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x22909c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x22909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2290a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2290a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2290A4u;
    SET_GPR_U32(ctx, 31, 0x2290ACu);
    ctx->pc = 0x2290A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2290A4u;
            // 0x2290a8: 0xe66c0000  swc1        $f12, 0x0($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290ACu; }
        if (ctx->pc != 0x2290ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290ACu; }
        if (ctx->pc != 0x2290ACu) { return; }
    }
    ctx->pc = 0x2290ACu;
label_2290ac:
    // 0x2290ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2290acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2290b0: 0x0  nop
    ctx->pc = 0x2290b0u;
    // NOP
    // 0x2290b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2290b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2290b8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2290b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2290bc:
    // 0x2290bc: 0x0  nop
    ctx->pc = 0x2290bcu;
    // NOP
    // 0x2290c0: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2290c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2290c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2290c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2290c8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2290C8u;
    {
        const bool branch_taken_0x2290c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2290c8) {
            ctx->pc = 0x229140u;
            goto label_229140;
        }
    }
    ctx->pc = 0x2290D0u;
    // 0x2290d0: 0xdf829428  ld          $v0, -0x6BD8($gp)
    ctx->pc = 0x2290d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939688)));
    // 0x2290d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2290d8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2290d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2290dc: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2290e0: 0x24a5a670  addiu       $a1, $a1, -0x5990
    ctx->pc = 0x2290e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944368));
    // 0x2290e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2290e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2290e8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2290e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2290ec: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2290ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290f0: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2290f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290f4: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x2290f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2290f8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2290F8u;
    SET_GPR_U32(ctx, 31, 0x229100u);
    ctx->pc = 0x2290FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2290F8u;
            // 0x2290fc: 0xe7a001b4  swc1        $f0, 0x1B4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229100u; }
        if (ctx->pc != 0x229100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229100u; }
        if (ctx->pc != 0x229100u) { return; }
    }
    ctx->pc = 0x229100u;
label_229100:
    // 0x229100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x229100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229104: 0x12400349  beqz        $s2, . + 4 + (0x349 << 2)
    ctx->pc = 0x229104u;
    {
        const bool branch_taken_0x229104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x229104) {
            ctx->pc = 0x229E2Cu;
            goto label_229e2c;
        }
    }
    ctx->pc = 0x22910Cu;
    // 0x22910c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x22910cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x229110: 0xc08878c  jal         func_221E30
    ctx->pc = 0x229110u;
    SET_GPR_U32(ctx, 31, 0x229118u);
    ctx->pc = 0x229114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229110u;
            // 0x229114: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229118u; }
        if (ctx->pc != 0x229118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229118u; }
        if (ctx->pc != 0x229118u) { return; }
    }
    ctx->pc = 0x229118u;
label_229118:
    // 0x229118: 0x938693a8  lbu         $a2, -0x6C58($gp)
    ctx->pc = 0x229118u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939560)));
    // 0x22911c: 0xc78c93ac  lwc1        $f12, -0x6C54($gp)
    ctx->pc = 0x22911cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229120: 0x92870058  lbu         $a3, 0x58($s4)
    ctx->pc = 0x229120u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x229124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229128: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x229128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22912c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229130: 0xc088e94  jal         func_223A50
    ctx->pc = 0x229130u;
    SET_GPR_U32(ctx, 31, 0x229138u);
    ctx->pc = 0x229134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229130u;
            // 0x229134: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229138u; }
        if (ctx->pc != 0x229138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229138u; }
        if (ctx->pc != 0x229138u) { return; }
    }
    ctx->pc = 0x229138u;
label_229138:
    // 0x229138: 0x10000330  b           . + 4 + (0x330 << 2)
    ctx->pc = 0x229138u;
    {
        const bool branch_taken_0x229138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229138) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229140u;
label_229140:
    // 0x229140: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x229140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x229144: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229144u;
    {
        const bool branch_taken_0x229144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229144) {
            ctx->pc = 0x22915Cu;
            goto label_22915c;
        }
    }
    ctx->pc = 0x22914Cu;
    // 0x22914c: 0xc08879c  jal         func_221E70
    ctx->pc = 0x22914Cu;
    SET_GPR_U32(ctx, 31, 0x229154u);
    ctx->pc = 0x229150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22914Cu;
            // 0x229150: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E70u;
    if (runtime->hasFunction(0x221E70u)) {
        auto targetFn = runtime->lookupFunction(0x221E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229154u; }
        if (ctx->pc != 0x229154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadCLUT__Fi_0x221e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229154u; }
        if (ctx->pc != 0x229154u) { return; }
    }
    ctx->pc = 0x229154u;
label_229154:
    // 0x229154: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x229154u;
    {
        const bool branch_taken_0x229154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229154) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x22915Cu;
label_22915c:
    // 0x22915c: 0x0  nop
    ctx->pc = 0x22915cu;
    // NOP
    // 0x229160: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x229160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x229164: 0x8e530014  lw          $s3, 0x14($s2)
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x229168: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x229168u;
    SET_GPR_U32(ctx, 31, 0x229170u);
    ctx->pc = 0x22916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229168u;
            // 0x22916c: 0x92450018  lbu         $a1, 0x18($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229170u; }
        if (ctx->pc != 0x229170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229170u; }
        if (ctx->pc != 0x229170u) { return; }
    }
    ctx->pc = 0x229170u;
label_229170:
    // 0x229170: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x229170u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x229174: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x229174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x229178: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x229178u;
    {
        const bool branch_taken_0x229178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229178u;
            // 0x22917c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229178) {
            ctx->pc = 0x229194u;
            goto label_229194;
        }
    }
    ctx->pc = 0x229180u;
    // 0x229180: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x229180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x229184: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x229184u;
    {
        const bool branch_taken_0x229184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x229184) {
            ctx->pc = 0x229194u;
            goto label_229194;
        }
    }
    ctx->pc = 0x22918Cu;
    // 0x22918c: 0x1260031b  beqz        $s3, . + 4 + (0x31B << 2)
    ctx->pc = 0x22918Cu;
    {
        const bool branch_taken_0x22918c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22918c) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229194u;
label_229194:
    // 0x229194: 0x0  nop
    ctx->pc = 0x229194u;
    // NOP
    // 0x229198: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x229198u;
    {
        const bool branch_taken_0x229198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x229198) {
            ctx->pc = 0x2291A8u;
            goto label_2291a8;
        }
    }
    ctx->pc = 0x2291A0u;
    // 0x2291a0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x2291a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2291a4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x2291a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_2291a8:
    // 0x2291a8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2291ac: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2291ACu;
    {
        const bool branch_taken_0x2291ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2291B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2291ACu;
            // 0x2291b0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291ac) {
            ctx->pc = 0x2291E0u;
            goto label_2291e0;
        }
    }
    ctx->pc = 0x2291B4u;
    // 0x2291b4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2291B4u;
    {
        const bool branch_taken_0x2291b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2291B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2291B4u;
            // 0x2291b8: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291b4) {
            ctx->pc = 0x2291E0u;
            goto label_2291e0;
        }
    }
    ctx->pc = 0x2291BCu;
    // 0x2291bc: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2291BCu;
    {
        const bool branch_taken_0x2291bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2291C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2291BCu;
            // 0x2291c0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291bc) {
            ctx->pc = 0x2291E0u;
            goto label_2291e0;
        }
    }
    ctx->pc = 0x2291C4u;
    // 0x2291c4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2291C4u;
    {
        const bool branch_taken_0x2291c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2291C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2291C4u;
            // 0x2291c8: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291c4) {
            ctx->pc = 0x2291E0u;
            goto label_2291e0;
        }
    }
    ctx->pc = 0x2291CCu;
    // 0x2291cc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2291CCu;
    {
        const bool branch_taken_0x2291cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2291cc) {
            ctx->pc = 0x2291E0u;
            goto label_2291e0;
        }
    }
    ctx->pc = 0x2291D4u;
    // 0x2291d4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2291d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2291d8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2291D8u;
    SET_GPR_U32(ctx, 31, 0x2291E0u);
    ctx->pc = 0x2291DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2291D8u;
            // 0x2291dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2291E0u; }
        if (ctx->pc != 0x2291E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2291E0u; }
        if (ctx->pc != 0x2291E0u) { return; }
    }
    ctx->pc = 0x2291E0u;
label_2291e0:
    // 0x2291e0: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2291e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2291e4: 0x2862002d  slti        $v0, $v1, 0x2D
    ctx->pc = 0x2291e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x2291e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2291E8u;
    {
        const bool branch_taken_0x2291e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2291E8u;
            // 0x2291ec: 0x2862003b  slti        $v0, $v1, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291e8) {
            ctx->pc = 0x2291F8u;
            goto label_2291f8;
        }
    }
    ctx->pc = 0x2291F0u;
    // 0x2291f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2291F0u;
    {
        const bool branch_taken_0x2291f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2291f0) {
            ctx->pc = 0x229204u;
            goto label_229204;
        }
    }
    ctx->pc = 0x2291F8u;
label_2291f8:
    // 0x2291f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2291f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291fc: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2291FCu;
    SET_GPR_U32(ctx, 31, 0x229204u);
    ctx->pc = 0x229200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2291FCu;
            // 0x229200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229204u; }
        if (ctx->pc != 0x229204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229204u; }
        if (ctx->pc != 0x229204u) { return; }
    }
    ctx->pc = 0x229204u;
label_229204:
    // 0x229204: 0x0  nop
    ctx->pc = 0x229204u;
    // NOP
    // 0x229208: 0x8245001a  lb          $a1, 0x1A($s2)
    ctx->pc = 0x229208u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x22920c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x22920Cu;
    SET_GPR_U32(ctx, 31, 0x229214u);
    ctx->pc = 0x229210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22920Cu;
            // 0x229210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229214u; }
        if (ctx->pc != 0x229214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229214u; }
        if (ctx->pc != 0x229214u) { return; }
    }
    ctx->pc = 0x229214u;
label_229214:
    // 0x229214: 0x92420019  lbu         $v0, 0x19($s2)
    ctx->pc = 0x229214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
    // 0x229218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x229218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22921c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22921Cu;
    {
        const bool branch_taken_0x22921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22921Cu;
            // 0x229220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22921c) {
            ctx->pc = 0x229234u;
            goto label_229234;
        }
    }
    ctx->pc = 0x229224u;
    // 0x229224: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x229224u;
    SET_GPR_U32(ctx, 31, 0x22922Cu);
    ctx->pc = 0x229228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229224u;
            // 0x229228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22922Cu; }
        if (ctx->pc != 0x22922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22922Cu; }
        if (ctx->pc != 0x22922Cu) { return; }
    }
    ctx->pc = 0x22922Cu;
label_22922c:
    // 0x22922c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22922Cu;
    {
        const bool branch_taken_0x22922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22922c) {
            ctx->pc = 0x229244u;
            goto label_229244;
        }
    }
    ctx->pc = 0x229234u;
label_229234:
    // 0x229234: 0x0  nop
    ctx->pc = 0x229234u;
    // NOP
    // 0x229238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22923c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x22923Cu;
    SET_GPR_U32(ctx, 31, 0x229244u);
    ctx->pc = 0x229240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22923Cu;
            // 0x229240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229244u; }
        if (ctx->pc != 0x229244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229244u; }
        if (ctx->pc != 0x229244u) { return; }
    }
    ctx->pc = 0x229244u;
label_229244:
    // 0x229244: 0x0  nop
    ctx->pc = 0x229244u;
    // NOP
    // 0x229248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22924c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229250:
    // 0x229250: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x229250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x229254: 0x90440007  lbu         $a0, 0x7($v0)
    ctx->pc = 0x229254u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x229258: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x229258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x22925c: 0x244601cc  addiu       $a2, $v0, 0x1CC
    ctx->pc = 0x22925cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 460));
    // 0x229260: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x229260u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x229264: 0xa31004  sllv        $v0, $v1, $a1
    ctx->pc = 0x229264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x229268: 0x92840050  lbu         $a0, 0x50($s4)
    ctx->pc = 0x229268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x22926c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x229270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229270u;
    {
        const bool branch_taken_0x229270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229270u;
            // 0x229274: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229270) {
            ctx->pc = 0x229280u;
            goto label_229280;
        }
    }
    ctx->pc = 0x229278u;
    // 0x229278: 0x90420055  lbu         $v0, 0x55($v0)
    ctx->pc = 0x229278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 85)));
    // 0x22927c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x22927cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_229280:
    // 0x229280: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x229280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x229284: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x229284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x229288: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x229288u;
    {
        const bool branch_taken_0x229288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229288) {
            ctx->pc = 0x229250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229250;
        }
    }
    ctx->pc = 0x229290u;
    // 0x229290: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x229290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x229294: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x229294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229298: 0xc087df8  jal         func_21F7E0
    ctx->pc = 0x229298u;
    SET_GPR_U32(ctx, 31, 0x2292A0u);
    ctx->pc = 0x22929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229298u;
            // 0x22929c: 0x24a5cf70  addiu       $a1, $a1, -0x3090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F7E0u;
    if (runtime->hasFunction(0x21F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x21F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292A0u; }
        if (ctx->pc != 0x2292A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvMGFRECTtoFLOATtbl__F9mgRect_f_Pf_0x21f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292A0u; }
        if (ctx->pc != 0x2292A0u) { return; }
    }
    ctx->pc = 0x2292A0u;
label_2292a0:
    // 0x2292a0: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x2292a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x2292a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2292a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2292a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2292acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292b0: 0x24e7cf70  addiu       $a3, $a3, -0x3090
    ctx->pc = 0x2292b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954864));
    // 0x2292b4: 0xc089840  jal         func_226100
    ctx->pc = 0x2292B4u;
    SET_GPR_U32(ctx, 31, 0x2292BCu);
    ctx->pc = 0x2292B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292B4u;
            // 0x2292b8: 0x27a801cc  addiu       $t0, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226100u;
    if (runtime->hasFunction(0x226100u)) {
        auto targetFn = runtime->lookupFunction(0x226100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292BCu; }
        if (ctx->pc != 0x2292BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPosRGBA__16CMenuPosDataFormFP18MENUFORMPARTS_TYPEP16MENU_BASETEXINFOPfPUc_0x226100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292BCu; }
        if (ctx->pc != 0x2292BCu) { return; }
    }
    ctx->pc = 0x2292BCu;
label_2292bc:
    // 0x2292bc: 0x92830058  lbu         $v1, 0x58($s4)
    ctx->pc = 0x2292bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2292c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2292C0u;
    {
        const bool branch_taken_0x2292c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2292c0) {
            ctx->pc = 0x2292CCu;
            goto label_2292cc;
        }
    }
    ctx->pc = 0x2292C8u;
    // 0x2292c8: 0xa3a001cf  sb          $zero, 0x1CF($sp)
    ctx->pc = 0x2292c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 463), (uint8_t)GPR_U32(ctx, 0));
label_2292cc:
    // 0x2292cc: 0x0  nop
    ctx->pc = 0x2292ccu;
    // NOP
    // 0x2292d0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2292d4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2292d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2292d8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2292d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2292dc: 0x24a5cf90  addiu       $a1, $a1, -0x3070
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954896));
    // 0x2292e0: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x2292e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x2292e4: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x2292e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2292e8: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x2292e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2292ec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2292ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2292f0: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x2292f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2292f4: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2292f8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2292f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2292fc: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x229300: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x229304: 0xc087de0  jal         func_21F780
    ctx->pc = 0x229304u;
    SET_GPR_U32(ctx, 31, 0x22930Cu);
    ctx->pc = 0x229308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229304u;
            // 0x229308: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F780u;
    if (runtime->hasFunction(0x21F780u)) {
        auto targetFn = runtime->lookupFunction(0x21F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22930Cu; }
        if (ctx->pc != 0x22930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvMGIRECTtoINTtbl__F9mgRect_i_Pi_0x21f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22930Cu; }
        if (ctx->pc != 0x22930Cu) { return; }
    }
    ctx->pc = 0x22930Cu;
label_22930c:
    // 0x22930c: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x22930cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x229310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229314: 0x924a0006  lbu         $t2, 0x6($s2)
    ctx->pc = 0x229314u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x229318: 0x2406003e  addiu       $a2, $zero, 0x3E
    ctx->pc = 0x229318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22931c: 0x7180a  movz        $v1, $zero, $a3
    ctx->pc = 0x22931cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x229320: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x229320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x229324: 0x114602ae  beq         $t2, $a2, . + 4 + (0x2AE << 2)
    ctx->pc = 0x229324u;
    {
        const bool branch_taken_0x229324 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 6));
        ctx->pc = 0x229328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229324u;
            // 0x229328: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229324) {
            ctx->pc = 0x229DE0u;
            goto label_229de0;
        }
    }
    ctx->pc = 0x22932Cu;
    // 0x22932c: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x229330: 0x11460285  beq         $t2, $a2, . + 4 + (0x285 << 2)
    ctx->pc = 0x229330u;
    {
        const bool branch_taken_0x229330 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 6));
        if (branch_taken_0x229330) {
            ctx->pc = 0x229D48u;
            goto label_229d48;
        }
    }
    ctx->pc = 0x229338u;
    // 0x229338: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x22933c: 0x114401dd  beq         $t2, $a0, . + 4 + (0x1DD << 2)
    ctx->pc = 0x22933Cu;
    {
        const bool branch_taken_0x22933c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22933Cu;
            // 0x229340: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22933c) {
            ctx->pc = 0x229AB4u;
            goto label_229ab4;
        }
    }
    ctx->pc = 0x229344u;
    // 0x229344: 0x114401d6  beq         $t2, $a0, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x229344u;
    {
        const bool branch_taken_0x229344 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229344u;
            // 0x229348: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229344) {
            ctx->pc = 0x229AA0u;
            goto label_229aa0;
        }
    }
    ctx->pc = 0x22934Cu;
    // 0x22934c: 0x114401ce  beq         $t2, $a0, . + 4 + (0x1CE << 2)
    ctx->pc = 0x22934Cu;
    {
        const bool branch_taken_0x22934c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22934Cu;
            // 0x229350: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22934c) {
            ctx->pc = 0x229A88u;
            goto label_229a88;
        }
    }
    ctx->pc = 0x229354u;
    // 0x229354: 0x114401c4  beq         $t2, $a0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229354u;
            // 0x229358: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229354) {
            ctx->pc = 0x229A68u;
            goto label_229a68;
        }
    }
    ctx->pc = 0x22935Cu;
    // 0x22935c: 0x11440191  beq         $t2, $a0, . + 4 + (0x191 << 2)
    ctx->pc = 0x22935Cu;
    {
        const bool branch_taken_0x22935c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22935Cu;
            // 0x229360: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22935c) {
            ctx->pc = 0x2299A4u;
            goto label_2299a4;
        }
    }
    ctx->pc = 0x229364u;
    // 0x229364: 0x11440186  beq         $t2, $a0, . + 4 + (0x186 << 2)
    ctx->pc = 0x229364u;
    {
        const bool branch_taken_0x229364 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229364u;
            // 0x229368: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229364) {
            ctx->pc = 0x229980u;
            goto label_229980;
        }
    }
    ctx->pc = 0x22936Cu;
    // 0x22936c: 0x11440184  beq         $t2, $a0, . + 4 + (0x184 << 2)
    ctx->pc = 0x22936Cu;
    {
        const bool branch_taken_0x22936c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22936Cu;
            // 0x229370: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22936c) {
            ctx->pc = 0x229980u;
            goto label_229980;
        }
    }
    ctx->pc = 0x229374u;
    // 0x229374: 0x11440170  beq         $t2, $a0, . + 4 + (0x170 << 2)
    ctx->pc = 0x229374u;
    {
        const bool branch_taken_0x229374 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229374u;
            // 0x229378: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229374) {
            ctx->pc = 0x229938u;
            goto label_229938;
        }
    }
    ctx->pc = 0x22937Cu;
    // 0x22937c: 0x11440160  beq         $t2, $a0, . + 4 + (0x160 << 2)
    ctx->pc = 0x22937Cu;
    {
        const bool branch_taken_0x22937c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22937Cu;
            // 0x229380: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22937c) {
            ctx->pc = 0x229900u;
            goto label_229900;
        }
    }
    ctx->pc = 0x229384u;
    // 0x229384: 0x114400ba  beq         $t2, $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x229384u;
    {
        const bool branch_taken_0x229384 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229384u;
            // 0x229388: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229384) {
            ctx->pc = 0x229670u;
            goto label_229670;
        }
    }
    ctx->pc = 0x22938Cu;
    // 0x22938c: 0x114400b8  beq         $t2, $a0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x22938Cu;
    {
        const bool branch_taken_0x22938c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x229390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22938Cu;
            // 0x229390: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22938c) {
            ctx->pc = 0x229670u;
            goto label_229670;
        }
    }
    ctx->pc = 0x229394u;
    // 0x229394: 0x11440062  beq         $t2, $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x229394u;
    {
        const bool branch_taken_0x229394 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x229394) {
            ctx->pc = 0x229520u;
            goto label_229520;
        }
    }
    ctx->pc = 0x22939Cu;
    // 0x22939c: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22939Cu;
    {
        const bool branch_taken_0x22939c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x22939c) {
            ctx->pc = 0x2293ACu;
            goto label_2293ac;
        }
    }
    ctx->pc = 0x2293A4u;
    // 0x2293a4: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x2293A4u;
    {
        const bool branch_taken_0x2293a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293a4) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x2293ACu;
label_2293ac:
    // 0x2293ac: 0x0  nop
    ctx->pc = 0x2293acu;
    // NOP
    // 0x2293b0: 0x3ae3c  dsll32      $s5, $v1, 24
    ctx->pc = 0x2293b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2293b4: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x2293b4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x2293b8: 0x278282dc  addiu       $v0, $gp, -0x7D24
    ctx->pc = 0x2293b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935260));
    // 0x2293bc: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x2293bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2293c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2293c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2293c4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2293c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x2293c8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2293c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2293cc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2293ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2293d0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2293D0u;
    SET_GPR_U32(ctx, 31, 0x2293D8u);
    ctx->pc = 0x2293D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2293D0u;
            // 0x2293d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293D8u; }
        if (ctx->pc != 0x2293D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293D8u; }
        if (ctx->pc != 0x2293D8u) { return; }
    }
    ctx->pc = 0x2293D8u;
label_2293d8:
    // 0x2293d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2293d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293dc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2293DCu;
    SET_GPR_U32(ctx, 31, 0x2293E4u);
    ctx->pc = 0x2293E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2293DCu;
            // 0x2293e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293E4u; }
        if (ctx->pc != 0x2293E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293E4u; }
        if (ctx->pc != 0x2293E4u) { return; }
    }
    ctx->pc = 0x2293E4u;
label_2293e4:
    // 0x2293e4: 0x92420046  lbu         $v0, 0x46($s2)
    ctx->pc = 0x2293e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x2293e8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2293E8u;
    {
        const bool branch_taken_0x2293e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293e8) {
            ctx->pc = 0x2294A4u;
            goto label_2294a4;
        }
    }
    ctx->pc = 0x2293F0u;
    // 0x2293f0: 0x93a301cf  lbu         $v1, 0x1CF($sp)
    ctx->pc = 0x2293f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x2293f4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2293f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x2293f8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x2293f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x2293fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2293fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22940c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x22940cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x229410: 0x0  nop
    ctx->pc = 0x229410u;
    // NOP
    // 0x229414: 0x0  nop
    ctx->pc = 0x229414u;
    // NOP
    // 0x229418: 0x1010  mfhi        $v0
    ctx->pc = 0x229418u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x22941c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x22941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x229420: 0xc04d320  jal         func_134C80
    ctx->pc = 0x229420u;
    SET_GPR_U32(ctx, 31, 0x229428u);
    ctx->pc = 0x229424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229420u;
            // 0x229424: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229428u; }
        if (ctx->pc != 0x229428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229428u; }
        if (ctx->pc != 0x229428u) { return; }
    }
    ctx->pc = 0x229428u;
label_229428:
    // 0x229428: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x229428u;
    {
        const bool branch_taken_0x229428 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x229428) {
            ctx->pc = 0x2294A4u;
            goto label_2294a4;
        }
    }
    ctx->pc = 0x229430u;
    // 0x229430: 0x82520047  lb          $s2, 0x47($s2)
    ctx->pc = 0x229430u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x229434: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x229434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229438: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x229438u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22943c: 0x0  nop
    ctx->pc = 0x22943cu;
    // NOP
    // 0x229440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229444: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229444u;
    SET_GPR_U32(ctx, 31, 0x22944Cu);
    ctx->pc = 0x229448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229444u;
            // 0x229448: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22944Cu; }
        if (ctx->pc != 0x22944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22944Cu; }
        if (ctx->pc != 0x22944Cu) { return; }
    }
    ctx->pc = 0x22944Cu;
label_22944c:
    // 0x22944c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x22944cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229450: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x229450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229454: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229458: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x229458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22945c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22945Cu;
    SET_GPR_U32(ctx, 31, 0x229464u);
    ctx->pc = 0x229460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22945Cu;
            // 0x229460: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229464u; }
        if (ctx->pc != 0x229464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229464u; }
        if (ctx->pc != 0x229464u) { return; }
    }
    ctx->pc = 0x229464u;
label_229464:
    // 0x229464: 0xc7ac0188  lwc1        $f12, 0x188($sp)
    ctx->pc = 0x229464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229468: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229468u;
    SET_GPR_U32(ctx, 31, 0x229470u);
    ctx->pc = 0x22946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229468u;
            // 0x22946c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229470u; }
        if (ctx->pc != 0x229470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229470u; }
        if (ctx->pc != 0x229470u) { return; }
    }
    ctx->pc = 0x229470u;
label_229470:
    // 0x229470: 0xc7ac018c  lwc1        $f12, 0x18C($sp)
    ctx->pc = 0x229470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229474: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229474u;
    SET_GPR_U32(ctx, 31, 0x22947Cu);
    ctx->pc = 0x229478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229474u;
            // 0x229478: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22947Cu; }
        if (ctx->pc != 0x22947Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22947Cu; }
        if (ctx->pc != 0x22947Cu) { return; }
    }
    ctx->pc = 0x22947Cu;
label_22947c:
    // 0x22947c: 0x7ba700f0  lq          $a3, 0xF0($sp)
    ctx->pc = 0x22947cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x229480: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229484: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x229484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229488: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x229488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22948c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22948Cu;
    SET_GPR_U32(ctx, 31, 0x229494u);
    ctx->pc = 0x229490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22948Cu;
            // 0x229490: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229494u; }
        if (ctx->pc != 0x229494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229494u; }
        if (ctx->pc != 0x229494u) { return; }
    }
    ctx->pc = 0x229494u;
label_229494:
    // 0x229494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229498: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x229498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x22949c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x22949Cu;
    SET_GPR_U32(ctx, 31, 0x2294A4u);
    ctx->pc = 0x2294A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22949Cu;
            // 0x2294a0: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294A4u; }
        if (ctx->pc != 0x2294A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294A4u; }
        if (ctx->pc != 0x2294A4u) { return; }
    }
    ctx->pc = 0x2294A4u;
label_2294a4:
    // 0x2294a4: 0x0  nop
    ctx->pc = 0x2294a4u;
    // NOP
    // 0x2294a8: 0x93a501cc  lbu         $a1, 0x1CC($sp)
    ctx->pc = 0x2294a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x2294ac: 0x93a601cd  lbu         $a2, 0x1CD($sp)
    ctx->pc = 0x2294acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 461)));
    // 0x2294b0: 0x93a701ce  lbu         $a3, 0x1CE($sp)
    ctx->pc = 0x2294b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 462)));
    // 0x2294b4: 0x93a801cf  lbu         $t0, 0x1CF($sp)
    ctx->pc = 0x2294b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x2294b8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2294B8u;
    SET_GPR_U32(ctx, 31, 0x2294C0u);
    ctx->pc = 0x2294BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2294B8u;
            // 0x2294bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294C0u; }
        if (ctx->pc != 0x2294C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294C0u; }
        if (ctx->pc != 0x2294C0u) { return; }
    }
    ctx->pc = 0x2294C0u;
label_2294c0:
    // 0x2294c0: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2294C0u;
    {
        const bool branch_taken_0x2294c0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2294C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2294C0u;
            // 0x2294c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294c0) {
            ctx->pc = 0x2294DCu;
            goto label_2294dc;
        }
    }
    ctx->pc = 0x2294C8u;
    // 0x2294c8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2294c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2294cc: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x2294CCu;
    SET_GPR_U32(ctx, 31, 0x2294D4u);
    ctx->pc = 0x2294D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2294CCu;
            // 0x2294d0: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294D4u; }
        if (ctx->pc != 0x2294D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294D4u; }
        if (ctx->pc != 0x2294D4u) { return; }
    }
    ctx->pc = 0x2294D4u;
label_2294d4:
    // 0x2294d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2294D4u;
    {
        const bool branch_taken_0x2294d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2294d4) {
            ctx->pc = 0x22950Cu;
            goto label_22950c;
        }
    }
    ctx->pc = 0x2294DCu;
label_2294dc:
    // 0x2294dc: 0x0  nop
    ctx->pc = 0x2294dcu;
    // NOP
    // 0x2294e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2294e4: 0x16a20009  bne         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2294E4u;
    {
        const bool branch_taken_0x2294e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2294e4) {
            ctx->pc = 0x22950Cu;
            goto label_22950c;
        }
    }
    ctx->pc = 0x2294ECu;
    // 0x2294ec: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2294ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2294f0: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2294f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2294f4: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x2294f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x2294f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2294f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294fc: 0x24a5cf70  addiu       $a1, $a1, -0x3090
    ctx->pc = 0x2294fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954864));
    // 0x229500: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x229500u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x229504: 0xc087f6c  jal         func_21FDB0
    ctx->pc = 0x229504u;
    SET_GPR_U32(ctx, 31, 0x22950Cu);
    ctx->pc = 0x229508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229504u;
            // 0x229508: 0x24c6cf90  addiu       $a2, $a2, -0x3070 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FDB0u;
    if (runtime->hasFunction(0x21FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22950Cu; }
        if (ctx->pc != 0x22950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PushPrimRepeat__FP11mgCDrawPrimPfPii_0x21fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22950Cu; }
        if (ctx->pc != 0x22950Cu) { return; }
    }
    ctx->pc = 0x22950Cu;
label_22950c:
    // 0x22950c: 0x0  nop
    ctx->pc = 0x22950cu;
    // NOP
    // 0x229510: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x229510u;
    SET_GPR_U32(ctx, 31, 0x229518u);
    ctx->pc = 0x229514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229510u;
            // 0x229514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229518u; }
        if (ctx->pc != 0x229518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229518u; }
        if (ctx->pc != 0x229518u) { return; }
    }
    ctx->pc = 0x229518u;
label_229518:
    // 0x229518: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x229518u;
    {
        const bool branch_taken_0x229518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229518) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229520u;
label_229520:
    // 0x229520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229524: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x229524u;
    SET_GPR_U32(ctx, 31, 0x22952Cu);
    ctx->pc = 0x229528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229524u;
            // 0x229528: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22952Cu; }
        if (ctx->pc != 0x22952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22952Cu; }
        if (ctx->pc != 0x22952Cu) { return; }
    }
    ctx->pc = 0x22952Cu;
label_22952c:
    // 0x22952c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229530: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x229530u;
    SET_GPR_U32(ctx, 31, 0x229538u);
    ctx->pc = 0x229534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229530u;
            // 0x229534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229538u; }
        if (ctx->pc != 0x229538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229538u; }
        if (ctx->pc != 0x229538u) { return; }
    }
    ctx->pc = 0x229538u;
label_229538:
    // 0x229538: 0x93a501cc  lbu         $a1, 0x1CC($sp)
    ctx->pc = 0x229538u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x22953c: 0x93a601cd  lbu         $a2, 0x1CD($sp)
    ctx->pc = 0x22953cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 461)));
    // 0x229540: 0x93a701ce  lbu         $a3, 0x1CE($sp)
    ctx->pc = 0x229540u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 462)));
    // 0x229544: 0x93a801cf  lbu         $t0, 0x1CF($sp)
    ctx->pc = 0x229544u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229548: 0xc04d320  jal         func_134C80
    ctx->pc = 0x229548u;
    SET_GPR_U32(ctx, 31, 0x229550u);
    ctx->pc = 0x22954Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229548u;
            // 0x22954c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229550u; }
        if (ctx->pc != 0x229550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229550u; }
        if (ctx->pc != 0x229550u) { return; }
    }
    ctx->pc = 0x229550u;
label_229550:
    // 0x229550: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x229550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x229554: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x229554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x229558: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x229558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22955c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22955Cu;
    SET_GPR_U32(ctx, 31, 0x229564u);
    ctx->pc = 0x229560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22955Cu;
            // 0x229560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229564u; }
        if (ctx->pc != 0x229564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229564u; }
        if (ctx->pc != 0x229564u) { return; }
    }
    ctx->pc = 0x229564u;
label_229564:
    // 0x229564: 0x27b30184  addiu       $s3, $sp, 0x184
    ctx->pc = 0x229564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x229568: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x229568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22956c: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x22956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229570: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x229570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x229574: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x229574u;
    SET_GPR_U32(ctx, 31, 0x22957Cu);
    ctx->pc = 0x229578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229574u;
            // 0x229578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22957Cu; }
        if (ctx->pc != 0x22957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22957Cu; }
        if (ctx->pc != 0x22957Cu) { return; }
    }
    ctx->pc = 0x22957Cu;
label_22957c:
    // 0x22957c: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x229580: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x229580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x229584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22958c: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x22958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x229590: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x229590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229594: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x229594u;
    SET_GPR_U32(ctx, 31, 0x22959Cu);
    ctx->pc = 0x229598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229594u;
            // 0x229598: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22959Cu; }
        if (ctx->pc != 0x22959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22959Cu; }
        if (ctx->pc != 0x22959Cu) { return; }
    }
    ctx->pc = 0x22959Cu;
label_22959c:
    // 0x22959c: 0x27b50188  addiu       $s5, $sp, 0x188
    ctx->pc = 0x22959cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2295a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295a4: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2295a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2295a8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2295a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2295ac: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x2295acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2295b0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2295b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2295b4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2295B4u;
    SET_GPR_U32(ctx, 31, 0x2295BCu);
    ctx->pc = 0x2295B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2295B4u;
            // 0x2295b8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295BCu; }
        if (ctx->pc != 0x2295BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295BCu; }
        if (ctx->pc != 0x2295BCu) { return; }
    }
    ctx->pc = 0x2295BCu;
label_2295bc:
    // 0x2295bc: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2295bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2295c0: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2295c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2295c4: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2295c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2295c8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x2295c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2295cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2295d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2295d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2295d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2295d8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2295d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2295dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2295dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2295e0: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x2295e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x2295e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2295e8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2295E8u;
    SET_GPR_U32(ctx, 31, 0x2295F0u);
    ctx->pc = 0x2295ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2295E8u;
            // 0x2295ec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295F0u; }
        if (ctx->pc != 0x2295F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295F0u; }
        if (ctx->pc != 0x2295F0u) { return; }
    }
    ctx->pc = 0x2295F0u;
label_2295f0:
    // 0x2295f0: 0x27b2018c  addiu       $s2, $sp, 0x18C
    ctx->pc = 0x2295f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x2295f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295f8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2295f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2295fc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2295fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229600: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x229600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229604: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x229604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x229608: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x229608u;
    SET_GPR_U32(ctx, 31, 0x229610u);
    ctx->pc = 0x22960Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229608u;
            // 0x22960c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229610u; }
        if (ctx->pc != 0x229610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229610u; }
        if (ctx->pc != 0x229610u) { return; }
    }
    ctx->pc = 0x229610u;
label_229610:
    // 0x229610: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x229610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x229614: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x229614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x229618: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x229618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22961c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229620: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x229620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x229624: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x229624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x229628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22962c: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x22962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x229630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x229630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229634: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x229634u;
    SET_GPR_U32(ctx, 31, 0x22963Cu);
    ctx->pc = 0x229638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229634u;
            // 0x229638: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22963Cu; }
        if (ctx->pc != 0x22963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22963Cu; }
        if (ctx->pc != 0x22963Cu) { return; }
    }
    ctx->pc = 0x22963Cu;
label_22963c:
    // 0x22963c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x22963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229644: 0xc7a30180  lwc1        $f3, 0x180($sp)
    ctx->pc = 0x229644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229648: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x229648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22964c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x22964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229650: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x229650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x229654: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x229654u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x229658: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x229658u;
    SET_GPR_U32(ctx, 31, 0x229660u);
    ctx->pc = 0x22965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229658u;
            // 0x22965c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229660u; }
        if (ctx->pc != 0x229660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229660u; }
        if (ctx->pc != 0x229660u) { return; }
    }
    ctx->pc = 0x229660u;
label_229660:
    // 0x229660: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x229660u;
    SET_GPR_U32(ctx, 31, 0x229668u);
    ctx->pc = 0x229664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229660u;
            // 0x229664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229668u; }
        if (ctx->pc != 0x229668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229668u; }
        if (ctx->pc != 0x229668u) { return; }
    }
    ctx->pc = 0x229668u;
label_229668:
    // 0x229668: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x229668u;
    {
        const bool branch_taken_0x229668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229668) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229670u;
label_229670:
    // 0x229670: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x229670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x229674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229678: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x229678u;
    {
        const bool branch_taken_0x229678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x229678) {
            ctx->pc = 0x229698u;
            goto label_229698;
        }
    }
    ctx->pc = 0x229680u;
    // 0x229680: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x229680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x229684: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x229684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x229688: 0x142001dc  bnez        $at, . + 4 + (0x1DC << 2)
    ctx->pc = 0x229688u;
    {
        const bool branch_taken_0x229688 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229688) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229690u;
    // 0x229690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229690u;
    {
        const bool branch_taken_0x229690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229690) {
            ctx->pc = 0x2296A4u;
            goto label_2296a4;
        }
    }
    ctx->pc = 0x229698u;
label_229698:
    // 0x229698: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x229698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22969c: 0x46001d7  bltz        $v1, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x22969Cu;
    {
        const bool branch_taken_0x22969c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x22969c) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x2296A4u;
label_2296a4:
    // 0x2296a4: 0x0  nop
    ctx->pc = 0x2296a4u;
    // NOP
    // 0x2296a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2296ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2296acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2296b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296b4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2296b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2296b8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2296b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2296bc: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2296bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2296c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2296c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2296c4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2296c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2296c8: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2296c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2296cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2296ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2296d0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2296d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2296d4: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x2296d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x2296d8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2296D8u;
    SET_GPR_U32(ctx, 31, 0x2296E0u);
    ctx->pc = 0x2296DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2296D8u;
            // 0x2296dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296E0u; }
        if (ctx->pc != 0x2296E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296E0u; }
        if (ctx->pc != 0x2296E0u) { return; }
    }
    ctx->pc = 0x2296E0u;
label_2296e0:
    // 0x2296e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2296e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296e4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2296E4u;
    SET_GPR_U32(ctx, 31, 0x2296ECu);
    ctx->pc = 0x2296E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2296E4u;
            // 0x2296e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296ECu; }
        if (ctx->pc != 0x2296ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296ECu; }
        if (ctx->pc != 0x2296ECu) { return; }
    }
    ctx->pc = 0x2296ECu;
label_2296ec:
    // 0x2296ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2296ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296f0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2296F0u;
    SET_GPR_U32(ctx, 31, 0x2296F8u);
    ctx->pc = 0x2296F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2296F0u;
            // 0x2296f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296F8u; }
        if (ctx->pc != 0x2296F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296F8u; }
        if (ctx->pc != 0x2296F8u) { return; }
    }
    ctx->pc = 0x2296F8u;
label_2296f8:
    // 0x2296f8: 0x92420046  lbu         $v0, 0x46($s2)
    ctx->pc = 0x2296f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x2296fc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2296FCu;
    {
        const bool branch_taken_0x2296fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296fc) {
            ctx->pc = 0x22980Cu;
            goto label_22980c;
        }
    }
    ctx->pc = 0x229704u;
    // 0x229704: 0x82530047  lb          $s3, 0x47($s2)
    ctx->pc = 0x229704u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x229708: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x229708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22970c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x22970cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229710: 0x0  nop
    ctx->pc = 0x229710u;
    // NOP
    // 0x229714: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229718: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229718u;
    SET_GPR_U32(ctx, 31, 0x229720u);
    ctx->pc = 0x22971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229718u;
            // 0x22971c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229720u; }
        if (ctx->pc != 0x229720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229720u; }
        if (ctx->pc != 0x229720u) { return; }
    }
    ctx->pc = 0x229720u;
label_229720:
    // 0x229720: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x229720u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229724: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x229724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229728: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x229728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22972c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22972cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229730: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229730u;
    SET_GPR_U32(ctx, 31, 0x229738u);
    ctx->pc = 0x229734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229730u;
            // 0x229734: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229738u; }
        if (ctx->pc != 0x229738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229738u; }
        if (ctx->pc != 0x229738u) { return; }
    }
    ctx->pc = 0x229738u;
label_229738:
    // 0x229738: 0x93a301cf  lbu         $v1, 0x1CF($sp)
    ctx->pc = 0x229738u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x22973c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22973cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229740: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x229740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x229744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229748: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x229748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x22974c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229758: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x229758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22975c: 0x0  nop
    ctx->pc = 0x22975cu;
    // NOP
    // 0x229760: 0x0  nop
    ctx->pc = 0x229760u;
    // NOP
    // 0x229764: 0x1010  mfhi        $v0
    ctx->pc = 0x229764u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x229768: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x22976c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22976Cu;
    SET_GPR_U32(ctx, 31, 0x229774u);
    ctx->pc = 0x229770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22976Cu;
            // 0x229770: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229774u; }
        if (ctx->pc != 0x229774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229774u; }
        if (ctx->pc != 0x229774u) { return; }
    }
    ctx->pc = 0x229774u;
label_229774:
    // 0x229774: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x229774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x229778: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x229778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22977c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22977Cu;
    {
        const bool branch_taken_0x22977c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22977c) {
            ctx->pc = 0x2297C4u;
            goto label_2297c4;
        }
    }
    ctx->pc = 0x229784u;
    // 0x229784: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229784u;
    SET_GPR_U32(ctx, 31, 0x22978Cu);
    ctx->pc = 0x229788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229784u;
            // 0x229788: 0xc64c0024  lwc1        $f12, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22978Cu; }
        if (ctx->pc != 0x22978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22978Cu; }
        if (ctx->pc != 0x22978Cu) { return; }
    }
    ctx->pc = 0x22978Cu;
label_22978c:
    // 0x22978c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x22978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x229790: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229790u;
    SET_GPR_U32(ctx, 31, 0x229798u);
    ctx->pc = 0x229794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229790u;
            // 0x229794: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229798u; }
        if (ctx->pc != 0x229798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229798u; }
        if (ctx->pc != 0x229798u) { return; }
    }
    ctx->pc = 0x229798u;
label_229798:
    // 0x229798: 0x7baa00e0  lq          $t2, 0xE0($sp)
    ctx->pc = 0x229798u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x22979c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22979cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297a0: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2297a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2297a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2297a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297a8: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2297a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2297ac: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2297acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2297b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297b4: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2297B4u;
    SET_GPR_U32(ctx, 31, 0x2297BCu);
    ctx->pc = 0x2297B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2297B4u;
            // 0x2297b8: 0x27a90190  addiu       $t1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297BCu; }
        if (ctx->pc != 0x2297BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297BCu; }
        if (ctx->pc != 0x2297BCu) { return; }
    }
    ctx->pc = 0x2297BCu;
label_2297bc:
    // 0x2297bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2297BCu;
    {
        const bool branch_taken_0x2297bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297bc) {
            ctx->pc = 0x22980Cu;
            goto label_22980c;
        }
    }
    ctx->pc = 0x2297C4u;
label_2297c4:
    // 0x2297c4: 0x0  nop
    ctx->pc = 0x2297c4u;
    // NOP
    // 0x2297c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2297c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2297cc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2297CCu;
    {
        const bool branch_taken_0x2297cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2297cc) {
            ctx->pc = 0x22980Cu;
            goto label_22980c;
        }
    }
    ctx->pc = 0x2297D4u;
    // 0x2297d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2297D4u;
    SET_GPR_U32(ctx, 31, 0x2297DCu);
    ctx->pc = 0x2297D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2297D4u;
            // 0x2297d8: 0xc64c0024  lwc1        $f12, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297DCu; }
        if (ctx->pc != 0x2297DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297DCu; }
        if (ctx->pc != 0x2297DCu) { return; }
    }
    ctx->pc = 0x2297DCu;
label_2297dc:
    // 0x2297dc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2297dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2297e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2297E0u;
    SET_GPR_U32(ctx, 31, 0x2297E8u);
    ctx->pc = 0x2297E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2297E0u;
            // 0x2297e4: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297E8u; }
        if (ctx->pc != 0x2297E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297E8u; }
        if (ctx->pc != 0x2297E8u) { return; }
    }
    ctx->pc = 0x2297E8u;
label_2297e8:
    // 0x2297e8: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x2297e8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2297ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2297ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297f0: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2297f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2297f4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2297f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297f8: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2297f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2297fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2297fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229804: 0xc0886d8  jal         func_221B60
    ctx->pc = 0x229804u;
    SET_GPR_U32(ctx, 31, 0x22980Cu);
    ctx->pc = 0x229808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229804u;
            // 0x229808: 0x27a90190  addiu       $t1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B60u;
    if (runtime->hasFunction(0x221B60u)) {
        auto targetFn = runtime->lookupFunction(0x221B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22980Cu; }
        if (ctx->pc != 0x22980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22980Cu; }
        if (ctx->pc != 0x22980Cu) { return; }
    }
    ctx->pc = 0x22980Cu;
label_22980c:
    // 0x22980c: 0x0  nop
    ctx->pc = 0x22980cu;
    // NOP
    // 0x229810: 0x93a501cc  lbu         $a1, 0x1CC($sp)
    ctx->pc = 0x229810u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x229814: 0x93a601cd  lbu         $a2, 0x1CD($sp)
    ctx->pc = 0x229814u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 461)));
    // 0x229818: 0x93a701ce  lbu         $a3, 0x1CE($sp)
    ctx->pc = 0x229818u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 462)));
    // 0x22981c: 0x93a801cf  lbu         $t0, 0x1CF($sp)
    ctx->pc = 0x22981cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229820: 0xc04d320  jal         func_134C80
    ctx->pc = 0x229820u;
    SET_GPR_U32(ctx, 31, 0x229828u);
    ctx->pc = 0x229824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229820u;
            // 0x229824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229828u; }
        if (ctx->pc != 0x229828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229828u; }
        if (ctx->pc != 0x229828u) { return; }
    }
    ctx->pc = 0x229828u;
label_229828:
    // 0x229828: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x229828u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x22982c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x229830: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x229830u;
    {
        const bool branch_taken_0x229830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229830) {
            ctx->pc = 0x229890u;
            goto label_229890;
        }
    }
    ctx->pc = 0x229838u;
    // 0x229838: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229838u;
    SET_GPR_U32(ctx, 31, 0x229840u);
    ctx->pc = 0x22983Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229838u;
            // 0x22983c: 0xc7ac0180  lwc1        $f12, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229840u; }
        if (ctx->pc != 0x229840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229840u; }
        if (ctx->pc != 0x229840u) { return; }
    }
    ctx->pc = 0x229840u;
label_229840:
    // 0x229840: 0xc7ac0184  lwc1        $f12, 0x184($sp)
    ctx->pc = 0x229840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229844: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229844u;
    SET_GPR_U32(ctx, 31, 0x22984Cu);
    ctx->pc = 0x229848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229844u;
            // 0x229848: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22984Cu; }
        if (ctx->pc != 0x22984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22984Cu; }
        if (ctx->pc != 0x22984Cu) { return; }
    }
    ctx->pc = 0x22984Cu;
label_22984c:
    // 0x22984c: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x22984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229850: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229850u;
    SET_GPR_U32(ctx, 31, 0x229858u);
    ctx->pc = 0x229854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229850u;
            // 0x229854: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229858u; }
        if (ctx->pc != 0x229858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229858u; }
        if (ctx->pc != 0x229858u) { return; }
    }
    ctx->pc = 0x229858u;
label_229858:
    // 0x229858: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x229858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x22985c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22985Cu;
    SET_GPR_U32(ctx, 31, 0x229864u);
    ctx->pc = 0x229860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22985Cu;
            // 0x229860: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229864u; }
        if (ctx->pc != 0x229864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229864u; }
        if (ctx->pc != 0x229864u) { return; }
    }
    ctx->pc = 0x229864u;
label_229864:
    // 0x229864: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x229864u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x229868: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x229868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22986c: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x22986cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x229870: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x229870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229874: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x229874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x229878: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x229878u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22987c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229880: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x229880u;
    SET_GPR_U32(ctx, 31, 0x229888u);
    ctx->pc = 0x229884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229880u;
            // 0x229884: 0x27a90190  addiu       $t1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229888u; }
        if (ctx->pc != 0x229888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229888u; }
        if (ctx->pc != 0x229888u) { return; }
    }
    ctx->pc = 0x229888u;
label_229888:
    // 0x229888: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x229888u;
    {
        const bool branch_taken_0x229888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229888) {
            ctx->pc = 0x2298ECu;
            goto label_2298ec;
        }
    }
    ctx->pc = 0x229890u;
label_229890:
    // 0x229890: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229894: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x229894u;
    {
        const bool branch_taken_0x229894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229894) {
            ctx->pc = 0x2298ECu;
            goto label_2298ec;
        }
    }
    ctx->pc = 0x22989Cu;
    // 0x22989c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22989Cu;
    SET_GPR_U32(ctx, 31, 0x2298A4u);
    ctx->pc = 0x2298A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22989Cu;
            // 0x2298a0: 0xc7ac0180  lwc1        $f12, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298A4u; }
        if (ctx->pc != 0x2298A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298A4u; }
        if (ctx->pc != 0x2298A4u) { return; }
    }
    ctx->pc = 0x2298A4u;
label_2298a4:
    // 0x2298a4: 0xc7ac0184  lwc1        $f12, 0x184($sp)
    ctx->pc = 0x2298a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2298a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2298A8u;
    SET_GPR_U32(ctx, 31, 0x2298B0u);
    ctx->pc = 0x2298ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2298A8u;
            // 0x2298ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298B0u; }
        if (ctx->pc != 0x2298B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298B0u; }
        if (ctx->pc != 0x2298B0u) { return; }
    }
    ctx->pc = 0x2298B0u;
label_2298b0:
    // 0x2298b0: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x2298b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2298b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2298B4u;
    SET_GPR_U32(ctx, 31, 0x2298BCu);
    ctx->pc = 0x2298B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2298B4u;
            // 0x2298b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298BCu; }
        if (ctx->pc != 0x2298BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298BCu; }
        if (ctx->pc != 0x2298BCu) { return; }
    }
    ctx->pc = 0x2298BCu;
label_2298bc:
    // 0x2298bc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2298bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2298c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2298C0u;
    SET_GPR_U32(ctx, 31, 0x2298C8u);
    ctx->pc = 0x2298C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2298C0u;
            // 0x2298c4: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298C8u; }
        if (ctx->pc != 0x2298C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298C8u; }
        if (ctx->pc != 0x2298C8u) { return; }
    }
    ctx->pc = 0x2298C8u;
label_2298c8:
    // 0x2298c8: 0x7baa00b0  lq          $t2, 0xB0($sp)
    ctx->pc = 0x2298c8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2298cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2298ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298d0: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2298d4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2298d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298d8: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2298dc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2298dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2298e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298e4: 0xc0886d8  jal         func_221B60
    ctx->pc = 0x2298E4u;
    SET_GPR_U32(ctx, 31, 0x2298ECu);
    ctx->pc = 0x2298E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2298E4u;
            // 0x2298e8: 0x27a90190  addiu       $t1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B60u;
    if (runtime->hasFunction(0x221B60u)) {
        auto targetFn = runtime->lookupFunction(0x221B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298ECu; }
        if (ctx->pc != 0x2298ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298ECu; }
        if (ctx->pc != 0x2298ECu) { return; }
    }
    ctx->pc = 0x2298ECu;
label_2298ec:
    // 0x2298ec: 0x0  nop
    ctx->pc = 0x2298ecu;
    // NOP
    // 0x2298f0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2298F0u;
    SET_GPR_U32(ctx, 31, 0x2298F8u);
    ctx->pc = 0x2298F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2298F0u;
            // 0x2298f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298F8u; }
        if (ctx->pc != 0x2298F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298F8u; }
        if (ctx->pc != 0x2298F8u) { return; }
    }
    ctx->pc = 0x2298F8u;
label_2298f8:
    // 0x2298f8: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x2298F8u;
    {
        const bool branch_taken_0x2298f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2298f8) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229900u;
label_229900:
    // 0x229900: 0x93a701cf  lbu         $a3, 0x1CF($sp)
    ctx->pc = 0x229900u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229904: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x229904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229908: 0x93a801cc  lbu         $t0, 0x1CC($sp)
    ctx->pc = 0x229908u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x22990c: 0x93a901cd  lbu         $t1, 0x1CD($sp)
    ctx->pc = 0x22990cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 461)));
    // 0x229910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x229910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229914: 0x93aa01ce  lbu         $t2, 0x1CE($sp)
    ctx->pc = 0x229914u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 462)));
    // 0x229918: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x229918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x22991c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x229920: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x229920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x229924: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x229924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229928: 0xc089414  jal         func_225050
    ctx->pc = 0x229928u;
    SET_GPR_U32(ctx, 31, 0x229930u);
    ctx->pc = 0x22992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229928u;
            // 0x22992c: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x225050u;
    if (runtime->hasFunction(0x225050u)) {
        auto targetFn = runtime->lookupFunction(0x225050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229930u; }
        if (ctx->pc != 0x229930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuWakuRect__FP10mgCTexture9mgRect_f_9mgRect_i_iiii_0x225050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229930u; }
        if (ctx->pc != 0x229930u) { return; }
    }
    ctx->pc = 0x229930u;
label_229930:
    // 0x229930: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x229930u;
    {
        const bool branch_taken_0x229930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229930) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229938u;
label_229938:
    // 0x229938: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x22993c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x22993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229948: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x229948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x22994c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x22994cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x229950: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x229950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229954: 0x93a801cf  lbu         $t0, 0x1CF($sp)
    ctx->pc = 0x229954u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229958: 0x93a901cc  lbu         $t1, 0x1CC($sp)
    ctx->pc = 0x229958u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x22995c: 0xc78c93e8  lwc1        $f12, -0x6C18($gp)
    ctx->pc = 0x22995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229960: 0x93aa01cd  lbu         $t2, 0x1CD($sp)
    ctx->pc = 0x229960u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 461)));
    // 0x229964: 0x93ab01ce  lbu         $t3, 0x1CE($sp)
    ctx->pc = 0x229964u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 462)));
    // 0x229968: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x229968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x22996c: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x22996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229970: 0xc089570  jal         func_2255C0
    ctx->pc = 0x229970u;
    SET_GPR_U32(ctx, 31, 0x229978u);
    ctx->pc = 0x229974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229970u;
            // 0x229974: 0x27a70190  addiu       $a3, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2255C0u;
    if (runtime->hasFunction(0x2255C0u)) {
        auto targetFn = runtime->lookupFunction(0x2255C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229978u; }
        if (ctx->pc != 0x229978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawWakuCircle__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_ffiiii_0x2255c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229978u; }
        if (ctx->pc != 0x229978u) { return; }
    }
    ctx->pc = 0x229978u;
label_229978:
    // 0x229978: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x229978u;
    {
        const bool branch_taken_0x229978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229978) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229980u;
label_229980:
    // 0x229980: 0x93a801cc  lbu         $t0, 0x1CC($sp)
    ctx->pc = 0x229980u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x229984: 0x93a901cf  lbu         $t1, 0x1CF($sp)
    ctx->pc = 0x229984u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229988: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22998c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229990: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229994: 0xc08b418  jal         func_22D060
    ctx->pc = 0x229994u;
    SET_GPR_U32(ctx, 31, 0x22999Cu);
    ctx->pc = 0x229998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229994u;
            // 0x229998: 0x27a70190  addiu       $a3, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D060u;
    if (runtime->hasFunction(0x22D060u)) {
        auto targetFn = runtime->lookupFunction(0x22D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22999Cu; }
        if (ctx->pc != 0x22999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFrameImageDraw__FP11mgCDrawPrimP10mgCTexture9mgRect_f_9mgRect_i_iii_0x22d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22999Cu; }
        if (ctx->pc != 0x22999Cu) { return; }
    }
    ctx->pc = 0x22999Cu;
label_22999c:
    // 0x22999c: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x22999Cu;
    {
        const bool branch_taken_0x22999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22999c) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x2299A4u;
label_2299a4:
    // 0x2299a4: 0x0  nop
    ctx->pc = 0x2299a4u;
    // NOP
    // 0x2299a8: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x2299a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2299ac: 0x1aa00113  blez        $s5, . + 4 + (0x113 << 2)
    ctx->pc = 0x2299ACu;
    {
        const bool branch_taken_0x2299ac = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2299ac) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x2299B4u;
    // 0x2299b4: 0x8f858308  lw          $a1, -0x7CF8($gp)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935304)));
    // 0x2299b8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2299B8u;
    SET_GPR_U32(ctx, 31, 0x2299C0u);
    ctx->pc = 0x2299BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2299B8u;
            // 0x2299bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299C0u; }
        if (ctx->pc != 0x2299C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299C0u; }
        if (ctx->pc != 0x2299C0u) { return; }
    }
    ctx->pc = 0x2299C0u;
label_2299c0:
    // 0x2299c0: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x2299c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x2299c4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2299c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299c8: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2299C8u;
    {
        const bool branch_taken_0x2299c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2299CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2299C8u;
            // 0x2299cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299c8) {
            ctx->pc = 0x2299E0u;
            goto label_2299e0;
        }
    }
    ctx->pc = 0x2299D0u;
    // 0x2299d0: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x2299d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2299d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2299d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2299d8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2299d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2299dc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x2299dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_2299e0:
    // 0x2299e0: 0x240201aa  addiu       $v0, $zero, 0x1AA
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x2299e4: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2299E4u;
    {
        const bool branch_taken_0x2299e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2299e4) {
            ctx->pc = 0x2299F4u;
            goto label_2299f4;
        }
    }
    ctx->pc = 0x2299ECu;
    // 0x2299ec: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x2299ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2299f0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2299f4:
    // 0x2299f4: 0x0  nop
    ctx->pc = 0x2299f4u;
    // NOP
    // 0x2299f8: 0x924a0045  lbu         $t2, 0x45($s2)
    ctx->pc = 0x2299f8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x2299fc: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x229a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a04: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x229a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229a08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x229a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a0c: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x229A0Cu;
    SET_GPR_U32(ctx, 31, 0x229A14u);
    ctx->pc = 0x229A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A0Cu;
            // 0x229a10: 0x27a901cc  addiu       $t1, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A14u; }
        if (ctx->pc != 0x229A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A14u; }
        if (ctx->pc != 0x229A14u) { return; }
    }
    ctx->pc = 0x229A14u;
label_229a14:
    // 0x229a14: 0x126000f9  beqz        $s3, . + 4 + (0xF9 << 2)
    ctx->pc = 0x229A14u;
    {
        const bool branch_taken_0x229a14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a14) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229A1Cu;
    // 0x229a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a20: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229A20u;
    {
        const bool branch_taken_0x229a20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x229a20) {
            ctx->pc = 0x229A3Cu;
            goto label_229a3c;
        }
    }
    ctx->pc = 0x229A28u;
    // 0x229a28: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x229a2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x229a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a34: 0xc089ab4  jal         func_226AD0
    ctx->pc = 0x229A34u;
    SET_GPR_U32(ctx, 31, 0x229A3Cu);
    ctx->pc = 0x229A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A34u;
            // 0x229a38: 0x27a70180  addiu       $a3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226AD0u;
    if (runtime->hasFunction(0x226AD0u)) {
        auto targetFn = runtime->lookupFunction(0x226AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A3Cu; }
        if (ctx->pc != 0x229A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawItemIconEffect2__FP11mgCDrawPrimP10mgCTextureP18MENUFORMPARTS_TYPE9mgRect_f__0x226ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A3Cu; }
        if (ctx->pc != 0x229A3Cu) { return; }
    }
    ctx->pc = 0x229A3Cu;
label_229a3c:
    // 0x229a3c: 0x0  nop
    ctx->pc = 0x229a3cu;
    // NOP
    // 0x229a40: 0x87839340  lh          $v1, -0x6CC0($gp)
    ctx->pc = 0x229a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939456)));
    // 0x229a44: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x229a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x229a48: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x229a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x229a4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229a54: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x229a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x229a58: 0xc04bba8  jal         func_12EEA0
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A58u;
            // 0x229a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA0u;
    if (runtime->hasFunction(0x12EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A60u; }
        if (ctx->pc != 0x229A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A60u; }
        if (ctx->pc != 0x229A60u) { return; }
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x229A60u;
    {
        const bool branch_taken_0x229a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a60) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229A68u;
label_229a68:
    // 0x229a68: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x229a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x229a6c: 0xc64c002c  lwc1        $f12, 0x2C($s2)
    ctx->pc = 0x229a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229a70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x229a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a74: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x229a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229a78: 0xc082454  jal         func_209150
    ctx->pc = 0x229A78u;
    SET_GPR_U32(ctx, 31, 0x229A80u);
    ctx->pc = 0x229A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A78u;
            // 0x229a7c: 0x27a701cc  addiu       $a3, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209150u;
    if (runtime->hasFunction(0x209150u)) {
        auto targetFn = runtime->lookupFunction(0x209150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A80u; }
        if (ctx->pc != 0x229A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureDraw__FRi9mgRect_f_ifPUc_0x209150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A80u; }
        if (ctx->pc != 0x229A80u) { return; }
    }
    ctx->pc = 0x229A80u;
label_229a80:
    // 0x229a80: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x229A80u;
    {
        const bool branch_taken_0x229a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a80) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229A88u;
label_229a88:
    // 0x229a88: 0x93a601cf  lbu         $a2, 0x1CF($sp)
    ctx->pc = 0x229a88u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229a8c: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x229a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x229a90: 0xc0824b4  jal         func_2092D0
    ctx->pc = 0x229A90u;
    SET_GPR_U32(ctx, 31, 0x229A98u);
    ctx->pc = 0x229A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A90u;
            // 0x229a94: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2092D0u;
    if (runtime->hasFunction(0x2092D0u)) {
        auto targetFn = runtime->lookupFunction(0x2092D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A98u; }
        if (ctx->pc != 0x229A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventPictureBoardDraw__FPfRii_0x2092d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A98u; }
        if (ctx->pc != 0x229A98u) { return; }
    }
    ctx->pc = 0x229A98u;
label_229a98:
    // 0x229a98: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x229A98u;
    {
        const bool branch_taken_0x229a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a98) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229AA0u;
label_229aa0:
    // 0x229aa0: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x229aa4: 0xc0825d8  jal         func_209760
    ctx->pc = 0x229AA4u;
    SET_GPR_U32(ctx, 31, 0x229AACu);
    ctx->pc = 0x229AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229AA4u;
            // 0x229aa8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209760u;
    if (runtime->hasFunction(0x209760u)) {
        auto targetFn = runtime->lookupFunction(0x209760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AACu; }
        if (ctx->pc != 0x229AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventAlbumPictureDraw__FPfRi_0x209760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AACu; }
        if (ctx->pc != 0x229AACu) { return; }
    }
    ctx->pc = 0x229AACu;
label_229aac:
    // 0x229aac: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x229AACu;
    {
        const bool branch_taken_0x229aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229aac) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229AB4u;
label_229ab4:
    // 0x229ab4: 0x0  nop
    ctx->pc = 0x229ab4u;
    // NOP
    // 0x229ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229abc: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x229ABCu;
    SET_GPR_U32(ctx, 31, 0x229AC4u);
    ctx->pc = 0x229AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229ABCu;
            // 0x229ac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AC4u; }
        if (ctx->pc != 0x229AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AC4u; }
        if (ctx->pc != 0x229AC4u) { return; }
    }
    ctx->pc = 0x229AC4u;
label_229ac4:
    // 0x229ac4: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x229ac4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x229ac8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x229acc: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x229accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x229ad0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x229ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x229ad4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x229AD4u;
    {
        const bool branch_taken_0x229ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229AD4u;
            // 0x229ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ad4) {
            ctx->pc = 0x229B24u;
            goto label_229b24;
        }
    }
    ctx->pc = 0x229ADCu;
    // 0x229adc: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x229ADCu;
    SET_GPR_U32(ctx, 31, 0x229AE4u);
    ctx->pc = 0x229AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229ADCu;
            // 0x229ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AE4u; }
        if (ctx->pc != 0x229AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AE4u; }
        if (ctx->pc != 0x229AE4u) { return; }
    }
    ctx->pc = 0x229AE4u;
label_229ae4:
    // 0x229ae4: 0x93a201cf  lbu         $v0, 0x1CF($sp)
    ctx->pc = 0x229ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 463)));
    // 0x229ae8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229AE8u;
    {
        const bool branch_taken_0x229ae8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x229AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229AE8u;
            // 0x229aec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ae8) {
            ctx->pc = 0x229AFCu;
            goto label_229afc;
        }
    }
    ctx->pc = 0x229AF0u;
    // 0x229af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229af4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x229AF4u;
    {
        const bool branch_taken_0x229af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229AF4u;
            // 0x229af8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229af4) {
            ctx->pc = 0x229B14u;
            goto label_229b14;
        }
    }
    ctx->pc = 0x229AFCu;
label_229afc:
    // 0x229afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x229afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x229b00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x229b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x229b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b08: 0x0  nop
    ctx->pc = 0x229b08u;
    // NOP
    // 0x229b0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x229b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229b10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x229b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_229b14:
    // 0x229b14: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x229b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x229b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b1c: 0x0  nop
    ctx->pc = 0x229b1cu;
    // NOP
    // 0x229b20: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x229b20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_229b24:
    // 0x229b24: 0x0  nop
    ctx->pc = 0x229b24u;
    // NOP
    // 0x229b28: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x229b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x229b2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229b30: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x229B30u;
    {
        const bool branch_taken_0x229b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229B30u;
            // 0x229b34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b30) {
            ctx->pc = 0x229C94u;
            goto label_229c94;
        }
    }
    ctx->pc = 0x229B38u;
    // 0x229b38: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x229B38u;
    {
        const bool branch_taken_0x229b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229B38u;
            // 0x229b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b38) {
            ctx->pc = 0x229C4Cu;
            goto label_229c4c;
        }
    }
    ctx->pc = 0x229B40u;
    // 0x229b40: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x229B40u;
    {
        const bool branch_taken_0x229b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229b40) {
            ctx->pc = 0x229C08u;
            goto label_229c08;
        }
    }
    ctx->pc = 0x229B48u;
    // 0x229b48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x229B48u;
    {
        const bool branch_taken_0x229b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b48) {
            ctx->pc = 0x229B58u;
            goto label_229b58;
        }
    }
    ctx->pc = 0x229B50u;
    // 0x229b50: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x229B50u;
    {
        const bool branch_taken_0x229b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b50) {
            ctx->pc = 0x229CD8u;
            goto label_229cd8;
        }
    }
    ctx->pc = 0x229B58u;
label_229b58:
    // 0x229b58: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x229b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x229b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229b64: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x229b68: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b6c: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x229b6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b70: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x229B70u;
    SET_GPR_U32(ctx, 31, 0x229B78u);
    ctx->pc = 0x229B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B70u;
            // 0x229b74: 0xafb10120  sw          $s1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B78u; }
        if (ctx->pc != 0x229B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B78u; }
        if (ctx->pc != 0x229B78u) { return; }
    }
    ctx->pc = 0x229B78u;
label_229b78:
    // 0x229b78: 0x8e520040  lw          $s2, 0x40($s2)
    ctx->pc = 0x229b78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x229b7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229B7Cu;
    SET_GPR_U32(ctx, 31, 0x229B84u);
    ctx->pc = 0x229B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B7Cu;
            // 0x229b80: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B84u; }
        if (ctx->pc != 0x229B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B84u; }
        if (ctx->pc != 0x229B84u) { return; }
    }
    ctx->pc = 0x229B84u;
label_229b84:
    // 0x229b84: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x229b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229b88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229B88u;
    SET_GPR_U32(ctx, 31, 0x229B90u);
    ctx->pc = 0x229B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B88u;
            // 0x229b8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B90u; }
        if (ctx->pc != 0x229B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B90u; }
        if (ctx->pc != 0x229B90u) { return; }
    }
    ctx->pc = 0x229B90u;
label_229b90:
    // 0x229b90: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x229b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229b94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229B94u;
    SET_GPR_U32(ctx, 31, 0x229B9Cu);
    ctx->pc = 0x229B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B94u;
            // 0x229b98: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B9Cu; }
        if (ctx->pc != 0x229B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B9Cu; }
        if (ctx->pc != 0x229B9Cu) { return; }
    }
    ctx->pc = 0x229B9Cu;
label_229b9c:
    // 0x229b9c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x229b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229ba0: 0x46160302  mul.s       $f12, $f0, $f22
    ctx->pc = 0x229ba0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x229ba4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229BA4u;
    SET_GPR_U32(ctx, 31, 0x229BACu);
    ctx->pc = 0x229BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BA4u;
            // 0x229ba8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BACu; }
        if (ctx->pc != 0x229BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BACu; }
        if (ctx->pc != 0x229BACu) { return; }
    }
    ctx->pc = 0x229BACu;
label_229bac:
    // 0x229bac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bb0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x229bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x229bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bb8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x229bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bbc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x229BBCu;
    SET_GPR_U32(ctx, 31, 0x229BC4u);
    ctx->pc = 0x229BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BBCu;
            // 0x229bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BC4u; }
        if (ctx->pc != 0x229BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BC4u; }
        if (ctx->pc != 0x229BC4u) { return; }
    }
    ctx->pc = 0x229BC4u;
label_229bc4:
    // 0x229bc4: 0x27b20184  addiu       $s2, $sp, 0x184
    ctx->pc = 0x229bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x229bc8: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x229bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229bcc: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x229bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229bd0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x229bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x229bd4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x229BD4u;
    SET_GPR_U32(ctx, 31, 0x229BDCu);
    ctx->pc = 0x229BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BD4u;
            // 0x229bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BDCu; }
        if (ctx->pc != 0x229BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BDCu; }
        if (ctx->pc != 0x229BDCu) { return; }
    }
    ctx->pc = 0x229BDCu;
label_229bdc:
    // 0x229bdc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x229bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229be4: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x229be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229be8: 0xc7a30180  lwc1        $f3, 0x180($sp)
    ctx->pc = 0x229be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229bec: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x229becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229bf0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x229bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x229bf4: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x229bf4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229bf8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x229BF8u;
    SET_GPR_U32(ctx, 31, 0x229C00u);
    ctx->pc = 0x229BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BF8u;
            // 0x229bfc: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C00u; }
        if (ctx->pc != 0x229C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C00u; }
        if (ctx->pc != 0x229C00u) { return; }
    }
    ctx->pc = 0x229C00u;
label_229c00:
    // 0x229c00: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x229C00u;
    {
        const bool branch_taken_0x229c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c00) {
            ctx->pc = 0x229CD8u;
            goto label_229cd8;
        }
    }
    ctx->pc = 0x229C08u;
label_229c08:
    // 0x229c08: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x229c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x229c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x229c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x229c14: 0x245e0004  addiu       $fp, $v0, 0x4
    ctx->pc = 0x229c14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x229c18: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x229c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x229c1c: 0xafbe0120  sw          $fp, 0x120($sp)
    ctx->pc = 0x229c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 30));
    // 0x229c20: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x229C20u;
    SET_GPR_U32(ctx, 31, 0x229C28u);
    ctx->pc = 0x229C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229C20u;
            // 0x229c24: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C28u; }
        if (ctx->pc != 0x229C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C28u; }
        if (ctx->pc != 0x229C28u) { return; }
    }
    ctx->pc = 0x229C28u;
label_229c28:
    // 0x229c28: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x229c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x229c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c30: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x229c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229c34: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x229c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c38: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x229c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c3c: 0xc088704  jal         func_221C10
    ctx->pc = 0x229C3Cu;
    SET_GPR_U32(ctx, 31, 0x229C44u);
    ctx->pc = 0x229C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229C3Cu;
            // 0x229c40: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C44u; }
        if (ctx->pc != 0x229C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C44u; }
        if (ctx->pc != 0x229C44u) { return; }
    }
    ctx->pc = 0x229C44u;
label_229c44:
    // 0x229c44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x229C44u;
    {
        const bool branch_taken_0x229c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c44) {
            ctx->pc = 0x229CD8u;
            goto label_229cd8;
        }
    }
    ctx->pc = 0x229C4Cu;
label_229c4c:
    // 0x229c4c: 0x0  nop
    ctx->pc = 0x229c4cu;
    // NOP
    // 0x229c50: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x229c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x229c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x229c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x229c5c: 0x24570004  addiu       $s7, $v0, 0x4
    ctx->pc = 0x229c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x229c60: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x229c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x229c64: 0xafb70120  sw          $s7, 0x120($sp)
    ctx->pc = 0x229c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 23));
    // 0x229c68: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x229C68u;
    SET_GPR_U32(ctx, 31, 0x229C70u);
    ctx->pc = 0x229C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229C68u;
            // 0x229c6c: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C70u; }
        if (ctx->pc != 0x229C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C70u; }
        if (ctx->pc != 0x229C70u) { return; }
    }
    ctx->pc = 0x229C70u;
label_229c70:
    // 0x229c70: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x229c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x229c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c78: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x229c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229c7c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x229c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c80: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x229c80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c84: 0xc088704  jal         func_221C10
    ctx->pc = 0x229C84u;
    SET_GPR_U32(ctx, 31, 0x229C8Cu);
    ctx->pc = 0x229C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229C84u;
            // 0x229c88: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C8Cu; }
        if (ctx->pc != 0x229C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C8Cu; }
        if (ctx->pc != 0x229C8Cu) { return; }
    }
    ctx->pc = 0x229C8Cu;
label_229c8c:
    // 0x229c8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x229C8Cu;
    {
        const bool branch_taken_0x229c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c8c) {
            ctx->pc = 0x229CD8u;
            goto label_229cd8;
        }
    }
    ctx->pc = 0x229C94u;
label_229c94:
    // 0x229c94: 0x0  nop
    ctx->pc = 0x229c94u;
    // NOP
    // 0x229c98: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x229c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x229c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ca0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x229ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x229ca4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x229ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x229ca8: 0x24770028  addiu       $s7, $v1, 0x28
    ctx->pc = 0x229ca8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x229cac: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x229cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x229cb0: 0x247e004c  addiu       $fp, $v1, 0x4C
    ctx->pc = 0x229cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x229cb4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x229CB4u;
    SET_GPR_U32(ctx, 31, 0x229CBCu);
    ctx->pc = 0x229CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229CB4u;
            // 0x229cb8: 0x24710070  addiu       $s1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CBCu; }
        if (ctx->pc != 0x229CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CBCu; }
        if (ctx->pc != 0x229CBCu) { return; }
    }
    ctx->pc = 0x229CBCu;
label_229cbc:
    // 0x229cbc: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x229cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cc4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x229cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x229cc8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x229cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ccc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x229cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cd0: 0xc088704  jal         func_221C10
    ctx->pc = 0x229CD0u;
    SET_GPR_U32(ctx, 31, 0x229CD8u);
    ctx->pc = 0x229CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229CD0u;
            // 0x229cd4: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CD8u; }
        if (ctx->pc != 0x229CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CD8u; }
        if (ctx->pc != 0x229CD8u) { return; }
    }
    ctx->pc = 0x229CD8u;
label_229cd8:
    // 0x229cd8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x229CD8u;
    SET_GPR_U32(ctx, 31, 0x229CE0u);
    ctx->pc = 0x229CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229CD8u;
            // 0x229cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CE0u; }
        if (ctx->pc != 0x229CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CE0u; }
        if (ctx->pc != 0x229CE0u) { return; }
    }
    ctx->pc = 0x229CE0u;
label_229ce0:
    // 0x229ce0: 0x92830050  lbu         $v1, 0x50($s4)
    ctx->pc = 0x229ce0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x229ce4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x229ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x229ce8: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x229CE8u;
    {
        const bool branch_taken_0x229ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229CE8u;
            // 0x229cec: 0x27a401cf  addiu       $a0, $sp, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 463));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ce8) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229CF0u;
    // 0x229cf0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x229cf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229cf8: 0x0  nop
    ctx->pc = 0x229cf8u;
    // NOP
    // 0x229cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229d00: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x229d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x229d04: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x229d08: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x229d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d10: 0x0  nop
    ctx->pc = 0x229d10u;
    // NOP
    // 0x229d14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229d18: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x229d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x229d1c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x229d1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d24: 0x0  nop
    ctx->pc = 0x229d24u;
    // NOP
    // 0x229d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229d2c: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x229d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x229d30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x229d30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d38: 0x0  nop
    ctx->pc = 0x229d38u;
    // NOP
    // 0x229d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229d40: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x229D40u;
    {
        const bool branch_taken_0x229d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229D40u;
            // 0x229d44: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d40) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229D48u;
label_229d48:
    // 0x229d48: 0xdf829430  ld          $v0, -0x6BD0($gp)
    ctx->pc = 0x229d48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939696)));
    // 0x229d4c: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x229d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x229d50: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x229d50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x229d54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229D54u;
    SET_GPR_U32(ctx, 31, 0x229D5Cu);
    ctx->pc = 0x229D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D54u;
            // 0x229d58: 0xc7ac0180  lwc1        $f12, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D5Cu; }
        if (ctx->pc != 0x229D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D5Cu; }
        if (ctx->pc != 0x229D5Cu) { return; }
    }
    ctx->pc = 0x229D5Cu;
label_229d5c:
    // 0x229d5c: 0xc7ac0184  lwc1        $f12, 0x184($sp)
    ctx->pc = 0x229d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229d60: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229D60u;
    SET_GPR_U32(ctx, 31, 0x229D68u);
    ctx->pc = 0x229D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D60u;
            // 0x229d64: 0xafa201b8  sw          $v0, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D68u; }
        if (ctx->pc != 0x229D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D68u; }
        if (ctx->pc != 0x229D68u) { return; }
    }
    ctx->pc = 0x229D68u;
label_229d68:
    // 0x229d68: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x229d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x229d6c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x229d70: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x229D70u;
    {
        const bool branch_taken_0x229d70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x229D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229D70u;
            // 0x229d74: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d70) {
            ctx->pc = 0x229D84u;
            goto label_229d84;
        }
    }
    ctx->pc = 0x229D78u;
    // 0x229d78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x229D78u;
    {
        const bool branch_taken_0x229d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229d78) {
            ctx->pc = 0x229D84u;
            goto label_229d84;
        }
    }
    ctx->pc = 0x229D80u;
    // 0x229d80: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x229d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_229d84:
    // 0x229d84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229D84u;
    {
        const bool branch_taken_0x229d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229d84) {
            ctx->pc = 0x229DBCu;
            goto label_229dbc;
        }
    }
    ctx->pc = 0x229D8Cu;
    // 0x229d8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229D8Cu;
    SET_GPR_U32(ctx, 31, 0x229D94u);
    ctx->pc = 0x229D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D8Cu;
            // 0x229d90: 0xc64c0024  lwc1        $f12, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D94u; }
        if (ctx->pc != 0x229D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D94u; }
        if (ctx->pc != 0x229D94u) { return; }
    }
    ctx->pc = 0x229D94u;
label_229d94:
    // 0x229d94: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x229d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229d98: 0xc0a248c  jal         func_289230
    ctx->pc = 0x229D98u;
    SET_GPR_U32(ctx, 31, 0x229DA0u);
    ctx->pc = 0x229D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D98u;
            // 0x229d9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DA0u; }
        if (ctx->pc != 0x229DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DA0u; }
        if (ctx->pc != 0x229DA0u) { return; }
    }
    ctx->pc = 0x229DA0u;
label_229da0:
    // 0x229da0: 0x8f879390  lw          $a3, -0x6C70($gp)
    ctx->pc = 0x229da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939536)));
    // 0x229da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229da8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dac: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x229dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x229db0: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x229db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x229db4: 0xc0887f4  jal         func_221FD0
    ctx->pc = 0x229DB4u;
    SET_GPR_U32(ctx, 31, 0x229DBCu);
    ctx->pc = 0x229DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229DB4u;
            // 0x229db8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221FD0u;
    if (runtime->hasFunction(0x221FD0u)) {
        auto targetFn = runtime->lookupFunction(0x221FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DBCu; }
        if (ctx->pc != 0x229DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GenarateRandamLine__FPiiiPiii_0x221fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DBCu; }
        if (ctx->pc != 0x229DBCu) { return; }
    }
    ctx->pc = 0x229DBCu;
label_229dbc:
    // 0x229dbc: 0x0  nop
    ctx->pc = 0x229dbcu;
    // NOP
    // 0x229dc0: 0x8f859390  lw          $a1, -0x6C70($gp)
    ctx->pc = 0x229dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939536)));
    // 0x229dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dc8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x229dcc: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x229dd0: 0xc088870  jal         func_2221C0
    ctx->pc = 0x229DD0u;
    SET_GPR_U32(ctx, 31, 0x229DD8u);
    ctx->pc = 0x229DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229DD0u;
            // 0x229dd4: 0x27a801cc  addiu       $t0, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2221C0u;
    if (runtime->hasFunction(0x2221C0u)) {
        auto targetFn = runtime->lookupFunction(0x2221C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DD8u; }
        if (ctx->pc != 0x229DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRandamLine__FP11mgCDrawPrimPiiiPUc_0x2221c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DD8u; }
        if (ctx->pc != 0x229DD8u) { return; }
    }
    ctx->pc = 0x229DD8u;
label_229dd8:
    // 0x229dd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x229DD8u;
    {
        const bool branch_taken_0x229dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229dd8) {
            ctx->pc = 0x229DFCu;
            goto label_229dfc;
        }
    }
    ctx->pc = 0x229DE0u;
label_229de0:
    // 0x229de0: 0xdf829438  ld          $v0, -0x6BC8($gp)
    ctx->pc = 0x229de0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939704)));
    // 0x229de4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x229de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x229de8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x229de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dec: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x229decu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x229df0: 0xe7b501c0  swc1        $f21, 0x1C0($sp)
    ctx->pc = 0x229df0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x229df4: 0xc08264c  jal         func_209930
    ctx->pc = 0x229DF4u;
    SET_GPR_U32(ctx, 31, 0x229DFCu);
    ctx->pc = 0x229DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229DF4u;
            // 0x229df8: 0xe7b401c4  swc1        $f20, 0x1C4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209930u;
    if (runtime->hasFunction(0x209930u)) {
        auto targetFn = runtime->lookupFunction(0x209930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DFCu; }
        if (ctx->pc != 0x229DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventNetaMemoDraw__FPfRi_0x209930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DFCu; }
        if (ctx->pc != 0x229DFCu) { return; }
    }
    ctx->pc = 0x229DFCu;
label_229dfc:
    // 0x229dfc: 0x0  nop
    ctx->pc = 0x229dfcu;
    // NOP
    // 0x229e00: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x229e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x229e04: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x229e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x229e08: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x229e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x229e0c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x229e10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x229e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x229e14: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x229e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_229e18:
    // 0x229e18: 0x86840068  lh          $a0, 0x68($s4)
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x229e1c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x229e20: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x229e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x229e24: 0x1460fc46  bnez        $v1, . + 4 + (-0x3BA << 2)
    ctx->pc = 0x229E24u;
    {
        const bool branch_taken_0x229e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229e24) {
            ctx->pc = 0x228F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228f40;
        }
    }
    ctx->pc = 0x229E2Cu;
label_229e2c:
    // 0x229e2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x229e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229e30: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x229e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x229e34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x229e34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x229e38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x229e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229e3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x229e3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229e40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x229e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229e44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x229e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229e48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x229e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229e4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x229e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229e50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x229e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229e54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x229e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229e58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x229e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229e5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x229e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229e60: 0x3e00008  jr          $ra
    ctx->pc = 0x229E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229E60u;
            // 0x229e64: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229E68u;
}
