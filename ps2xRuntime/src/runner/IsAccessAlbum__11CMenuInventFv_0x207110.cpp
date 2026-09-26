#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsAccessAlbum__11CMenuInventFv
// Address: 0x207110 - 0x20849c
void IsAccessAlbum__11CMenuInventFv_0x207110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAccessAlbum__11CMenuInventFv_0x207110");
#endif

    switch (ctx->pc) {
        case 0x207154u: goto label_207154;
        case 0x207160u: goto label_207160;
        case 0x207180u: goto label_207180;
        case 0x207188u: goto label_207188;
        case 0x207330u: goto label_207330;
        case 0x207340u: goto label_207340;
        case 0x207364u: goto label_207364;
        case 0x207384u: goto label_207384;
        case 0x207394u: goto label_207394;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073c0u: goto label_2073c0;
        case 0x207418u: goto label_207418;
        case 0x207428u: goto label_207428;
        case 0x207438u: goto label_207438;
        case 0x207448u: goto label_207448;
        case 0x20745cu: goto label_20745c;
        case 0x207468u: goto label_207468;
        case 0x207478u: goto label_207478;
        case 0x207488u: goto label_207488;
        case 0x207490u: goto label_207490;
        case 0x20749cu: goto label_20749c;
        case 0x2074acu: goto label_2074ac;
        case 0x2074c4u: goto label_2074c4;
        case 0x2074e0u: goto label_2074e0;
        case 0x207524u: goto label_207524;
        case 0x207554u: goto label_207554;
        case 0x207570u: goto label_207570;
        case 0x207588u: goto label_207588;
        case 0x2075d4u: goto label_2075d4;
        case 0x2075dcu: goto label_2075dc;
        case 0x2075ecu: goto label_2075ec;
        case 0x2075f8u: goto label_2075f8;
        case 0x20760cu: goto label_20760c;
        case 0x207628u: goto label_207628;
        case 0x20764cu: goto label_20764c;
        case 0x20765cu: goto label_20765c;
        case 0x207664u: goto label_207664;
        case 0x2076b0u: goto label_2076b0;
        case 0x2076c8u: goto label_2076c8;
        case 0x2076f0u: goto label_2076f0;
        case 0x207700u: goto label_207700;
        case 0x20773cu: goto label_20773c;
        case 0x20777cu: goto label_20777c;
        case 0x20778cu: goto label_20778c;
        case 0x2077b0u: goto label_2077b0;
        case 0x2077f8u: goto label_2077f8;
        case 0x207810u: goto label_207810;
        case 0x207830u: goto label_207830;
        case 0x207840u: goto label_207840;
        case 0x20784cu: goto label_20784c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078e8u: goto label_2078e8;
        case 0x207914u: goto label_207914;
        case 0x20792cu: goto label_20792c;
        case 0x20794cu: goto label_20794c;
        case 0x207998u: goto label_207998;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079d4u: goto label_2079d4;
        case 0x2079e8u: goto label_2079e8;
        case 0x207a04u: goto label_207a04;
        case 0x207a18u: goto label_207a18;
        case 0x207a30u: goto label_207a30;
        case 0x207a38u: goto label_207a38;
        case 0x207a54u: goto label_207a54;
        case 0x207a80u: goto label_207a80;
        case 0x207a8cu: goto label_207a8c;
        case 0x207ae4u: goto label_207ae4;
        case 0x207afcu: goto label_207afc;
        case 0x207b08u: goto label_207b08;
        case 0x207b38u: goto label_207b38;
        case 0x207b84u: goto label_207b84;
        case 0x207b8cu: goto label_207b8c;
        case 0x207b98u: goto label_207b98;
        case 0x207bbcu: goto label_207bbc;
        case 0x207bccu: goto label_207bcc;
        case 0x207be4u: goto label_207be4;
        case 0x207bf4u: goto label_207bf4;
        case 0x207c04u: goto label_207c04;
        case 0x207c24u: goto label_207c24;
        case 0x207c38u: goto label_207c38;
        case 0x207c48u: goto label_207c48;
        case 0x207c68u: goto label_207c68;
        case 0x207cacu: goto label_207cac;
        case 0x207cbcu: goto label_207cbc;
        case 0x207cd4u: goto label_207cd4;
        case 0x207cdcu: goto label_207cdc;
        case 0x207cf8u: goto label_207cf8;
        case 0x207d24u: goto label_207d24;
        case 0x207d34u: goto label_207d34;
        case 0x207d50u: goto label_207d50;
        case 0x207d70u: goto label_207d70;
        case 0x207d7cu: goto label_207d7c;
        case 0x207da8u: goto label_207da8;
        case 0x207dccu: goto label_207dcc;
        case 0x207dd4u: goto label_207dd4;
        case 0x207decu: goto label_207dec;
        case 0x207e14u: goto label_207e14;
        case 0x207e3cu: goto label_207e3c;
        case 0x207e58u: goto label_207e58;
        case 0x207eb8u: goto label_207eb8;
        case 0x207ec4u: goto label_207ec4;
        case 0x207ed4u: goto label_207ed4;
        case 0x207ef4u: goto label_207ef4;
        case 0x207efcu: goto label_207efc;
        case 0x207f0cu: goto label_207f0c;
        case 0x207f18u: goto label_207f18;
        case 0x207f28u: goto label_207f28;
        case 0x207f54u: goto label_207f54;
        case 0x207f84u: goto label_207f84;
        case 0x207fb8u: goto label_207fb8;
        case 0x207fd8u: goto label_207fd8;
        case 0x207fe0u: goto label_207fe0;
        case 0x207ff0u: goto label_207ff0;
        case 0x207ffcu: goto label_207ffc;
        case 0x20800cu: goto label_20800c;
        case 0x208028u: goto label_208028;
        case 0x20804cu: goto label_20804c;
        case 0x20805cu: goto label_20805c;
        case 0x208064u: goto label_208064;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080e4u: goto label_2080e4;
        case 0x208124u: goto label_208124;
        case 0x208148u: goto label_208148;
        case 0x20817cu: goto label_20817c;
        case 0x208190u: goto label_208190;
        case 0x2081c4u: goto label_2081c4;
        case 0x2081d8u: goto label_2081d8;
        case 0x2081f0u: goto label_2081f0;
        case 0x208200u: goto label_208200;
        case 0x20823cu: goto label_20823c;
        case 0x208254u: goto label_208254;
        case 0x208264u: goto label_208264;
        case 0x20827cu: goto label_20827c;
        case 0x208288u: goto label_208288;
        case 0x20829cu: goto label_20829c;
        case 0x2082b8u: goto label_2082b8;
        case 0x2082ccu: goto label_2082cc;
        case 0x2082e8u: goto label_2082e8;
        case 0x208304u: goto label_208304;
        case 0x20830cu: goto label_20830c;
        case 0x208334u: goto label_208334;
        case 0x208344u: goto label_208344;
        case 0x20834cu: goto label_20834c;
        case 0x208354u: goto label_208354;
        case 0x20839cu: goto label_20839c;
        case 0x2083b4u: goto label_2083b4;
        case 0x2083ccu: goto label_2083cc;
        case 0x2083e4u: goto label_2083e4;
        case 0x2083fcu: goto label_2083fc;
        case 0x20841cu: goto label_20841c;
        case 0x208438u: goto label_208438;
        case 0x208450u: goto label_208450;
        case 0x20846cu: goto label_20846c;
        default: break;
    }

    ctx->pc = 0x207110u;

    // 0x207110: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x207110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x207114: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x207114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x207118: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x207118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20711c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x20711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x207120: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x207120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x207124: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x207124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x207128: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x207128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20712c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x207130: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x207134: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x207138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20713c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x207140: 0x8c32ca50  lw          $s2, -0x35B0($at)
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x207144: 0x124004c9  beqz        $s2, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x207144u;
    {
        const bool branch_taken_0x207144 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x207148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207144u;
            // 0x207148: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207144) {
            ctx->pc = 0x20846Cu;
            goto label_20846c;
        }
    }
    ctx->pc = 0x20714Cu;
    // 0x20714c: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x20714Cu;
    SET_GPR_U32(ctx, 31, 0x207154u);
    ctx->pc = 0x207150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20714Cu;
            // 0x207150: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207154u; }
        if (ctx->pc != 0x207154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207154u; }
        if (ctx->pc != 0x207154u) { return; }
    }
    ctx->pc = 0x207154u;
label_207154:
    // 0x207154: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x207154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x207158: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x207158u;
    SET_GPR_U32(ctx, 31, 0x207160u);
    ctx->pc = 0x20715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207158u;
            // 0x20715c: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207160u; }
        if (ctx->pc != 0x207160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207160u; }
        if (ctx->pc != 0x207160u) { return; }
    }
    ctx->pc = 0x207160u;
label_207160:
    // 0x207160: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207164: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x207164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207168: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x207168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x20716c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20716cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207170: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207170u;
    {
        const bool branch_taken_0x207170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207170u;
            // 0x207174: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207170) {
            ctx->pc = 0x2071B8u;
            goto label_2071b8;
        }
    }
    ctx->pc = 0x207178u;
    // 0x207178: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x207178u;
    SET_GPR_U32(ctx, 31, 0x207180u);
    ctx->pc = 0x2F1D20u;
    if (runtime->hasFunction(0x2F1D20u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207180u; }
        if (ctx->pc != 0x207180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFuncNo__18CMemoryCardManagerFv_0x2f1d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207180u; }
        if (ctx->pc != 0x207180u) { return; }
    }
    ctx->pc = 0x207180u;
label_207180:
    // 0x207180: 0xc0bc7f0  jal         func_2F1FC0
    ctx->pc = 0x207180u;
    SET_GPR_U32(ctx, 31, 0x207188u);
    ctx->pc = 0x207184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207180u;
            // 0x207184: 0x8f8490e0  lw          $a0, -0x6F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1FC0u;
    if (runtime->hasFunction(0x2F1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207188u; }
        if (ctx->pc != 0x207188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMemoryCardManagerFv_0x2f1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207188u; }
        if (ctx->pc != 0x207188u) { return; }
    }
    ctx->pc = 0x207188u;
label_207188:
    // 0x207188: 0x8f8590e0  lw          $a1, -0x6F20($gp)
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x20718c: 0x8ca404c8  lw          $a0, 0x4C8($a1)
    ctx->pc = 0x20718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1224)));
    // 0x207190: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207190u;
    {
        const bool branch_taken_0x207190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207190u;
            // 0x207194: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207190) {
            ctx->pc = 0x2071A4u;
            goto label_2071a4;
        }
    }
    ctx->pc = 0x207198u;
    // 0x207198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20719c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20719Cu;
    {
        const bool branch_taken_0x20719c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20719c) {
            ctx->pc = 0x2071B0u;
            goto label_2071b0;
        }
    }
    ctx->pc = 0x2071A4u;
label_2071a4:
    // 0x2071a4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2071a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2071a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2071a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2071ac: 0x24700d5c  addiu       $s0, $v1, 0xD5C
    ctx->pc = 0x2071acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3420));
label_2071b0:
    // 0x2071b0: 0x24a304d0  addiu       $v1, $a1, 0x4D0
    ctx->pc = 0x2071b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1232));
    // 0x2071b4: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x2071b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_2071b8:
    // 0x2071b8: 0x83839174  lb          $v1, -0x6E8C($gp)
    ctx->pc = 0x2071b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938996)));
    // 0x2071bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2071bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071c0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2071c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2071c4: 0x2416fffe  addiu       $s6, $zero, -0x2
    ctx->pc = 0x2071c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2071c8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2071c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2071cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2071ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071d0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2071d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2071d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2071d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071d8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2071d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2071dc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2071dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2071e0: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2071e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2071e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2071E4u;
    {
        const bool branch_taken_0x2071e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071E4u;
            // 0x2071e8: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071e4) {
            ctx->pc = 0x2071F8u;
            goto label_2071f8;
        }
    }
    ctx->pc = 0x2071ECu;
    // 0x2071ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2071ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2071f0: 0xa3809170  sb          $zero, -0x6E90($gp)
    ctx->pc = 0x2071f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938992), (uint8_t)GPR_U32(ctx, 0));
    // 0x2071f4: 0xa3839174  sb          $v1, -0x6E8C($gp)
    ctx->pc = 0x2071f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938996), (uint8_t)GPR_U32(ctx, 3));
label_2071f8:
    // 0x2071f8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2071f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2071fc: 0x240501f7  addiu       $a1, $zero, 0x1F7
    ctx->pc = 0x2071fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
    // 0x207200: 0x10650317  beq         $v1, $a1, . + 4 + (0x317 << 2)
    ctx->pc = 0x207200u;
    {
        const bool branch_taken_0x207200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x207204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207200u;
            // 0x207204: 0x240401f6  addiu       $a0, $zero, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207200) {
            ctx->pc = 0x207E60u;
            goto label_207e60;
        }
    }
    ctx->pc = 0x207208u;
    // 0x207208: 0x106402fd  beq         $v1, $a0, . + 4 + (0x2FD << 2)
    ctx->pc = 0x207208u;
    {
        const bool branch_taken_0x207208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207208u;
            // 0x20720c: 0x240401f5  addiu       $a0, $zero, 0x1F5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207208) {
            ctx->pc = 0x207E00u;
            goto label_207e00;
        }
    }
    ctx->pc = 0x207210u;
    // 0x207210: 0x106402e1  beq         $v1, $a0, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x207210u;
    {
        const bool branch_taken_0x207210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207210u;
            // 0x207214: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207210) {
            ctx->pc = 0x207D98u;
            goto label_207d98;
        }
    }
    ctx->pc = 0x207218u;
    // 0x207218: 0x106402c4  beq         $v1, $a0, . + 4 + (0x2C4 << 2)
    ctx->pc = 0x207218u;
    {
        const bool branch_taken_0x207218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207218u;
            // 0x20721c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207218) {
            ctx->pc = 0x207D2Cu;
            goto label_207d2c;
        }
    }
    ctx->pc = 0x207220u;
    // 0x207220: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x207224: 0x106502a3  beq         $v1, $a1, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x207224u;
    {
        const bool branch_taken_0x207224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x207228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207224u;
            // 0x207228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207224) {
            ctx->pc = 0x207CB4u;
            goto label_207cb4;
        }
    }
    ctx->pc = 0x20722Cu;
    // 0x20722c: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x20722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x207230: 0x10640297  beq         $v1, $a0, . + 4 + (0x297 << 2)
    ctx->pc = 0x207230u;
    {
        const bool branch_taken_0x207230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207230u;
            // 0x207234: 0x240400fa  addiu       $a0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207230) {
            ctx->pc = 0x207C90u;
            goto label_207c90;
        }
    }
    ctx->pc = 0x207238u;
    // 0x207238: 0x10640291  beq         $v1, $a0, . + 4 + (0x291 << 2)
    ctx->pc = 0x207238u;
    {
        const bool branch_taken_0x207238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207238u;
            // 0x20723c: 0x240400f1  addiu       $a0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207238) {
            ctx->pc = 0x207C80u;
            goto label_207c80;
        }
    }
    ctx->pc = 0x207240u;
    // 0x207240: 0x1064028b  beq         $v1, $a0, . + 4 + (0x28B << 2)
    ctx->pc = 0x207240u;
    {
        const bool branch_taken_0x207240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207240u;
            // 0x207244: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207240) {
            ctx->pc = 0x207C70u;
            goto label_207c70;
        }
    }
    ctx->pc = 0x207248u;
    // 0x207248: 0x10640224  beq         $v1, $a0, . + 4 + (0x224 << 2)
    ctx->pc = 0x207248u;
    {
        const bool branch_taken_0x207248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207248u;
            // 0x20724c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207248) {
            ctx->pc = 0x207ADCu;
            goto label_207adc;
        }
    }
    ctx->pc = 0x207250u;
    // 0x207250: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x207254: 0x10640208  beq         $v1, $a0, . + 4 + (0x208 << 2)
    ctx->pc = 0x207254u;
    {
        const bool branch_taken_0x207254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207254u;
            // 0x207258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207254) {
            ctx->pc = 0x207A78u;
            goto label_207a78;
        }
    }
    ctx->pc = 0x20725Cu;
    // 0x20725c: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x20725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x207260: 0x106401eb  beq         $v1, $a0, . + 4 + (0x1EB << 2)
    ctx->pc = 0x207260u;
    {
        const bool branch_taken_0x207260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207260u;
            // 0x207264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207260) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x207268u;
    // 0x207268: 0x240400ce  addiu       $a0, $zero, 0xCE
    ctx->pc = 0x207268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x20726c: 0x106401e1  beq         $v1, $a0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x20726Cu;
    {
        const bool branch_taken_0x20726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20726Cu;
            // 0x207270: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20726c) {
            ctx->pc = 0x2079F4u;
            goto label_2079f4;
        }
    }
    ctx->pc = 0x207274u;
    // 0x207274: 0x106401c3  beq         $v1, $a0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x207274u;
    {
        const bool branch_taken_0x207274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207274u;
            // 0x207278: 0x240400cb  addiu       $a0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207274) {
            ctx->pc = 0x207984u;
            goto label_207984;
        }
    }
    ctx->pc = 0x20727Cu;
    // 0x20727c: 0x106401af  beq         $v1, $a0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x20727Cu;
    {
        const bool branch_taken_0x20727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20727Cu;
            // 0x207280: 0x240400ca  addiu       $a0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20727c) {
            ctx->pc = 0x20793Cu;
            goto label_20793c;
        }
    }
    ctx->pc = 0x207284u;
    // 0x207284: 0x10640194  beq         $v1, $a0, . + 4 + (0x194 << 2)
    ctx->pc = 0x207284u;
    {
        const bool branch_taken_0x207284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207284u;
            // 0x207288: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207284) {
            ctx->pc = 0x2078D8u;
            goto label_2078d8;
        }
    }
    ctx->pc = 0x20728Cu;
    // 0x20728c: 0x1064016a  beq         $v1, $a0, . + 4 + (0x16A << 2)
    ctx->pc = 0x20728Cu;
    {
        const bool branch_taken_0x20728c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x207290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20728Cu;
            // 0x207290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20728c) {
            ctx->pc = 0x207838u;
            goto label_207838;
        }
    }
    ctx->pc = 0x207294u;
    // 0x207294: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x207294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x207298: 0x1064012a  beq         $v1, $a0, . + 4 + (0x12A << 2)
    ctx->pc = 0x207298u;
    {
        const bool branch_taken_0x207298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207298u;
            // 0x20729c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207298) {
            ctx->pc = 0x207744u;
            goto label_207744;
        }
    }
    ctx->pc = 0x2072A0u;
    // 0x2072a0: 0x10640122  beq         $v1, $a0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2072A0u;
    {
        const bool branch_taken_0x2072a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072A0u;
            // 0x2072a4: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072a0) {
            ctx->pc = 0x20772Cu;
            goto label_20772c;
        }
    }
    ctx->pc = 0x2072A8u;
    // 0x2072a8: 0x1064011c  beq         $v1, $a0, . + 4 + (0x11C << 2)
    ctx->pc = 0x2072A8u;
    {
        const bool branch_taken_0x2072a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072A8u;
            // 0x2072ac: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072a8) {
            ctx->pc = 0x20771Cu;
            goto label_20771c;
        }
    }
    ctx->pc = 0x2072B0u;
    // 0x2072b0: 0x1064010c  beq         $v1, $a0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2072B0u;
    {
        const bool branch_taken_0x2072b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072B0u;
            // 0x2072b4: 0x240400e7  addiu       $a0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072b0) {
            ctx->pc = 0x2076E4u;
            goto label_2076e4;
        }
    }
    ctx->pc = 0x2072B8u;
    // 0x2072b8: 0x106400ff  beq         $v1, $a0, . + 4 + (0xFF << 2)
    ctx->pc = 0x2072B8u;
    {
        const bool branch_taken_0x2072b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072B8u;
            // 0x2072bc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072b8) {
            ctx->pc = 0x2076B8u;
            goto label_2076b8;
        }
    }
    ctx->pc = 0x2072C0u;
    // 0x2072c0: 0x106400f5  beq         $v1, $a0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2072C0u;
    {
        const bool branch_taken_0x2072c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072C0u;
            // 0x2072c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072c0) {
            ctx->pc = 0x207698u;
            goto label_207698;
        }
    }
    ctx->pc = 0x2072C8u;
    // 0x2072c8: 0x106400db  beq         $v1, $a0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2072C8u;
    {
        const bool branch_taken_0x2072c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072C8u;
            // 0x2072cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072c8) {
            ctx->pc = 0x207638u;
            goto label_207638;
        }
    }
    ctx->pc = 0x2072D0u;
    // 0x2072d0: 0x106400a9  beq         $v1, $a0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2072D0u;
    {
        const bool branch_taken_0x2072d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072D0u;
            // 0x2072d4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072d0) {
            ctx->pc = 0x207578u;
            goto label_207578;
        }
    }
    ctx->pc = 0x2072D8u;
    // 0x2072d8: 0x1064007d  beq         $v1, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2072D8u;
    {
        const bool branch_taken_0x2072d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072D8u;
            // 0x2072dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072d8) {
            ctx->pc = 0x2074D0u;
            goto label_2074d0;
        }
    }
    ctx->pc = 0x2072E0u;
    // 0x2072e0: 0x10640047  beq         $v1, $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2072E0u;
    {
        const bool branch_taken_0x2072e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2072E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072E0u;
            // 0x2072e4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072e0) {
            ctx->pc = 0x207400u;
            goto label_207400;
        }
    }
    ctx->pc = 0x2072E8u;
    // 0x2072e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2072E8u;
    {
        const bool branch_taken_0x2072e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2072e8) {
            ctx->pc = 0x2072F8u;
            goto label_2072f8;
        }
    }
    ctx->pc = 0x2072F0u;
    // 0x2072f0: 0x100002e0  b           . + 4 + (0x2E0 << 2)
    ctx->pc = 0x2072F0u;
    {
        const bool branch_taken_0x2072f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2072F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072F0u;
            // 0x2072f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072f0) {
            ctx->pc = 0x207E74u;
            goto label_207e74;
        }
    }
    ctx->pc = 0x2072F8u;
label_2072f8:
    // 0x2072f8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2072fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2072fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x207300: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207300u;
    {
        const bool branch_taken_0x207300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207300u;
            // 0x207304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207300) {
            ctx->pc = 0x20730Cu;
            goto label_20730c;
        }
    }
    ctx->pc = 0x207308u;
    // 0x207308: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20730c:
    // 0x20730c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x20730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x207310: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x207310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x207314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207314u;
    {
        const bool branch_taken_0x207314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207314u;
            // 0x207318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207314) {
            ctx->pc = 0x207320u;
            goto label_207320;
        }
    }
    ctx->pc = 0x20731Cu;
    // 0x20731c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_207320:
    // 0x207320: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x207320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207324: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x207324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x207328: 0xc0875e0  jal         func_21D780
    ctx->pc = 0x207328u;
    SET_GPR_U32(ctx, 31, 0x207330u);
    ctx->pc = 0x20732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207328u;
            // 0x20732c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D780u;
    if (runtime->hasFunction(0x21D780u)) {
        auto targetFn = runtime->lookupFunction(0x21D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207330u; }
        if (ctx->pc != 0x207330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor__7CDC2MesFiiii_0x21d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207330u; }
        if (ctx->pc != 0x207330u) { return; }
    }
    ctx->pc = 0x207330u;
label_207330:
    // 0x207330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207330u;
    {
        const bool branch_taken_0x207330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207330u;
            // 0x207334: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207330) {
            ctx->pc = 0x207344u;
            goto label_207344;
        }
    }
    ctx->pc = 0x207338u;
    // 0x207338: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207338u;
    SET_GPR_U32(ctx, 31, 0x207340u);
    ctx->pc = 0x20733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207338u;
            // 0x20733c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207340u; }
        if (ctx->pc != 0x207340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207340u; }
        if (ctx->pc != 0x207340u) { return; }
    }
    ctx->pc = 0x207340u;
label_207340:
    // 0x207340: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207344:
    // 0x207344: 0x1263002a  beq         $s3, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x207344u;
    {
        const bool branch_taken_0x207344 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x207348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207344u;
            // 0x207348: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207344) {
            ctx->pc = 0x2073F0u;
            goto label_2073f0;
        }
    }
    ctx->pc = 0x20734Cu;
    // 0x20734c: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20734Cu;
    {
        const bool branch_taken_0x20734c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x207350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20734Cu;
            // 0x207350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20734c) {
            ctx->pc = 0x20735Cu;
            goto label_20735c;
        }
    }
    ctx->pc = 0x207354u;
    // 0x207354: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x207354u;
    {
        const bool branch_taken_0x207354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207354) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20735Cu;
label_20735c:
    // 0x20735c: 0xc087690  jal         func_21DA40
    ctx->pc = 0x20735Cu;
    SET_GPR_U32(ctx, 31, 0x207364u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207364u; }
        if (ctx->pc != 0x207364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207364u; }
        if (ctx->pc != 0x207364u) { return; }
    }
    ctx->pc = 0x207364u;
label_207364:
    // 0x207364: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x207368: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20736c: 0xa3829170  sb          $v0, -0x6E90($gp)
    ctx->pc = 0x20736cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938992), (uint8_t)GPR_U32(ctx, 2));
    // 0x207370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207374: 0xa2260634  sb          $a2, 0x634($s1)
    ctx->pc = 0x207374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1588), (uint8_t)GPR_U32(ctx, 6));
    // 0x207378: 0x8e240f10  lw          $a0, 0xF10($s1)
    ctx->pc = 0x207378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3856)));
    // 0x20737c: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x20737Cu;
    SET_GPR_U32(ctx, 31, 0x207384u);
    ctx->pc = 0x207380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20737Cu;
            // 0x207380: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207384u; }
        if (ctx->pc != 0x207384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207384u; }
        if (ctx->pc != 0x207384u) { return; }
    }
    ctx->pc = 0x207384u;
label_207384:
    // 0x207384: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20738c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20738Cu;
    SET_GPR_U32(ctx, 31, 0x207394u);
    ctx->pc = 0x207390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20738Cu;
            // 0x207390: 0x24a599e0  addiu       $a1, $a1, -0x6620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207394u; }
        if (ctx->pc != 0x207394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207394u; }
        if (ctx->pc != 0x207394u) { return; }
    }
    ctx->pc = 0x207394u;
label_207394:
    // 0x207394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207398: 0xc080708  jal         func_201C20
    ctx->pc = 0x207398u;
    SET_GPR_U32(ctx, 31, 0x2073A0u);
    ctx->pc = 0x20739Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207398u;
            // 0x20739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    if (runtime->hasFunction(0x201C20u)) {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073A0u; }
        if (ctx->pc != 0x2073A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelNetaCircle__11CMenuInventFi_0x201c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073A0u; }
        if (ctx->pc != 0x2073A0u) { return; }
    }
    ctx->pc = 0x2073A0u;
label_2073a0:
    // 0x2073a0: 0x0  nop
    ctx->pc = 0x2073a0u;
    // NOP
    // 0x2073a4: 0x0  nop
    ctx->pc = 0x2073a4u;
    // NOP
    // 0x2073a8: 0x0  nop
    ctx->pc = 0x2073a8u;
    // NOP
    // 0x2073ac: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2073ACu;
    {
        const bool branch_taken_0x2073ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2073ac) {
            ctx->pc = 0x207394u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207394;
        }
    }
    ctx->pc = 0x2073B4u;
    // 0x2073b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2073b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073b8: 0xc080384  jal         func_200E10
    ctx->pc = 0x2073B8u;
    SET_GPR_U32(ctx, 31, 0x2073C0u);
    ctx->pc = 0x2073BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2073B8u;
            // 0x2073bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E10u;
    if (runtime->hasFunction(0x200E10u)) {
        auto targetFn = runtime->lookupFunction(0x200E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073C0u; }
        if (ctx->pc != 0x2073C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoNetaBoardToAlbum__11CMenuInventFi_0x200e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073C0u; }
        if (ctx->pc != 0x2073C0u) { return; }
    }
    ctx->pc = 0x2073C0u;
label_2073c0:
    // 0x2073c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2073c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2073c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2073c8: 0xac209734  sw          $zero, -0x68CC($at)
    ctx->pc = 0x2073c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940468), GPR_U32(ctx, 0));
    // 0x2073cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2073ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2073d0: 0xac20972c  sw          $zero, -0x68D4($at)
    ctx->pc = 0x2073d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940460), GPR_U32(ctx, 0));
    // 0x2073d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2073d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2073d8: 0xac209764  sw          $zero, -0x689C($at)
    ctx->pc = 0x2073d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940516), GPR_U32(ctx, 0));
    // 0x2073dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2073dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2073e0: 0xac20975c  sw          $zero, -0x68A4($at)
    ctx->pc = 0x2073e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940508), GPR_U32(ctx, 0));
    // 0x2073e4: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x2073e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2073e8: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x2073E8u;
    {
        const bool branch_taken_0x2073e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2073E8u;
            // 0x2073ec: 0xa223024d  sb          $v1, 0x24D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073e8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2073F0u;
label_2073f0:
    // 0x2073f0: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x2073f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x2073f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2073f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2073f8: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x2073F8u;
    {
        const bool branch_taken_0x2073f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2073F8u;
            // 0x2073fc: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073f8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207400u;
label_207400:
    // 0x207400: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x207400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x207404: 0xac209764  sw          $zero, -0x689C($at)
    ctx->pc = 0x207404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940516), GPR_U32(ctx, 0));
    // 0x207408: 0x24849740  addiu       $a0, $a0, -0x68C0
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
    // 0x20740c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20740cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x207410: 0xc04e780  jal         func_139E00
    ctx->pc = 0x207410u;
    SET_GPR_U32(ctx, 31, 0x207418u);
    ctx->pc = 0x207414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207410u;
            // 0x207414: 0xac20975c  sw          $zero, -0x68A4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207418u; }
        if (ctx->pc != 0x207418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207418u; }
        if (ctx->pc != 0x207418u) { return; }
    }
    ctx->pc = 0x207418u;
label_207418:
    // 0x207418: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x207418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x20741c: 0x240564cd  addiu       $a1, $zero, 0x64CD
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25805));
    // 0x207420: 0xc04e748  jal         func_139D20
    ctx->pc = 0x207420u;
    SET_GPR_U32(ctx, 31, 0x207428u);
    ctx->pc = 0x207424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207420u;
            // 0x207424: 0x24849740  addiu       $a0, $a0, -0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207428u; }
        if (ctx->pc != 0x207428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207428u; }
        if (ctx->pc != 0x207428u) { return; }
    }
    ctx->pc = 0x207428u;
label_207428:
    // 0x207428: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x207428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x20742c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20742cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207430: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x207430u;
    SET_GPR_U32(ctx, 31, 0x207438u);
    ctx->pc = 0x207434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207430u;
            // 0x207434: 0x34644cb0  ori         $a0, $v1, 0x4CB0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19632);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207438u; }
        if (ctx->pc != 0x207438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207438u; }
        if (ctx->pc != 0x207438u) { return; }
    }
    ctx->pc = 0x207438u;
label_207438:
    // 0x207438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207438u;
    {
        const bool branch_taken_0x207438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207438u;
            // 0x20743c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207438) {
            ctx->pc = 0x207448u;
            goto label_207448;
        }
    }
    ctx->pc = 0x207440u;
    // 0x207440: 0xc07f9d4  jal         func_1FE750
    ctx->pc = 0x207440u;
    SET_GPR_U32(ctx, 31, 0x207448u);
    ctx->pc = 0x207444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207440u;
            // 0x207444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE750u;
    if (runtime->hasFunction(0x1FE750u)) {
        auto targetFn = runtime->lookupFunction(0x1FE750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207448u; }
        if (ctx->pc != 0x207448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CDC2AlbumDataFv_0x1fe750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207448u; }
        if (ctx->pc != 0x207448u) { return; }
    }
    ctx->pc = 0x207448u;
label_207448:
    // 0x207448: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x207448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x20744c: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x20744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x207450: 0x24849740  addiu       $a0, $a0, -0x68C0
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
    // 0x207454: 0xc04e748  jal         func_139D20
    ctx->pc = 0x207454u;
    SET_GPR_U32(ctx, 31, 0x20745Cu);
    ctx->pc = 0x207458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207454u;
            // 0x207458: 0xaf9290d8  sw          $s2, -0x6F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938840), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20745Cu; }
        if (ctx->pc != 0x20745Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20745Cu; }
        if (ctx->pc != 0x20745Cu) { return; }
    }
    ctx->pc = 0x20745Cu;
label_20745c:
    // 0x20745c: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x207460: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x207460u;
    SET_GPR_U32(ctx, 31, 0x207468u);
    ctx->pc = 0x207464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207460u;
            // 0x207464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207468u; }
        if (ctx->pc != 0x207468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207468u; }
        if (ctx->pc != 0x207468u) { return; }
    }
    ctx->pc = 0x207468u;
label_207468:
    // 0x207468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207468u;
    {
        const bool branch_taken_0x207468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207468u;
            // 0x20746c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207468) {
            ctx->pc = 0x207478u;
            goto label_207478;
        }
    }
    ctx->pc = 0x207470u;
    // 0x207470: 0xc0bc598  jal         func_2F1660
    ctx->pc = 0x207470u;
    SET_GPR_U32(ctx, 31, 0x207478u);
    ctx->pc = 0x2F1660u;
    if (runtime->hasFunction(0x2F1660u)) {
        auto targetFn = runtime->lookupFunction(0x2F1660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207478u; }
        if (ctx->pc != 0x207478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CMemoryCardManagerFv_0x2f1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207478u; }
        if (ctx->pc != 0x207478u) { return; }
    }
    ctx->pc = 0x207478u;
label_207478:
    // 0x207478: 0xaf8290e0  sw          $v0, -0x6F20($gp)
    ctx->pc = 0x207478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 2));
    // 0x20747c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207480: 0xc0bc5a4  jal         func_2F1690
    ctx->pc = 0x207480u;
    SET_GPR_U32(ctx, 31, 0x207488u);
    ctx->pc = 0x207484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207480u;
            // 0x207484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1690u;
    if (runtime->hasFunction(0x2F1690u)) {
        auto targetFn = runtime->lookupFunction(0x2F1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207488u; }
        if (ctx->pc != 0x207488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207488u; }
        if (ctx->pc != 0x207488u) { return; }
    }
    ctx->pc = 0x207488u;
label_207488:
    // 0x207488: 0xc0bc650  jal         func_2F1940
    ctx->pc = 0x207488u;
    SET_GPR_U32(ctx, 31, 0x207490u);
    ctx->pc = 0x20748Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207488u;
            // 0x20748c: 0x8f8490e0  lw          $a0, -0x6F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1940u;
    if (runtime->hasFunction(0x2F1940u)) {
        auto targetFn = runtime->lookupFunction(0x2F1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207490u; }
        if (ctx->pc != 0x207490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitForMC__18CMemoryCardManagerFv_0x2f1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207490u; }
        if (ctx->pc != 0x207490u) { return; }
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207494: 0xc0bc66c  jal         func_2F19B0
    ctx->pc = 0x207494u;
    SET_GPR_U32(ctx, 31, 0x20749Cu);
    ctx->pc = 0x207498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207494u;
            // 0x207498: 0x8f8590d8  lw          $a1, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19B0u;
    if (runtime->hasFunction(0x2F19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20749Cu; }
        if (ctx->pc != 0x20749Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_Album__18CMemoryCardManagerFPc_0x2f19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20749Cu; }
        if (ctx->pc != 0x20749Cu) { return; }
    }
    ctx->pc = 0x20749Cu;
label_20749c:
    // 0x20749c: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x20749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2074a0: 0x262501d4  addiu       $a1, $s1, 0x1D4
    ctx->pc = 0x2074a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
    // 0x2074a4: 0xc0bc680  jal         func_2F1A00
    ctx->pc = 0x2074A4u;
    SET_GPR_U32(ctx, 31, 0x2074ACu);
    ctx->pc = 0x2074A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2074A4u;
            // 0x2074a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A00u;
    if (runtime->hasFunction(0x2F1A00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074ACu; }
        if (ctx->pc != 0x2074ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIconData__18CMemoryCardManagerFP12MC_ICON_DATAi_0x2f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074ACu; }
        if (ctx->pc != 0x2074ACu) { return; }
    }
    ctx->pc = 0x2074ACu;
label_2074ac:
    // 0x2074ac: 0x83839170  lb          $v1, -0x6E90($gp)
    ctx->pc = 0x2074acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x2074b0: 0x8f8290e0  lw          $v0, -0x6F20($gp)
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2074b4: 0xac4304c8  sw          $v1, 0x4C8($v0)
    ctx->pc = 0x2074b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 3));
    // 0x2074b8: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x2074b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2074bc: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2074BCu;
    SET_GPR_U32(ctx, 31, 0x2074C4u);
    ctx->pc = 0x2074C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2074BCu;
            // 0x2074c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074C4u; }
        if (ctx->pc != 0x2074C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074C4u; }
        if (ctx->pc != 0x2074C4u) { return; }
    }
    ctx->pc = 0x2074C4u;
label_2074c4:
    // 0x2074c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2074c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2074c8: 0x10000269  b           . + 4 + (0x269 << 2)
    ctx->pc = 0x2074C8u;
    {
        const bool branch_taken_0x2074c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074C8u;
            // 0x2074cc: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074c8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2074D0u;
label_2074d0:
    // 0x2074d0: 0x12800267  beqz        $s4, . + 4 + (0x267 << 2)
    ctx->pc = 0x2074D0u;
    {
        const bool branch_taken_0x2074d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074D0u;
            // 0x2074d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074d0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2074D8u;
    // 0x2074d8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2074D8u;
    SET_GPR_U32(ctx, 31, 0x2074E0u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074E0u; }
        if (ctx->pc != 0x2074E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074E0u; }
        if (ctx->pc != 0x2074E0u) { return; }
    }
    ctx->pc = 0x2074E0u;
label_2074e0:
    // 0x2074e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2074E0u;
    {
        const bool branch_taken_0x2074e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074E0u;
            // 0x2074e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074e0) {
            ctx->pc = 0x2074F0u;
            goto label_2074f0;
        }
    }
    ctx->pc = 0x2074E8u;
    // 0x2074e8: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x2074E8u;
    {
        const bool branch_taken_0x2074e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074E8u;
            // 0x2074ec: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074e8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2074F0u;
label_2074f0:
    // 0x2074f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2074f4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2074F4u;
    {
        const bool branch_taken_0x2074f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2074f4) {
            ctx->pc = 0x207534u;
            goto label_207534;
        }
    }
    ctx->pc = 0x2074FCu;
    // 0x2074fc: 0x8e240d7c  lw          $a0, 0xD7C($s1)
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x207500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207504: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x207504u;
    {
        const bool branch_taken_0x207504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x207504) {
            ctx->pc = 0x20752Cu;
            goto label_20752c;
        }
    }
    ctx->pc = 0x20750Cu;
    // 0x20750c: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x207510: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207518: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x20751c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20751Cu;
    SET_GPR_U32(ctx, 31, 0x207524u);
    ctx->pc = 0x207520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20751Cu;
            // 0x207520: 0x24a599f0  addiu       $a1, $a1, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207524u; }
        if (ctx->pc != 0x207524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207524u; }
        if (ctx->pc != 0x207524u) { return; }
    }
    ctx->pc = 0x207524u;
label_207524:
    // 0x207524: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x207524u;
    {
        const bool branch_taken_0x207524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207524) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20752Cu;
label_20752c:
    // 0x20752c: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x20752Cu;
    {
        const bool branch_taken_0x20752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20752Cu;
            // 0x207530: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20752c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207534u;
label_207534:
    // 0x207534: 0x8e220d7c  lw          $v0, 0xD7C($s1)
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x207538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207538u;
    {
        const bool branch_taken_0x207538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20753Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207538u;
            // 0x20753c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207538) {
            ctx->pc = 0x20755Cu;
            goto label_20755c;
        }
    }
    ctx->pc = 0x207540u;
    // 0x207540: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207544: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207544u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207548: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x20754c: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x20754Cu;
    SET_GPR_U32(ctx, 31, 0x207554u);
    ctx->pc = 0x207550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20754Cu;
            // 0x207550: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207554u; }
        if (ctx->pc != 0x207554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207554u; }
        if (ctx->pc != 0x207554u) { return; }
    }
    ctx->pc = 0x207554u;
label_207554:
    // 0x207554: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x207554u;
    {
        const bool branch_taken_0x207554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207554) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20755Cu;
label_20755c:
    // 0x20755c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20755cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207564: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207568: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207568u;
    SET_GPR_U32(ctx, 31, 0x207570u);
    ctx->pc = 0x20756Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207568u;
            // 0x20756c: 0x24a59a00  addiu       $a1, $a1, -0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207570u; }
        if (ctx->pc != 0x207570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207570u; }
        if (ctx->pc != 0x207570u) { return; }
    }
    ctx->pc = 0x207570u;
label_207570:
    // 0x207570: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x207570u;
    {
        const bool branch_taken_0x207570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207570) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207578u;
label_207578:
    // 0x207578: 0x1280023d  beqz        $s4, . + 4 + (0x23D << 2)
    ctx->pc = 0x207578u;
    {
        const bool branch_taken_0x207578 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207578u;
            // 0x20757c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207578) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207580u;
    // 0x207580: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207580u;
    SET_GPR_U32(ctx, 31, 0x207588u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207588u; }
        if (ctx->pc != 0x207588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207588u; }
        if (ctx->pc != 0x207588u) { return; }
    }
    ctx->pc = 0x207588u;
label_207588:
    // 0x207588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207588u;
    {
        const bool branch_taken_0x207588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207588) {
            ctx->pc = 0x207598u;
            goto label_207598;
        }
    }
    ctx->pc = 0x207590u;
    // 0x207590: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x207590u;
    {
        const bool branch_taken_0x207590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207590u;
            // 0x207594: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207590) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207598u;
label_207598:
    // 0x207598: 0x8f8390e0  lw          $v1, -0x6F20($gp)
    ctx->pc = 0x207598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x20759c: 0x8c6310e0  lw          $v1, 0x10E0($v1)
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
    // 0x2075a0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2075A0u;
    {
        const bool branch_taken_0x2075a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075a0) {
            ctx->pc = 0x207630u;
            goto label_207630;
        }
    }
    ctx->pc = 0x2075A8u;
    // 0x2075a8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2075ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2075acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2075b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2075B0u;
    {
        const bool branch_taken_0x2075b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075B0u;
            // 0x2075b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075b0) {
            ctx->pc = 0x2075C0u;
            goto label_2075c0;
        }
    }
    ctx->pc = 0x2075B8u;
    // 0x2075b8: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x2075B8u;
    {
        const bool branch_taken_0x2075b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075B8u;
            // 0x2075bc: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075b8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2075C0u;
label_2075c0:
    // 0x2075c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2075c4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2075c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2075c8: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2075cc: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2075CCu;
    SET_GPR_U32(ctx, 31, 0x2075D4u);
    ctx->pc = 0x2075D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2075CCu;
            // 0x2075d0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075D4u; }
        if (ctx->pc != 0x2075D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075D4u; }
        if (ctx->pc != 0x2075D4u) { return; }
    }
    ctx->pc = 0x2075D4u;
label_2075d4:
    // 0x2075d4: 0xc088914  jal         func_222450
    ctx->pc = 0x2075D4u;
    SET_GPR_U32(ctx, 31, 0x2075DCu);
    ctx->pc = 0x222450u;
    if (runtime->hasFunction(0x222450u)) {
        auto targetFn = runtime->lookupFunction(0x222450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075DCu; }
        if (ctx->pc != 0x2075DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuDlTexture__Fv_0x222450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075DCu; }
        if (ctx->pc != 0x2075DCu) { return; }
    }
    ctx->pc = 0x2075DCu;
label_2075dc:
    // 0x2075dc: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x2075dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2075e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2075e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e4: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2075E4u;
    SET_GPR_U32(ctx, 31, 0x2075ECu);
    ctx->pc = 0x2075E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2075E4u;
            // 0x2075e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075ECu; }
        if (ctx->pc != 0x2075ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075ECu; }
        if (ctx->pc != 0x2075ECu) { return; }
    }
    ctx->pc = 0x2075ECu;
label_2075ec:
    // 0x2075ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2075ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075f0: 0xc08891c  jal         func_222470
    ctx->pc = 0x2075F0u;
    SET_GPR_U32(ctx, 31, 0x2075F8u);
    ctx->pc = 0x2075F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2075F0u;
            // 0x2075f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075F8u; }
        if (ctx->pc != 0x2075F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2075F8u; }
        if (ctx->pc != 0x2075F8u) { return; }
    }
    ctx->pc = 0x2075F8u;
label_2075f8:
    // 0x2075f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2075fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2075fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207600: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x207604: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207604u;
    SET_GPR_U32(ctx, 31, 0x20760Cu);
    ctx->pc = 0x207608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207604u;
            // 0x207608: 0xae200d78  sw          $zero, 0xD78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20760Cu; }
        if (ctx->pc != 0x20760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20760Cu; }
        if (ctx->pc != 0x20760Cu) { return; }
    }
    ctx->pc = 0x20760Cu;
label_20760c:
    // 0x20760c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x207610: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x207614: 0x10800216  beqz        $a0, . + 4 + (0x216 << 2)
    ctx->pc = 0x207614u;
    {
        const bool branch_taken_0x207614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207614) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20761Cu;
    // 0x20761c: 0x83829170  lb          $v0, -0x6E90($gp)
    ctx->pc = 0x20761cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x207620: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x207620u;
    SET_GPR_U32(ctx, 31, 0x207628u);
    ctx->pc = 0x207624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207620u;
            // 0x207624: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207628u; }
        if (ctx->pc != 0x207628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207628u; }
        if (ctx->pc != 0x207628u) { return; }
    }
    ctx->pc = 0x207628u;
label_207628:
    // 0x207628: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x207628u;
    {
        const bool branch_taken_0x207628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207628) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207630u;
label_207630:
    // 0x207630: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x207630u;
    {
        const bool branch_taken_0x207630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207630u;
            // 0x207634: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207630) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207638u;
label_207638:
    // 0x207638: 0x8f8390e0  lw          $v1, -0x6F20($gp)
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x20763c: 0x8e220d78  lw          $v0, 0xD78($s1)
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
    // 0x207640: 0x8c630914  lw          $v1, 0x914($v1)
    ctx->pc = 0x207640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2324)));
    // 0x207644: 0xc088930  jal         func_2224C0
    ctx->pc = 0x207644u;
    SET_GPR_U32(ctx, 31, 0x20764Cu);
    ctx->pc = 0x207648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207644u;
            // 0x207648: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20764Cu; }
        if (ctx->pc != 0x20764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20764Cu; }
        if (ctx->pc != 0x20764Cu) { return; }
    }
    ctx->pc = 0x20764Cu;
label_20764c:
    // 0x20764c: 0x12800208  beqz        $s4, . + 4 + (0x208 << 2)
    ctx->pc = 0x20764Cu;
    {
        const bool branch_taken_0x20764c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x207650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20764Cu;
            // 0x207650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20764c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207654u;
    // 0x207654: 0xc08891c  jal         func_222470
    ctx->pc = 0x207654u;
    SET_GPR_U32(ctx, 31, 0x20765Cu);
    ctx->pc = 0x207658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207654u;
            // 0x207658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20765Cu; }
        if (ctx->pc != 0x20765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20765Cu; }
        if (ctx->pc != 0x20765Cu) { return; }
    }
    ctx->pc = 0x20765Cu;
label_20765c:
    // 0x20765c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x20765Cu;
    SET_GPR_U32(ctx, 31, 0x207664u);
    ctx->pc = 0x207660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20765Cu;
            // 0x207660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207664u; }
        if (ctx->pc != 0x207664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207664u; }
        if (ctx->pc != 0x207664u) { return; }
    }
    ctx->pc = 0x207664u;
label_207664:
    // 0x207664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207664u;
    {
        const bool branch_taken_0x207664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207664u;
            // 0x207668: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207664) {
            ctx->pc = 0x207674u;
            goto label_207674;
        }
    }
    ctx->pc = 0x20766Cu;
    // 0x20766c: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x20766Cu;
    {
        const bool branch_taken_0x20766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20766Cu;
            // 0x207670: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20766c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207674u;
label_207674:
    // 0x207674: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x207678: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20767c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207680: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207680u;
    {
        const bool branch_taken_0x207680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x207684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207680u;
            // 0x207684: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207680) {
            ctx->pc = 0x207690u;
            goto label_207690;
        }
    }
    ctx->pc = 0x207688u;
    // 0x207688: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x207688u;
    {
        const bool branch_taken_0x207688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207688u;
            // 0x20768c: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207688) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207690u;
label_207690:
    // 0x207690: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x207690u;
    {
        const bool branch_taken_0x207690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207690u;
            // 0x207694: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207690) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207698u;
label_207698:
    // 0x207698: 0x126001f5  beqz        $s3, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x207698u;
    {
        const bool branch_taken_0x207698 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x207698) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2076A0u;
    // 0x2076a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2076a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2076a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076a8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2076A8u;
    SET_GPR_U32(ctx, 31, 0x2076B0u);
    ctx->pc = 0x2076ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2076A8u;
            // 0x2076ac: 0xa2370eb6  sb          $s7, 0xEB6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3766), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076B0u; }
        if (ctx->pc != 0x2076B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076B0u; }
        if (ctx->pc != 0x2076B0u) { return; }
    }
    ctx->pc = 0x2076B0u;
label_2076b0:
    // 0x2076b0: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x2076B0u;
    {
        const bool branch_taken_0x2076b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2076b0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2076B8u;
label_2076b8:
    // 0x2076b8: 0x128001ed  beqz        $s4, . + 4 + (0x1ED << 2)
    ctx->pc = 0x2076B8u;
    {
        const bool branch_taken_0x2076b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076B8u;
            // 0x2076bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076b8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2076C0u;
    // 0x2076c0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2076C0u;
    SET_GPR_U32(ctx, 31, 0x2076C8u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076C8u; }
        if (ctx->pc != 0x2076C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076C8u; }
        if (ctx->pc != 0x2076C8u) { return; }
    }
    ctx->pc = 0x2076C8u;
label_2076c8:
    // 0x2076c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2076C8u;
    {
        const bool branch_taken_0x2076c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076C8u;
            // 0x2076cc: 0x240300e8  addiu       $v1, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076c8) {
            ctx->pc = 0x2076D8u;
            goto label_2076d8;
        }
    }
    ctx->pc = 0x2076D0u;
    // 0x2076d0: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x2076D0u;
    {
        const bool branch_taken_0x2076d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076D0u;
            // 0x2076d4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076d0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2076D8u;
label_2076d8:
    // 0x2076d8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2076d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076dc: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2076DCu;
    {
        const bool branch_taken_0x2076dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076DCu;
            // 0x2076e0: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076dc) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2076E4u;
label_2076e4:
    // 0x2076e4: 0x8f8290e0  lw          $v0, -0x6F20($gp)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2076e8: 0xc088930  jal         func_2224C0
    ctx->pc = 0x2076E8u;
    SET_GPR_U32(ctx, 31, 0x2076F0u);
    ctx->pc = 0x2076ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2076E8u;
            // 0x2076ec: 0x8c440914  lw          $a0, 0x914($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076F0u; }
        if (ctx->pc != 0x2076F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076F0u; }
        if (ctx->pc != 0x2076F0u) { return; }
    }
    ctx->pc = 0x2076F0u;
label_2076f0:
    // 0x2076f0: 0x128001df  beqz        $s4, . + 4 + (0x1DF << 2)
    ctx->pc = 0x2076F0u;
    {
        const bool branch_taken_0x2076f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076F0u;
            // 0x2076f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076f0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2076F8u;
    // 0x2076f8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2076F8u;
    SET_GPR_U32(ctx, 31, 0x207700u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207700u; }
        if (ctx->pc != 0x207700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207700u; }
        if (ctx->pc != 0x207700u) { return; }
    }
    ctx->pc = 0x207700u;
label_207700:
    // 0x207700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207700u;
    {
        const bool branch_taken_0x207700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207700u;
            // 0x207704: 0x240300cd  addiu       $v1, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207700) {
            ctx->pc = 0x207710u;
            goto label_207710;
        }
    }
    ctx->pc = 0x207708u;
    // 0x207708: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x207708u;
    {
        const bool branch_taken_0x207708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207708u;
            // 0x20770c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207708) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207710u;
label_207710:
    // 0x207710: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207714: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x207714u;
    {
        const bool branch_taken_0x207714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207714u;
            // 0x207718: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207714) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20771Cu;
label_20771c:
    // 0x20771c: 0x126001d4  beqz        $s3, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x20771Cu;
    {
        const bool branch_taken_0x20771c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x20771c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207724u;
    // 0x207724: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x207724u;
    {
        const bool branch_taken_0x207724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207724u;
            // 0x207728: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207724) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20772Cu;
label_20772c:
    // 0x20772c: 0x126001d0  beqz        $s3, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x20772Cu;
    {
        const bool branch_taken_0x20772c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x207730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20772Cu;
            // 0x207730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20772c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207734u;
    // 0x207734: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207734u;
    SET_GPR_U32(ctx, 31, 0x20773Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20773Cu; }
        if (ctx->pc != 0x20773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20773Cu; }
        if (ctx->pc != 0x20773Cu) { return; }
    }
    ctx->pc = 0x20773Cu;
label_20773c:
    // 0x20773c: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x20773Cu;
    {
        const bool branch_taken_0x20773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20773Cu;
            // 0x207740: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20773c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207744u;
label_207744:
    // 0x207744: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x207748: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x207748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20774c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20774Cu;
    {
        const bool branch_taken_0x20774c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20774Cu;
            // 0x207750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20774c) {
            ctx->pc = 0x207758u;
            goto label_207758;
        }
    }
    ctx->pc = 0x207754u;
    // 0x207754: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x207754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_207758:
    // 0x207758: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x20775c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x207760: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207760u;
    {
        const bool branch_taken_0x207760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207760u;
            // 0x207764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207760) {
            ctx->pc = 0x20776Cu;
            goto label_20776c;
        }
    }
    ctx->pc = 0x207768u;
    // 0x207768: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x207768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20776c:
    // 0x20776c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207770: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x207770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207774: 0xc0875e0  jal         func_21D780
    ctx->pc = 0x207774u;
    SET_GPR_U32(ctx, 31, 0x20777Cu);
    ctx->pc = 0x207778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207774u;
            // 0x207778: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D780u;
    if (runtime->hasFunction(0x21D780u)) {
        auto targetFn = runtime->lookupFunction(0x21D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20777Cu; }
        if (ctx->pc != 0x20777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor__7CDC2MesFiiii_0x21d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20777Cu; }
        if (ctx->pc != 0x20777Cu) { return; }
    }
    ctx->pc = 0x20777Cu;
label_20777c:
    // 0x20777c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20777Cu;
    {
        const bool branch_taken_0x20777c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20777Cu;
            // 0x207780: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20777c) {
            ctx->pc = 0x207790u;
            goto label_207790;
        }
    }
    ctx->pc = 0x207784u;
    // 0x207784: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207784u;
    SET_GPR_U32(ctx, 31, 0x20778Cu);
    ctx->pc = 0x207788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207784u;
            // 0x207788: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20778Cu; }
        if (ctx->pc != 0x20778Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20778Cu; }
        if (ctx->pc != 0x20778Cu) { return; }
    }
    ctx->pc = 0x20778Cu;
label_20778c:
    // 0x20778c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207790:
    // 0x207790: 0x12630021  beq         $s3, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x207790u;
    {
        const bool branch_taken_0x207790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x207794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207790u;
            // 0x207794: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207790) {
            ctx->pc = 0x207818u;
            goto label_207818;
        }
    }
    ctx->pc = 0x207798u;
    // 0x207798: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207798u;
    {
        const bool branch_taken_0x207798 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207798u;
            // 0x20779c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207798) {
            ctx->pc = 0x2077A8u;
            goto label_2077a8;
        }
    }
    ctx->pc = 0x2077A0u;
    // 0x2077a0: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x2077A0u;
    {
        const bool branch_taken_0x2077a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077a0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2077A8u;
label_2077a8:
    // 0x2077a8: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2077A8u;
    SET_GPR_U32(ctx, 31, 0x2077B0u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077B0u; }
        if (ctx->pc != 0x2077B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077B0u; }
        if (ctx->pc != 0x2077B0u) { return; }
    }
    ctx->pc = 0x2077B0u;
label_2077b0:
    // 0x2077b0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2077b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2077b4: 0xa3829170  sb          $v0, -0x6E90($gp)
    ctx->pc = 0x2077b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938992), (uint8_t)GPR_U32(ctx, 2));
    // 0x2077b8: 0x83829170  lb          $v0, -0x6E90($gp)
    ctx->pc = 0x2077b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x2077bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2077BCu;
    {
        const bool branch_taken_0x2077bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2077bc) {
            ctx->pc = 0x2077C8u;
            goto label_2077c8;
        }
    }
    ctx->pc = 0x2077C4u;
    // 0x2077c4: 0xa3809170  sb          $zero, -0x6E90($gp)
    ctx->pc = 0x2077c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938992), (uint8_t)GPR_U32(ctx, 0));
label_2077c8:
    // 0x2077c8: 0x83829170  lb          $v0, -0x6E90($gp)
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x2077cc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2077ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2077d0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2077D0u;
    {
        const bool branch_taken_0x2077d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2077D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077D0u;
            // 0x2077d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077d0) {
            ctx->pc = 0x2077E4u;
            goto label_2077e4;
        }
    }
    ctx->pc = 0x2077D8u;
    // 0x2077d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2077d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2077dc: 0xa3829170  sb          $v0, -0x6E90($gp)
    ctx->pc = 0x2077dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938992), (uint8_t)GPR_U32(ctx, 2));
    // 0x2077e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2077e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2077e4:
    // 0x2077e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2077e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2077e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2077e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077ec: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2077ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2077f0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2077F0u;
    SET_GPR_U32(ctx, 31, 0x2077F8u);
    ctx->pc = 0x2077F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2077F0u;
            // 0x2077f4: 0x24a59a10  addiu       $a1, $a1, -0x65F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077F8u; }
        if (ctx->pc != 0x2077F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077F8u; }
        if (ctx->pc != 0x2077F8u) { return; }
    }
    ctx->pc = 0x2077F8u;
label_2077f8:
    // 0x2077f8: 0x83839170  lb          $v1, -0x6E90($gp)
    ctx->pc = 0x2077f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x2077fc: 0x8f8290e0  lw          $v0, -0x6F20($gp)
    ctx->pc = 0x2077fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207800: 0xac4304c8  sw          $v1, 0x4C8($v0)
    ctx->pc = 0x207800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 3));
    // 0x207804: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207808: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207808u;
    SET_GPR_U32(ctx, 31, 0x207810u);
    ctx->pc = 0x20780Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207808u;
            // 0x20780c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207810u; }
        if (ctx->pc != 0x207810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207810u; }
        if (ctx->pc != 0x207810u) { return; }
    }
    ctx->pc = 0x207810u;
label_207810:
    // 0x207810: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x207810u;
    {
        const bool branch_taken_0x207810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207810) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207818u;
label_207818:
    // 0x207818: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x20781c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20781cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207824: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207824u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207828: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207828u;
    SET_GPR_U32(ctx, 31, 0x207830u);
    ctx->pc = 0x20782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207828u;
            // 0x20782c: 0x24a59a20  addiu       $a1, $a1, -0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207830u; }
        if (ctx->pc != 0x207830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207830u; }
        if (ctx->pc != 0x207830u) { return; }
    }
    ctx->pc = 0x207830u;
label_207830:
    // 0x207830: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x207830u;
    {
        const bool branch_taken_0x207830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207830) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207838u;
label_207838:
    // 0x207838: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x207838u;
    SET_GPR_U32(ctx, 31, 0x207840u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207840u; }
        if (ctx->pc != 0x207840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207840u; }
        if (ctx->pc != 0x207840u) { return; }
    }
    ctx->pc = 0x207840u;
label_207840:
    // 0x207840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207844: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207844u;
    SET_GPR_U32(ctx, 31, 0x20784Cu);
    ctx->pc = 0x207848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207844u;
            // 0x207848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20784Cu; }
        if (ctx->pc != 0x20784Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20784Cu; }
        if (ctx->pc != 0x20784Cu) { return; }
    }
    ctx->pc = 0x20784Cu;
label_20784c:
    // 0x20784c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20784Cu;
    {
        const bool branch_taken_0x20784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20784Cu;
            // 0x207850: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20784c) {
            ctx->pc = 0x207860u;
            goto label_207860;
        }
    }
    ctx->pc = 0x207854u;
    // 0x207854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207858: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x207858u;
    {
        const bool branch_taken_0x207858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207858u;
            // 0x20785c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207858) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207860u;
label_207860:
    // 0x207860: 0x12630015  beq         $s3, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x207860u;
    {
        const bool branch_taken_0x207860 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x207864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207860u;
            // 0x207864: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207860) {
            ctx->pc = 0x2078B8u;
            goto label_2078b8;
        }
    }
    ctx->pc = 0x207868u;
    // 0x207868: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207868u;
    {
        const bool branch_taken_0x207868 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x207868) {
            ctx->pc = 0x207878u;
            goto label_207878;
        }
    }
    ctx->pc = 0x207870u;
    // 0x207870: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x207870u;
    {
        const bool branch_taken_0x207870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207870) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207878u;
label_207878:
    // 0x207878: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x207878u;
    {
        const bool branch_taken_0x207878 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20787Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207878u;
            // 0x20787c: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207878) {
            ctx->pc = 0x2078BCu;
            goto label_2078bc;
        }
    }
    ctx->pc = 0x207880u;
    // 0x207880: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x207884: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207884u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207888: 0x83839170  lb          $v1, -0x6E90($gp)
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x20788c: 0x8f8290e0  lw          $v0, -0x6F20($gp)
    ctx->pc = 0x20788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207890: 0xac4304c8  sw          $v1, 0x4C8($v0)
    ctx->pc = 0x207890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 3));
    // 0x207894: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207898: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207898u;
    SET_GPR_U32(ctx, 31, 0x2078A0u);
    ctx->pc = 0x20789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207898u;
            // 0x20789c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078A0u; }
        if (ctx->pc != 0x2078A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078A0u; }
        if (ctx->pc != 0x2078A0u) { return; }
    }
    ctx->pc = 0x2078A0u;
label_2078a0:
    // 0x2078a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2078a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2078a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2078a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078a8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2078A8u;
    SET_GPR_U32(ctx, 31, 0x2078B0u);
    ctx->pc = 0x2078ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2078A8u;
            // 0x2078ac: 0x24a59a30  addiu       $a1, $a1, -0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078B0u; }
        if (ctx->pc != 0x2078B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078B0u; }
        if (ctx->pc != 0x2078B0u) { return; }
    }
    ctx->pc = 0x2078B0u;
label_2078b0:
    // 0x2078b0: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x2078B0u;
    {
        const bool branch_taken_0x2078b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078b0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2078B8u;
label_2078b8:
    // 0x2078b8: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_2078bc:
    // 0x2078bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2078c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2078c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078c4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2078c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2078c8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2078C8u;
    SET_GPR_U32(ctx, 31, 0x2078D0u);
    ctx->pc = 0x2078CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2078C8u;
            // 0x2078cc: 0x24a59a20  addiu       $a1, $a1, -0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078D0u; }
        if (ctx->pc != 0x2078D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078D0u; }
        if (ctx->pc != 0x2078D0u) { return; }
    }
    ctx->pc = 0x2078D0u;
label_2078d0:
    // 0x2078d0: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x2078D0u;
    {
        const bool branch_taken_0x2078d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078d0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2078D8u;
label_2078d8:
    // 0x2078d8: 0x12800165  beqz        $s4, . + 4 + (0x165 << 2)
    ctx->pc = 0x2078D8u;
    {
        const bool branch_taken_0x2078d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2078D8u;
            // 0x2078dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078d8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2078E0u;
    // 0x2078e0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2078E0u;
    SET_GPR_U32(ctx, 31, 0x2078E8u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078E8u; }
        if (ctx->pc != 0x2078E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078E8u; }
        if (ctx->pc != 0x2078E8u) { return; }
    }
    ctx->pc = 0x2078E8u;
label_2078e8:
    // 0x2078e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2078E8u;
    {
        const bool branch_taken_0x2078e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078e8) {
            ctx->pc = 0x207934u;
            goto label_207934;
        }
    }
    ctx->pc = 0x2078F0u;
    // 0x2078f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2078f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2078f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2078F4u;
    {
        const bool branch_taken_0x2078f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2078F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2078F4u;
            // 0x2078f8: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078f4) {
            ctx->pc = 0x20791Cu;
            goto label_20791c;
        }
    }
    ctx->pc = 0x2078FCu;
    // 0x2078fc: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x2078fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x207900: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207908: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x20790c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20790Cu;
    SET_GPR_U32(ctx, 31, 0x207914u);
    ctx->pc = 0x207910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20790Cu;
            // 0x207910: 0x24a599f0  addiu       $a1, $a1, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207914u; }
        if (ctx->pc != 0x207914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207914u; }
        if (ctx->pc != 0x207914u) { return; }
    }
    ctx->pc = 0x207914u;
label_207914:
    // 0x207914: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x207914u;
    {
        const bool branch_taken_0x207914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207914) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20791Cu;
label_20791c:
    // 0x20791c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x20791cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207920: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207924: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207924u;
    SET_GPR_U32(ctx, 31, 0x20792Cu);
    ctx->pc = 0x207928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207924u;
            // 0x207928: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20792Cu; }
        if (ctx->pc != 0x20792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20792Cu; }
        if (ctx->pc != 0x20792Cu) { return; }
    }
    ctx->pc = 0x20792Cu;
label_20792c:
    // 0x20792c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x20792Cu;
    {
        const bool branch_taken_0x20792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20792c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207934u;
label_207934:
    // 0x207934: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x207934u;
    {
        const bool branch_taken_0x207934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207934u;
            // 0x207938: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207934) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20793Cu;
label_20793c:
    // 0x20793c: 0x1280014c  beqz        $s4, . + 4 + (0x14C << 2)
    ctx->pc = 0x20793Cu;
    {
        const bool branch_taken_0x20793c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x207940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20793Cu;
            // 0x207940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20793c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207944u;
    // 0x207944: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207944u;
    SET_GPR_U32(ctx, 31, 0x20794Cu);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20794Cu; }
        if (ctx->pc != 0x20794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20794Cu; }
        if (ctx->pc != 0x20794Cu) { return; }
    }
    ctx->pc = 0x20794Cu;
label_20794c:
    // 0x20794c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20794Cu;
    {
        const bool branch_taken_0x20794c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20794c) {
            ctx->pc = 0x20795Cu;
            goto label_20795c;
        }
    }
    ctx->pc = 0x207954u;
    // 0x207954: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x207954u;
    {
        const bool branch_taken_0x207954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207954u;
            // 0x207958: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207954) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20795Cu;
label_20795c:
    // 0x20795c: 0x8f8390e0  lw          $v1, -0x6F20($gp)
    ctx->pc = 0x20795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207960: 0x8c6310e0  lw          $v1, 0x10E0($v1)
    ctx->pc = 0x207960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
    // 0x207964: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x207964u;
    {
        const bool branch_taken_0x207964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207964u;
            // 0x207968: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207964) {
            ctx->pc = 0x20797Cu;
            goto label_20797c;
        }
    }
    ctx->pc = 0x20796Cu;
    // 0x20796c: 0x240300cd  addiu       $v1, $zero, 0xCD
    ctx->pc = 0x20796cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x207970: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x207970u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207974: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x207974u;
    {
        const bool branch_taken_0x207974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207974u;
            // 0x207978: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207974) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x20797Cu;
label_20797c:
    // 0x20797c: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x20797Cu;
    {
        const bool branch_taken_0x20797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20797Cu;
            // 0x207980: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20797c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207984u;
label_207984:
    // 0x207984: 0x8f8390e0  lw          $v1, -0x6F20($gp)
    ctx->pc = 0x207984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207988: 0x8e220d78  lw          $v0, 0xD78($s1)
    ctx->pc = 0x207988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
    // 0x20798c: 0x8c630914  lw          $v1, 0x914($v1)
    ctx->pc = 0x20798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2324)));
    // 0x207990: 0xc088930  jal         func_2224C0
    ctx->pc = 0x207990u;
    SET_GPR_U32(ctx, 31, 0x207998u);
    ctx->pc = 0x207994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207990u;
            // 0x207994: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207998u; }
        if (ctx->pc != 0x207998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207998u; }
        if (ctx->pc != 0x207998u) { return; }
    }
    ctx->pc = 0x207998u;
label_207998:
    // 0x207998: 0x12800135  beqz        $s4, . + 4 + (0x135 << 2)
    ctx->pc = 0x207998u;
    {
        const bool branch_taken_0x207998 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207998u;
            // 0x20799c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207998) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2079A0u;
    // 0x2079a0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2079A0u;
    SET_GPR_U32(ctx, 31, 0x2079A8u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2079A8u; }
        if (ctx->pc != 0x2079A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2079A8u; }
        if (ctx->pc != 0x2079A8u) { return; }
    }
    ctx->pc = 0x2079A8u;
label_2079a8:
    // 0x2079a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2079A8u;
    {
        const bool branch_taken_0x2079a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2079a8) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2079B0u;
    // 0x2079b0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2079B0u;
    {
        const bool branch_taken_0x2079b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079B0u;
            // 0x2079b4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079b0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2079B8u;
label_2079b8:
    // 0x2079b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2079bc: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x2079BCu;
    {
        const bool branch_taken_0x2079bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079bc) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2079C4u;
    // 0x2079c4: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x2079c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x2079c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2079c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079cc: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x2079CCu;
    SET_GPR_U32(ctx, 31, 0x2079D4u);
    ctx->pc = 0x2079D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2079CCu;
            // 0x2079d0: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2079D4u; }
        if (ctx->pc != 0x2079D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2079D4u; }
        if (ctx->pc != 0x2079D4u) { return; }
    }
    ctx->pc = 0x2079D4u;
label_2079d4:
    // 0x2079d4: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2079d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2079d8: 0x26250440  addiu       $a1, $s1, 0x440
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x2079dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2079dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079e0: 0xc07f958  jal         func_1FE560
    ctx->pc = 0x2079E0u;
    SET_GPR_U32(ctx, 31, 0x2079E8u);
    ctx->pc = 0x2079E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2079E0u;
            // 0x2079e4: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2079E8u; }
        if (ctx->pc != 0x2079E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2079E8u; }
        if (ctx->pc != 0x2079E8u) { return; }
    }
    ctx->pc = 0x2079E8u;
label_2079e8:
    // 0x2079e8: 0x240300ce  addiu       $v1, $zero, 0xCE
    ctx->pc = 0x2079e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x2079ec: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x2079ECu;
    {
        const bool branch_taken_0x2079ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079ECu;
            // 0x2079f0: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079ec) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2079F4u;
label_2079f4:
    // 0x2079f4: 0x1260011e  beqz        $s3, . + 4 + (0x11E << 2)
    ctx->pc = 0x2079F4u;
    {
        const bool branch_taken_0x2079f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079F4u;
            // 0x2079f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079f4) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x2079FCu;
    // 0x2079fc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2079FCu;
    SET_GPR_U32(ctx, 31, 0x207A04u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A04u; }
        if (ctx->pc != 0x207A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A04u; }
        if (ctx->pc != 0x207A04u) { return; }
    }
    ctx->pc = 0x207A04u;
label_207a04:
    // 0x207a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a08: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x207A08u;
    {
        const bool branch_taken_0x207a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A08u;
            // 0x207a0c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a08) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207A10u;
label_207a10:
    // 0x207a10: 0xc087654  jal         func_21D950
    ctx->pc = 0x207A10u;
    SET_GPR_U32(ctx, 31, 0x207A18u);
    ctx->pc = 0x207A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207A10u;
            // 0x207a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A18u; }
        if (ctx->pc != 0x207A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A18u; }
        if (ctx->pc != 0x207A18u) { return; }
    }
    ctx->pc = 0x207A18u;
label_207a18:
    // 0x207a18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a20: 0x16440011  bne         $s2, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207A20u;
    {
        const bool branch_taken_0x207a20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x207A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A20u;
            // 0x207a24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a20) {
            ctx->pc = 0x207A68u;
            goto label_207a68;
        }
    }
    ctx->pc = 0x207A28u;
    // 0x207a28: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207A28u;
    SET_GPR_U32(ctx, 31, 0x207A30u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A30u; }
        if (ctx->pc != 0x207A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A30u; }
        if (ctx->pc != 0x207A30u) { return; }
    }
    ctx->pc = 0x207A30u;
label_207a30:
    // 0x207a30: 0xc0803b0  jal         func_200EC0
    ctx->pc = 0x207A30u;
    SET_GPR_U32(ctx, 31, 0x207A38u);
    ctx->pc = 0x207A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207A30u;
            // 0x207a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200EC0u;
    if (runtime->hasFunction(0x200EC0u)) {
        auto targetFn = runtime->lookupFunction(0x200EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A38u; }
        if (ctx->pc != 0x207A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRecoverPhotoNum__11CMenuInventFv_0x200ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A38u; }
        if (ctx->pc != 0x207A38u) { return; }
    }
    ctx->pc = 0x207A38u;
label_207a38:
    // 0x207a38: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x207a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207a3c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x207A3Cu;
    {
        const bool branch_taken_0x207a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A3Cu;
            // 0x207a40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a3c) {
            ctx->pc = 0x207A60u;
            goto label_207a60;
        }
    }
    ctx->pc = 0x207A44u;
    // 0x207a44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a4c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207A4Cu;
    SET_GPR_U32(ctx, 31, 0x207A54u);
    ctx->pc = 0x207A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207A4Cu;
            // 0x207a50: 0x24a59a40  addiu       $a1, $a1, -0x65C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A54u; }
        if (ctx->pc != 0x207A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A54u; }
        if (ctx->pc != 0x207A54u) { return; }
    }
    ctx->pc = 0x207A54u;
label_207a54:
    // 0x207a54: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x207a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x207a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207A58u;
    {
        const bool branch_taken_0x207a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A58u;
            // 0x207a5c: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a58) {
            ctx->pc = 0x207A64u;
            goto label_207a64;
        }
    }
    ctx->pc = 0x207A60u;
label_207a60:
    // 0x207a60: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x207a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_207a64:
    // 0x207a64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207a68:
    // 0x207a68: 0x16430101  bne         $s2, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x207A68u;
    {
        const bool branch_taken_0x207a68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x207A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A68u;
            // 0x207a6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a68) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207A70u;
    // 0x207a70: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x207A70u;
    {
        const bool branch_taken_0x207a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A70u;
            // 0x207a74: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a70) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207A78u;
label_207a78:
    // 0x207a78: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x207A78u;
    SET_GPR_U32(ctx, 31, 0x207A80u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A80u; }
        if (ctx->pc != 0x207A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A80u; }
        if (ctx->pc != 0x207A80u) { return; }
    }
    ctx->pc = 0x207A80u;
label_207a80:
    // 0x207a80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a84: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207A84u;
    SET_GPR_U32(ctx, 31, 0x207A8Cu);
    ctx->pc = 0x207A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207A84u;
            // 0x207a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A8Cu; }
        if (ctx->pc != 0x207A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207A8Cu; }
        if (ctx->pc != 0x207A8Cu) { return; }
    }
    ctx->pc = 0x207A8Cu;
label_207a8c:
    // 0x207a8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207A8Cu;
    {
        const bool branch_taken_0x207a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A8Cu;
            // 0x207a90: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a8c) {
            ctx->pc = 0x207AA0u;
            goto label_207aa0;
        }
    }
    ctx->pc = 0x207A94u;
    // 0x207a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a98: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x207A98u;
    {
        const bool branch_taken_0x207a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A98u;
            // 0x207a9c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a98) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207AA0u;
label_207aa0:
    // 0x207aa0: 0x1263000c  beq         $s3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x207AA0u;
    {
        const bool branch_taken_0x207aa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x207AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AA0u;
            // 0x207aa4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207aa0) {
            ctx->pc = 0x207AD4u;
            goto label_207ad4;
        }
    }
    ctx->pc = 0x207AA8u;
    // 0x207aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207aac: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207AACu;
    {
        const bool branch_taken_0x207aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x207aac) {
            ctx->pc = 0x207ABCu;
            goto label_207abc;
        }
    }
    ctx->pc = 0x207AB4u;
    // 0x207ab4: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x207AB4u;
    {
        const bool branch_taken_0x207ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ab4) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207ABCu;
label_207abc:
    // 0x207abc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x207ABCu;
    {
        const bool branch_taken_0x207abc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x207AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207ABCu;
            // 0x207ac0: 0x240300e7  addiu       $v1, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207abc) {
            ctx->pc = 0x207AD0u;
            goto label_207ad0;
        }
    }
    ctx->pc = 0x207AC4u;
    // 0x207ac4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x207ac4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207ac8: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x207AC8u;
    {
        const bool branch_taken_0x207ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AC8u;
            // 0x207acc: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ac8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207AD0u;
label_207ad0:
    // 0x207ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207ad4:
    // 0x207ad4: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x207AD4u;
    {
        const bool branch_taken_0x207ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AD4u;
            // 0x207ad8: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ad4) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207ADCu;
label_207adc:
    // 0x207adc: 0xc087654  jal         func_21D950
    ctx->pc = 0x207ADCu;
    SET_GPR_U32(ctx, 31, 0x207AE4u);
    ctx->pc = 0x207AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207ADCu;
            // 0x207ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207AE4u; }
        if (ctx->pc != 0x207AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207AE4u; }
        if (ctx->pc != 0x207AE4u) { return; }
    }
    ctx->pc = 0x207AE4u;
label_207ae4:
    // 0x207ae4: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x207ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x207ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207aec: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x207aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x207af0: 0x14640055  bne         $v1, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x207AF0u;
    {
        const bool branch_taken_0x207af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x207AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AF0u;
            // 0x207af4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207af0) {
            ctx->pc = 0x207C48u;
            goto label_207c48;
        }
    }
    ctx->pc = 0x207AF8u;
    // 0x207af8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x207af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207afc:
    // 0x207afc: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x207afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x207b00: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x207B00u;
    SET_GPR_U32(ctx, 31, 0x207B08u);
    ctx->pc = 0x207B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207B00u;
            // 0x207b04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B08u; }
        if (ctx->pc != 0x207B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B08u; }
        if (ctx->pc != 0x207B08u) { return; }
    }
    ctx->pc = 0x207B08u;
label_207b08:
    // 0x207b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207B08u;
    {
        const bool branch_taken_0x207b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b08) {
            ctx->pc = 0x207B20u;
            goto label_207b20;
        }
    }
    ctx->pc = 0x207B10u;
    // 0x207b10: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x207b10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207b14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207B14u;
    {
        const bool branch_taken_0x207b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207b14) {
            ctx->pc = 0x207B20u;
            goto label_207b20;
        }
    }
    ctx->pc = 0x207B1Cu;
    // 0x207b1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_207b20:
    // 0x207b20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x207b24: 0x2a620032  slti        $v0, $s3, 0x32
    ctx->pc = 0x207b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x207b28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x207B28u;
    {
        const bool branch_taken_0x207b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B28u;
            // 0x207b2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b28) {
            ctx->pc = 0x207AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207afc;
        }
    }
    ctx->pc = 0x207B30u;
    // 0x207b30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x207b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b34: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x207b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_207b38:
    // 0x207b38: 0x80420508  lb          $v0, 0x508($v0)
    ctx->pc = 0x207b38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1288)));
    // 0x207b3c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x207b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207b40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x207B40u;
    {
        const bool branch_taken_0x207b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b40) {
            ctx->pc = 0x207B4Cu;
            goto label_207b4c;
        }
    }
    ctx->pc = 0x207B48u;
    // 0x207b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_207b4c:
    // 0x207b4c: 0x0  nop
    ctx->pc = 0x207b4cu;
    // NOP
    // 0x207b50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x207b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x207b54: 0x28820032  slti        $v0, $a0, 0x32
    ctx->pc = 0x207b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x207b58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x207B58u;
    {
        const bool branch_taken_0x207b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B58u;
            // 0x207b5c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b58) {
            ctx->pc = 0x207B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207b38;
        }
    }
    ctx->pc = 0x207B60u;
    // 0x207b60: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x207b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x207b64: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x207B64u;
    {
        const bool branch_taken_0x207b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B64u;
            // 0x207b68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b64) {
            ctx->pc = 0x207B94u;
            goto label_207b94;
        }
    }
    ctx->pc = 0x207B6Cu;
    // 0x207b6c: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x207b70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b78: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207b78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207b7c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207B7Cu;
    SET_GPR_U32(ctx, 31, 0x207B84u);
    ctx->pc = 0x207B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207B7Cu;
            // 0x207b80: 0x24a59a50  addiu       $a1, $a1, -0x65B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B84u; }
        if (ctx->pc != 0x207B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B84u; }
        if (ctx->pc != 0x207B84u) { return; }
    }
    ctx->pc = 0x207B84u;
label_207b84:
    // 0x207b84: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207B84u;
    SET_GPR_U32(ctx, 31, 0x207B8Cu);
    ctx->pc = 0x207B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207B84u;
            // 0x207b88: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B8Cu; }
        if (ctx->pc != 0x207B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207B8Cu; }
        if (ctx->pc != 0x207B8Cu) { return; }
    }
    ctx->pc = 0x207B8Cu;
label_207b8c:
    // 0x207b8c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x207B8Cu;
    {
        const bool branch_taken_0x207b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b8c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207B94u;
label_207b94:
    // 0x207b94: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_207b98:
    // 0x207b98: 0x24430508  addiu       $v1, $v0, 0x508
    ctx->pc = 0x207b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1288));
    // 0x207b9c: 0x80420508  lb          $v0, 0x508($v0)
    ctx->pc = 0x207b9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1288)));
    // 0x207ba0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x207ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207ba4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x207BA4u;
    {
        const bool branch_taken_0x207ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BA4u;
            // 0x207ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba4) {
            ctx->pc = 0x207C04u;
            goto label_207c04;
        }
    }
    ctx->pc = 0x207BACu;
    // 0x207bac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x207bacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x207bb0: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x207bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x207bb4: 0xc07fac0  jal         func_1FEB00
    ctx->pc = 0x207BB4u;
    SET_GPR_U32(ctx, 31, 0x207BBCu);
    ctx->pc = 0x207BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BB4u;
            // 0x207bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB00u;
    if (runtime->hasFunction(0x1FEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BBCu; }
        if (ctx->pc != 0x207BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPhotoSpace__15CInventUserDataFPi_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BBCu; }
        if (ctx->pc != 0x207BBCu) { return; }
    }
    ctx->pc = 0x207BBCu;
label_207bbc:
    // 0x207bbc: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x207bc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x207bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bc4: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x207BC4u;
    SET_GPR_U32(ctx, 31, 0x207BCCu);
    ctx->pc = 0x207BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BC4u;
            // 0x207bc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BCCu; }
        if (ctx->pc != 0x207BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BCCu; }
        if (ctx->pc != 0x207BCCu) { return; }
    }
    ctx->pc = 0x207BCCu;
label_207bcc:
    // 0x207bcc: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x207BCCu;
    {
        const bool branch_taken_0x207bcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BCCu;
            // 0x207bd0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bcc) {
            ctx->pc = 0x207C04u;
            goto label_207c04;
        }
    }
    ctx->pc = 0x207BD4u;
    // 0x207bd4: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x207BD4u;
    {
        const bool branch_taken_0x207bd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BD4u;
            // 0x207bd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bd4) {
            ctx->pc = 0x207C04u;
            goto label_207c04;
        }
    }
    ctx->pc = 0x207BDCu;
    // 0x207bdc: 0xc07f868  jal         func_1FE1A0
    ctx->pc = 0x207BDCu;
    SET_GPR_U32(ctx, 31, 0x207BE4u);
    ctx->pc = 0x207BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BDCu;
            // 0x207be0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A0u;
    if (runtime->hasFunction(0x1FE1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BE4u; }
        if (ctx->pc != 0x207BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_USER_PICTURE_INFO__FP17USER_PICTURE_INFOP17USER_PICTURE_INFO_0x1fe1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BE4u; }
        if (ctx->pc != 0x207BE4u) { return; }
    }
    ctx->pc = 0x207BE4u;
label_207be4:
    // 0x207be4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x207be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x207be8: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x207bec: 0xc049c18  jal         func_127060
    ctx->pc = 0x207BECu;
    SET_GPR_U32(ctx, 31, 0x207BF4u);
    ctx->pc = 0x207BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BECu;
            // 0x207bf0: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BF4u; }
        if (ctx->pc != 0x207BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207BF4u; }
        if (ctx->pc != 0x207BF4u) { return; }
    }
    ctx->pc = 0x207BF4u;
label_207bf4:
    // 0x207bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207bf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x207bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bfc: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x207BFCu;
    SET_GPR_U32(ctx, 31, 0x207C04u);
    ctx->pc = 0x207C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207BFCu;
            // 0x207c00: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C04u; }
        if (ctx->pc != 0x207C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C04u; }
        if (ctx->pc != 0x207C04u) { return; }
    }
    ctx->pc = 0x207C04u;
label_207c04:
    // 0x207c04: 0x0  nop
    ctx->pc = 0x207c04u;
    // NOP
    // 0x207c08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207c0c: 0x2a420032  slti        $v0, $s2, 0x32
    ctx->pc = 0x207c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x207c10: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x207C10u;
    {
        const bool branch_taken_0x207c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C10u;
            // 0x207c14: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c10) {
            ctx->pc = 0x207B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207b98;
        }
    }
    ctx->pc = 0x207C18u;
    // 0x207c18: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x207c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x207c1c: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x207C1Cu;
    SET_GPR_U32(ctx, 31, 0x207C24u);
    ctx->pc = 0x207C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C1Cu;
            // 0x207c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C24u; }
        if (ctx->pc != 0x207C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C24u; }
        if (ctx->pc != 0x207C24u) { return; }
    }
    ctx->pc = 0x207C24u;
label_207c24:
    // 0x207c24: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x207c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x207c28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c2c: 0x262503c8  addiu       $a1, $s1, 0x3C8
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x207c30: 0xc07f958  jal         func_1FE560
    ctx->pc = 0x207C30u;
    SET_GPR_U32(ctx, 31, 0x207C38u);
    ctx->pc = 0x207C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C30u;
            // 0x207c34: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C38u; }
        if (ctx->pc != 0x207C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C38u; }
        if (ctx->pc != 0x207C38u) { return; }
    }
    ctx->pc = 0x207C38u;
label_207c38:
    // 0x207c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207c3c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x207c40: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207C40u;
    SET_GPR_U32(ctx, 31, 0x207C48u);
    ctx->pc = 0x207C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C40u;
            // 0x207c44: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C48u; }
        if (ctx->pc != 0x207C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C48u; }
        if (ctx->pc != 0x207C48u) { return; }
    }
    ctx->pc = 0x207C48u;
label_207c48:
    // 0x207c48: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x207c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x207c4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x207c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207c50: 0x14640087  bne         $v1, $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x207C50u;
    {
        const bool branch_taken_0x207c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x207c50) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C58u;
    // 0x207c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207c5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x207c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x207c60: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207C60u;
    SET_GPR_U32(ctx, 31, 0x207C68u);
    ctx->pc = 0x207C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C60u;
            // 0x207c64: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C68u; }
        if (ctx->pc != 0x207C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C68u; }
        if (ctx->pc != 0x207C68u) { return; }
    }
    ctx->pc = 0x207C68u;
label_207c68:
    // 0x207c68: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x207C68u;
    {
        const bool branch_taken_0x207c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c68) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C70u;
label_207c70:
    // 0x207c70: 0x1260007f  beqz        $s3, . + 4 + (0x7F << 2)
    ctx->pc = 0x207C70u;
    {
        const bool branch_taken_0x207c70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c70) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C78u;
    // 0x207c78: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x207C78u;
    {
        const bool branch_taken_0x207c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C78u;
            // 0x207c7c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c78) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C80u;
label_207c80:
    // 0x207c80: 0x1260007b  beqz        $s3, . + 4 + (0x7B << 2)
    ctx->pc = 0x207C80u;
    {
        const bool branch_taken_0x207c80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C80u;
            // 0x207c84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c80) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C88u;
    // 0x207c88: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x207C88u;
    {
        const bool branch_taken_0x207c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C88u;
            // 0x207c8c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c88) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C90u;
label_207c90:
    // 0x207c90: 0x12600077  beqz        $s3, . + 4 + (0x77 << 2)
    ctx->pc = 0x207C90u;
    {
        const bool branch_taken_0x207c90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c90) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207C98u;
    // 0x207c98: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x207c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x207c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ca0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207ca4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207CA4u;
    SET_GPR_U32(ctx, 31, 0x207CACu);
    ctx->pc = 0x207CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207CA4u;
            // 0x207ca8: 0x24a59a20  addiu       $a1, $a1, -0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CACu; }
        if (ctx->pc != 0x207CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CACu; }
        if (ctx->pc != 0x207CACu) { return; }
    }
    ctx->pc = 0x207CACu;
label_207cac:
    // 0x207cac: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x207CACu;
    {
        const bool branch_taken_0x207cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cac) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207CB4u;
label_207cb4:
    // 0x207cb4: 0xc087654  jal         func_21D950
    ctx->pc = 0x207CB4u;
    SET_GPR_U32(ctx, 31, 0x207CBCu);
    ctx->pc = 0x207CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207CB4u;
            // 0x207cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CBCu; }
        if (ctx->pc != 0x207CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CBCu; }
        if (ctx->pc != 0x207CBCu) { return; }
    }
    ctx->pc = 0x207CBCu;
label_207cbc:
    // 0x207cbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207cc4: 0x16440011  bne         $s2, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207CC4u;
    {
        const bool branch_taken_0x207cc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x207CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CC4u;
            // 0x207cc8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cc4) {
            ctx->pc = 0x207D0Cu;
            goto label_207d0c;
        }
    }
    ctx->pc = 0x207CCCu;
    // 0x207ccc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207CCCu;
    SET_GPR_U32(ctx, 31, 0x207CD4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CD4u; }
        if (ctx->pc != 0x207CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CD4u; }
        if (ctx->pc != 0x207CD4u) { return; }
    }
    ctx->pc = 0x207CD4u;
label_207cd4:
    // 0x207cd4: 0xc0803b0  jal         func_200EC0
    ctx->pc = 0x207CD4u;
    SET_GPR_U32(ctx, 31, 0x207CDCu);
    ctx->pc = 0x207CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207CD4u;
            // 0x207cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200EC0u;
    if (runtime->hasFunction(0x200EC0u)) {
        auto targetFn = runtime->lookupFunction(0x200EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CDCu; }
        if (ctx->pc != 0x207CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRecoverPhotoNum__11CMenuInventFv_0x200ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CDCu; }
        if (ctx->pc != 0x207CDCu) { return; }
    }
    ctx->pc = 0x207CDCu;
label_207cdc:
    // 0x207cdc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x207cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207ce0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x207CE0u;
    {
        const bool branch_taken_0x207ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CE0u;
            // 0x207ce4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ce0) {
            ctx->pc = 0x207D04u;
            goto label_207d04;
        }
    }
    ctx->pc = 0x207CE8u;
    // 0x207ce8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cf0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207CF0u;
    SET_GPR_U32(ctx, 31, 0x207CF8u);
    ctx->pc = 0x207CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207CF0u;
            // 0x207cf4: 0x24a59a40  addiu       $a1, $a1, -0x65C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CF8u; }
        if (ctx->pc != 0x207CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CF8u; }
        if (ctx->pc != 0x207CF8u) { return; }
    }
    ctx->pc = 0x207CF8u;
label_207cf8:
    // 0x207cf8: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x207cfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207CFCu;
    {
        const bool branch_taken_0x207cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CFCu;
            // 0x207d00: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cfc) {
            ctx->pc = 0x207D08u;
            goto label_207d08;
        }
    }
    ctx->pc = 0x207D04u;
label_207d04:
    // 0x207d04: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x207d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_207d08:
    // 0x207d08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207d0c:
    // 0x207d0c: 0x16430058  bne         $s2, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x207D0Cu;
    {
        const bool branch_taken_0x207d0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x207d0c) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207D14u;
    // 0x207d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207d18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x207d1c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207D1Cu;
    SET_GPR_U32(ctx, 31, 0x207D24u);
    ctx->pc = 0x207D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207D1Cu;
            // 0x207d20: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D24u; }
        if (ctx->pc != 0x207D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D24u; }
        if (ctx->pc != 0x207D24u) { return; }
    }
    ctx->pc = 0x207D24u;
label_207d24:
    // 0x207d24: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x207D24u;
    {
        const bool branch_taken_0x207d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d24) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207D2Cu;
label_207d2c:
    // 0x207d2c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207D2Cu;
    SET_GPR_U32(ctx, 31, 0x207D34u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D34u; }
        if (ctx->pc != 0x207D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D34u; }
        if (ctx->pc != 0x207D34u) { return; }
    }
    ctx->pc = 0x207D34u;
label_207d34:
    // 0x207d34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207D34u;
    {
        const bool branch_taken_0x207d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D34u;
            // 0x207d38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d34) {
            ctx->pc = 0x207D48u;
            goto label_207d48;
        }
    }
    ctx->pc = 0x207D3Cu;
    // 0x207d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207d40: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x207D40u;
    {
        const bool branch_taken_0x207d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D40u;
            // 0x207d44: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d40) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207D48u;
label_207d48:
    // 0x207d48: 0xc087654  jal         func_21D950
    ctx->pc = 0x207D48u;
    SET_GPR_U32(ctx, 31, 0x207D50u);
    ctx->pc = 0x207D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207D48u;
            // 0x207d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D50u; }
        if (ctx->pc != 0x207D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D50u; }
        if (ctx->pc != 0x207D50u) { return; }
    }
    ctx->pc = 0x207D50u;
label_207d50:
    // 0x207d50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207d58: 0x1643000b  bne         $s2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x207D58u;
    {
        const bool branch_taken_0x207d58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x207D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D58u;
            // 0x207d5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d58) {
            ctx->pc = 0x207D88u;
            goto label_207d88;
        }
    }
    ctx->pc = 0x207D60u;
    // 0x207d60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d68: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207D68u;
    SET_GPR_U32(ctx, 31, 0x207D70u);
    ctx->pc = 0x207D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207D68u;
            // 0x207d6c: 0x24a59a60  addiu       $a1, $a1, -0x65A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D70u; }
        if (ctx->pc != 0x207D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D70u; }
        if (ctx->pc != 0x207D70u) { return; }
    }
    ctx->pc = 0x207D70u;
label_207d70:
    // 0x207d70: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207d74: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207D74u;
    SET_GPR_U32(ctx, 31, 0x207D7Cu);
    ctx->pc = 0x207D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207D74u;
            // 0x207d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D7Cu; }
        if (ctx->pc != 0x207D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D7Cu; }
        if (ctx->pc != 0x207D7Cu) { return; }
    }
    ctx->pc = 0x207D7Cu;
label_207d7c:
    // 0x207d7c: 0x240301f5  addiu       $v1, $zero, 0x1F5
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
    // 0x207d80: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x207d80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x207d84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207d88:
    // 0x207d88: 0x16430039  bne         $s2, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x207D88u;
    {
        const bool branch_taken_0x207d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x207d88) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207D90u;
    // 0x207d90: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x207D90u;
    {
        const bool branch_taken_0x207d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D90u;
            // 0x207d94: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d90) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207D98u;
label_207d98:
    // 0x207d98: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
    ctx->pc = 0x207D98u;
    {
        const bool branch_taken_0x207d98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D98u;
            // 0x207d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d98) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207DA0u;
    // 0x207da0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207DA0u;
    SET_GPR_U32(ctx, 31, 0x207DA8u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DA8u; }
        if (ctx->pc != 0x207DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DA8u; }
        if (ctx->pc != 0x207DA8u) { return; }
    }
    ctx->pc = 0x207DA8u;
label_207da8:
    // 0x207da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207dac: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x207DACu;
    {
        const bool branch_taken_0x207dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x207dac) {
            ctx->pc = 0x207DF8u;
            goto label_207df8;
        }
    }
    ctx->pc = 0x207DB4u;
    // 0x207db4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x207db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x207db8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x207DB8u;
    {
        const bool branch_taken_0x207db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DB8u;
            // 0x207dbc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207db8) {
            ctx->pc = 0x207DE0u;
            goto label_207de0;
        }
    }
    ctx->pc = 0x207DC0u;
    // 0x207dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207dc4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207DC4u;
    SET_GPR_U32(ctx, 31, 0x207DCCu);
    ctx->pc = 0x207DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207DC4u;
            // 0x207dc8: 0x24a59a70  addiu       $a1, $a1, -0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DCCu; }
        if (ctx->pc != 0x207DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DCCu; }
        if (ctx->pc != 0x207DCCu) { return; }
    }
    ctx->pc = 0x207DCCu;
label_207dcc:
    // 0x207dcc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x207DCCu;
    SET_GPR_U32(ctx, 31, 0x207DD4u);
    ctx->pc = 0x207DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207DCCu;
            // 0x207dd0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DD4u; }
        if (ctx->pc != 0x207DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DD4u; }
        if (ctx->pc != 0x207DD4u) { return; }
    }
    ctx->pc = 0x207DD4u;
label_207dd4:
    // 0x207dd4: 0x240301f7  addiu       $v1, $zero, 0x1F7
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
    // 0x207dd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x207DD8u;
    {
        const bool branch_taken_0x207dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DD8u;
            // 0x207ddc: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dd8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207DE0u;
label_207de0:
    // 0x207de0: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207de4: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207DE4u;
    SET_GPR_U32(ctx, 31, 0x207DECu);
    ctx->pc = 0x207DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207DE4u;
            // 0x207de8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DECu; }
        if (ctx->pc != 0x207DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DECu; }
        if (ctx->pc != 0x207DECu) { return; }
    }
    ctx->pc = 0x207DECu;
label_207dec:
    // 0x207dec: 0x240301f6  addiu       $v1, $zero, 0x1F6
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x207df0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x207DF0u;
    {
        const bool branch_taken_0x207df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DF0u;
            // 0x207df4: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207df0) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207DF8u;
label_207df8:
    // 0x207df8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x207DF8u;
    {
        const bool branch_taken_0x207df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DF8u;
            // 0x207dfc: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207df8) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207E00u;
label_207e00:
    // 0x207e00: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x207E00u;
    {
        const bool branch_taken_0x207e00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e00) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207E08u;
    // 0x207e08: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x207e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x207e0c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207E0Cu;
    SET_GPR_U32(ctx, 31, 0x207E14u);
    ctx->pc = 0x207E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E0Cu;
            // 0x207e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E14u; }
        if (ctx->pc != 0x207E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E14u; }
        if (ctx->pc != 0x207E14u) { return; }
    }
    ctx->pc = 0x207E14u;
label_207e14:
    // 0x207e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e18: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x207E18u;
    {
        const bool branch_taken_0x207e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E18u;
            // 0x207e1c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e18) {
            ctx->pc = 0x207E4Cu;
            goto label_207e4c;
        }
    }
    ctx->pc = 0x207E20u;
    // 0x207e20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x207e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x207e24: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x207E24u;
    {
        const bool branch_taken_0x207e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E24u;
            // 0x207e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e24) {
            ctx->pc = 0x207E50u;
            goto label_207e50;
        }
    }
    ctx->pc = 0x207E2Cu;
    // 0x207e2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e34: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207E34u;
    SET_GPR_U32(ctx, 31, 0x207E3Cu);
    ctx->pc = 0x207E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E34u;
            // 0x207e38: 0x24a59a70  addiu       $a1, $a1, -0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E3Cu; }
        if (ctx->pc != 0x207E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E3Cu; }
        if (ctx->pc != 0x207E3Cu) { return; }
    }
    ctx->pc = 0x207E3Cu;
label_207e3c:
    // 0x207e3c: 0x240300e7  addiu       $v1, $zero, 0xE7
    ctx->pc = 0x207e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x207e40: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207e44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x207E44u;
    {
        const bool branch_taken_0x207e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E44u;
            // 0x207e48: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e44) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207E4Cu;
label_207e4c:
    // 0x207e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_207e50:
    // 0x207e50: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207E50u;
    SET_GPR_U32(ctx, 31, 0x207E58u);
    ctx->pc = 0x207E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207E50u;
            // 0x207e54: 0x24a59a80  addiu       $a1, $a1, -0x6580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E58u; }
        if (ctx->pc != 0x207E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E58u; }
        if (ctx->pc != 0x207E58u) { return; }
    }
    ctx->pc = 0x207E58u;
label_207e58:
    // 0x207e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207E58u;
    {
        const bool branch_taken_0x207e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e58) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207E60u;
label_207e60:
    // 0x207e60: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x207E60u;
    {
        const bool branch_taken_0x207e60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e60) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207E68u;
    // 0x207e68: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e6c: 0xafb700d0  sw          $s7, 0xD0($sp)
    ctx->pc = 0x207e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 23));
label_207e70:
    // 0x207e70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207e74:
    // 0x207e74: 0x12c3006e  beq         $s6, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x207E74u;
    {
        const bool branch_taken_0x207e74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x207E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E74u;
            // 0x207e78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e74) {
            ctx->pc = 0x208030u;
            goto label_208030;
        }
    }
    ctx->pc = 0x207E7Cu;
    // 0x207e7c: 0x12c3004c  beq         $s6, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x207E7Cu;
    {
        const bool branch_taken_0x207e7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x207E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E7Cu;
            // 0x207e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e7c) {
            ctx->pc = 0x207FB0u;
            goto label_207fb0;
        }
    }
    ctx->pc = 0x207E84u;
    // 0x207e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e88: 0x12c30025  beq         $s6, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x207E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E88u;
            // 0x207e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e88) {
            ctx->pc = 0x207F20u;
            goto label_207f20;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x207E90u;
    {
        const bool branch_taken_0x207e90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E90u;
            // 0x207e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e90) {
            ctx->pc = 0x207ECCu;
            goto label_207ecc;
        }
    }
    ctx->pc = 0x207E98u;
    // 0x207e98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x207e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207e9c: 0x12c30003  beq         $s6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207E9Cu;
    {
        const bool branch_taken_0x207e9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x207EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E9Cu;
            // 0x207ea0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e9c) {
            ctx->pc = 0x207EACu;
            goto label_207eac;
        }
    }
    ctx->pc = 0x207EA4u;
    // 0x207ea4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x207EA4u;
    {
        const bool branch_taken_0x207ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207EA4u;
            // 0x207ea8: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea4) {
            ctx->pc = 0x208088u;
            goto label_208088;
        }
    }
    ctx->pc = 0x207EACu;
label_207eac:
    // 0x207eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207eb0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207EB0u;
    SET_GPR_U32(ctx, 31, 0x207EB8u);
    ctx->pc = 0x207EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207EB0u;
            // 0x207eb4: 0x24a59a90  addiu       $a1, $a1, -0x6570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EB8u; }
        if (ctx->pc != 0x207EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EB8u; }
        if (ctx->pc != 0x207EB8u) { return; }
    }
    ctx->pc = 0x207EB8u;
label_207eb8:
    // 0x207eb8: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207ebc: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207EBCu;
    SET_GPR_U32(ctx, 31, 0x207EC4u);
    ctx->pc = 0x207EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207EBCu;
            // 0x207ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EC4u; }
        if (ctx->pc != 0x207EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EC4u; }
        if (ctx->pc != 0x207EC4u) { return; }
    }
    ctx->pc = 0x207EC4u;
label_207ec4:
    // 0x207ec4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x207EC4u;
    {
        const bool branch_taken_0x207ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ec4) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207ECCu;
label_207ecc:
    // 0x207ecc: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207ECCu;
    SET_GPR_U32(ctx, 31, 0x207ED4u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207ED4u; }
        if (ctx->pc != 0x207ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207ED4u; }
        if (ctx->pc != 0x207ED4u) { return; }
    }
    ctx->pc = 0x207ED4u;
label_207ed4:
    // 0x207ed4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207ED4u;
    {
        const bool branch_taken_0x207ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ed4) {
            ctx->pc = 0x207EE4u;
            goto label_207ee4;
        }
    }
    ctx->pc = 0x207EDCu;
    // 0x207edc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x207EDCu;
    {
        const bool branch_taken_0x207edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207EDCu;
            // 0x207ee0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207edc) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207EE4u;
label_207ee4:
    // 0x207ee4: 0xae200d78  sw          $zero, 0xD78($s1)
    ctx->pc = 0x207ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3448), GPR_U32(ctx, 0));
    // 0x207ee8: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207eec: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207EECu;
    SET_GPR_U32(ctx, 31, 0x207EF4u);
    ctx->pc = 0x207EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207EECu;
            // 0x207ef0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EF4u; }
        if (ctx->pc != 0x207EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EF4u; }
        if (ctx->pc != 0x207EF4u) { return; }
    }
    ctx->pc = 0x207EF4u;
label_207ef4:
    // 0x207ef4: 0xc088914  jal         func_222450
    ctx->pc = 0x207EF4u;
    SET_GPR_U32(ctx, 31, 0x207EFCu);
    ctx->pc = 0x222450u;
    if (runtime->hasFunction(0x222450u)) {
        auto targetFn = runtime->lookupFunction(0x222450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EFCu; }
        if (ctx->pc != 0x207EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuDlTexture__Fv_0x222450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EFCu; }
        if (ctx->pc != 0x207EFCu) { return; }
    }
    ctx->pc = 0x207EFCu;
label_207efc:
    // 0x207efc: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f04: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x207F04u;
    SET_GPR_U32(ctx, 31, 0x207F0Cu);
    ctx->pc = 0x207F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F04u;
            // 0x207f08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F0Cu; }
        if (ctx->pc != 0x207F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F0Cu; }
        if (ctx->pc != 0x207F0Cu) { return; }
    }
    ctx->pc = 0x207F0Cu;
label_207f0c:
    // 0x207f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f10: 0xc08891c  jal         func_222470
    ctx->pc = 0x207F10u;
    SET_GPR_U32(ctx, 31, 0x207F18u);
    ctx->pc = 0x207F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F10u;
            // 0x207f14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F18u; }
        if (ctx->pc != 0x207F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F18u; }
        if (ctx->pc != 0x207F18u) { return; }
    }
    ctx->pc = 0x207F18u;
label_207f18:
    // 0x207f18: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x207F18u;
    {
        const bool branch_taken_0x207f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207f18) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207F20u;
label_207f20:
    // 0x207f20: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207F20u;
    SET_GPR_U32(ctx, 31, 0x207F28u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F28u; }
        if (ctx->pc != 0x207F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F28u; }
        if (ctx->pc != 0x207F28u) { return; }
    }
    ctx->pc = 0x207F28u;
label_207f28:
    // 0x207f28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207F28u;
    {
        const bool branch_taken_0x207f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207f28) {
            ctx->pc = 0x207F38u;
            goto label_207f38;
        }
    }
    ctx->pc = 0x207F30u;
    // 0x207f30: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x207F30u;
    {
        const bool branch_taken_0x207f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F30u;
            // 0x207f34: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f30) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207F38u;
label_207f38:
    // 0x207f38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x207f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207f40: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x207F40u;
    {
        const bool branch_taken_0x207f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x207f40) {
            ctx->pc = 0x207F64u;
            goto label_207f64;
        }
    }
    ctx->pc = 0x207F48u;
    // 0x207f48: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207f4c: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207F4Cu;
    SET_GPR_U32(ctx, 31, 0x207F54u);
    ctx->pc = 0x207F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F4Cu;
            // 0x207f50: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F54u; }
        if (ctx->pc != 0x207F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F54u; }
        if (ctx->pc != 0x207F54u) { return; }
    }
    ctx->pc = 0x207F54u;
label_207f54:
    // 0x207f54: 0x8f8390e0  lw          $v1, -0x6F20($gp)
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207f58: 0x8c630914  lw          $v1, 0x914($v1)
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2324)));
    // 0x207f5c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x207F5Cu;
    {
        const bool branch_taken_0x207f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F5Cu;
            // 0x207f60: 0xae230d78  sw          $v1, 0xD78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f5c) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207F64u;
label_207f64:
    // 0x207f64: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x207F64u;
    {
        const bool branch_taken_0x207f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207f64) {
            ctx->pc = 0x207F8Cu;
            goto label_207f8c;
        }
    }
    ctx->pc = 0x207F6Cu;
    // 0x207f6c: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x207f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x207f70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x207f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f78: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x207f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x207f7c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207F7Cu;
    SET_GPR_U32(ctx, 31, 0x207F84u);
    ctx->pc = 0x207F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F7Cu;
            // 0x207f80: 0x24a599f0  addiu       $a1, $a1, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F84u; }
        if (ctx->pc != 0x207F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F84u; }
        if (ctx->pc != 0x207F84u) { return; }
    }
    ctx->pc = 0x207F84u;
label_207f84:
    // 0x207f84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x207F84u;
    {
        const bool branch_taken_0x207f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207f84) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207F8Cu;
label_207f8c:
    // 0x207f8c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x207f90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207f94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207f98: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207F98u;
    {
        const bool branch_taken_0x207f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x207f98) {
            ctx->pc = 0x207FA8u;
            goto label_207fa8;
        }
    }
    ctx->pc = 0x207FA0u;
    // 0x207fa0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x207FA0u;
    {
        const bool branch_taken_0x207fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FA0u;
            // 0x207fa4: 0xafa500f0  sw          $a1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fa0) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207FA8u;
label_207fa8:
    // 0x207fa8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x207FA8u;
    {
        const bool branch_taken_0x207fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FA8u;
            // 0x207fac: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fa8) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207FB0u;
label_207fb0:
    // 0x207fb0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x207FB0u;
    SET_GPR_U32(ctx, 31, 0x207FB8u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FB8u; }
        if (ctx->pc != 0x207FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FB8u; }
        if (ctx->pc != 0x207FB8u) { return; }
    }
    ctx->pc = 0x207FB8u;
label_207fb8:
    // 0x207fb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207FB8u;
    {
        const bool branch_taken_0x207fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207fb8) {
            ctx->pc = 0x207FC8u;
            goto label_207fc8;
        }
    }
    ctx->pc = 0x207FC0u;
    // 0x207fc0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x207FC0u;
    {
        const bool branch_taken_0x207fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FC0u;
            // 0x207fc4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fc0) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x207FC8u;
label_207fc8:
    // 0x207fc8: 0xae200d78  sw          $zero, 0xD78($s1)
    ctx->pc = 0x207fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3448), GPR_U32(ctx, 0));
    // 0x207fcc: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207fd0: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x207FD0u;
    SET_GPR_U32(ctx, 31, 0x207FD8u);
    ctx->pc = 0x207FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207FD0u;
            // 0x207fd4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FD8u; }
        if (ctx->pc != 0x207FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FD8u; }
        if (ctx->pc != 0x207FD8u) { return; }
    }
    ctx->pc = 0x207FD8u;
label_207fd8:
    // 0x207fd8: 0xc088914  jal         func_222450
    ctx->pc = 0x207FD8u;
    SET_GPR_U32(ctx, 31, 0x207FE0u);
    ctx->pc = 0x222450u;
    if (runtime->hasFunction(0x222450u)) {
        auto targetFn = runtime->lookupFunction(0x222450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FE0u; }
        if (ctx->pc != 0x207FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuDlTexture__Fv_0x222450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FE0u; }
        if (ctx->pc != 0x207FE0u) { return; }
    }
    ctx->pc = 0x207FE0u;
label_207fe0:
    // 0x207fe0: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x207fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x207fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fe8: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x207FE8u;
    SET_GPR_U32(ctx, 31, 0x207FF0u);
    ctx->pc = 0x207FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207FE8u;
            // 0x207fec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FF0u; }
        if (ctx->pc != 0x207FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FF0u; }
        if (ctx->pc != 0x207FF0u) { return; }
    }
    ctx->pc = 0x207FF0u;
label_207ff0:
    // 0x207ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ff4: 0xc08891c  jal         func_222470
    ctx->pc = 0x207FF4u;
    SET_GPR_U32(ctx, 31, 0x207FFCu);
    ctx->pc = 0x207FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207FF4u;
            // 0x207ff8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FFCu; }
        if (ctx->pc != 0x207FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FFCu; }
        if (ctx->pc != 0x207FFCu) { return; }
    }
    ctx->pc = 0x207FFCu;
label_207ffc:
    // 0x207ffc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x207ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x208000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208004: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x208004u;
    SET_GPR_U32(ctx, 31, 0x20800Cu);
    ctx->pc = 0x208008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208004u;
            // 0x208008: 0x24a59aa8  addiu       $a1, $a1, -0x6558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20800Cu; }
        if (ctx->pc != 0x20800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20800Cu; }
        if (ctx->pc != 0x20800Cu) { return; }
    }
    ctx->pc = 0x20800Cu;
label_20800c:
    // 0x20800c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20800cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x208010: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x208010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x208014: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x208014u;
    {
        const bool branch_taken_0x208014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208014) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x20801Cu;
    // 0x20801c: 0x83829170  lb          $v0, -0x6E90($gp)
    ctx->pc = 0x20801cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x208020: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x208020u;
    SET_GPR_U32(ctx, 31, 0x208028u);
    ctx->pc = 0x208024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208020u;
            // 0x208024: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208028u; }
        if (ctx->pc != 0x208028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208028u; }
        if (ctx->pc != 0x208028u) { return; }
    }
    ctx->pc = 0x208028u;
label_208028:
    // 0x208028: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x208028u;
    {
        const bool branch_taken_0x208028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208028) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x208030u;
label_208030:
    // 0x208030: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x208030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x208034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208038: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x208038u;
    {
        const bool branch_taken_0x208038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208038u;
            // 0x20803c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208038) {
            ctx->pc = 0x20806Cu;
            goto label_20806c;
        }
    }
    ctx->pc = 0x208040u;
    // 0x208040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208044: 0xc08891c  jal         func_222470
    ctx->pc = 0x208044u;
    SET_GPR_U32(ctx, 31, 0x20804Cu);
    ctx->pc = 0x208048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208044u;
            // 0x208048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20804Cu; }
        if (ctx->pc != 0x20804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20804Cu; }
        if (ctx->pc != 0x20804Cu) { return; }
    }
    ctx->pc = 0x20804Cu;
label_20804c:
    // 0x20804c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20804cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x208050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208054: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x208054u;
    SET_GPR_U32(ctx, 31, 0x20805Cu);
    ctx->pc = 0x208058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208054u;
            // 0x208058: 0x24a59ab0  addiu       $a1, $a1, -0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20805Cu; }
        if (ctx->pc != 0x20805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20805Cu; }
        if (ctx->pc != 0x20805Cu) { return; }
    }
    ctx->pc = 0x20805Cu;
label_20805c:
    // 0x20805c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x20805Cu;
    SET_GPR_U32(ctx, 31, 0x208064u);
    ctx->pc = 0x208060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20805Cu;
            // 0x208060: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208064u; }
        if (ctx->pc != 0x208064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208064u; }
        if (ctx->pc != 0x208064u) { return; }
    }
    ctx->pc = 0x208064u;
label_208064:
    // 0x208064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208064u;
    {
        const bool branch_taken_0x208064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208064) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x20806Cu;
label_20806c:
    // 0x20806c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20806Cu;
    {
        const bool branch_taken_0x20806c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x208070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20806Cu;
            // 0x208070: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20806c) {
            ctx->pc = 0x208080u;
            goto label_208080;
        }
    }
    ctx->pc = 0x208074u;
    // 0x208074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208078u;
    {
        const bool branch_taken_0x208078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208078u;
            // 0x20807c: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208078) {
            ctx->pc = 0x208084u;
            goto label_208084;
        }
    }
    ctx->pc = 0x208080u;
label_208080:
    // 0x208080: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x208080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_208084:
    // 0x208084: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_208088:
    // 0x208088: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x208088u;
    {
        const bool branch_taken_0x208088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208088) {
            ctx->pc = 0x208134u;
            goto label_208134;
        }
    }
    ctx->pc = 0x208090u;
    // 0x208090: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x208094: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x208094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208098: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x208098u;
    {
        const bool branch_taken_0x208098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208098u;
            // 0x20809c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208098) {
            ctx->pc = 0x208130u;
            goto label_208130;
        }
    }
    ctx->pc = 0x2080A0u;
    // 0x2080a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2080a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2080a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2080a8: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2080A8u;
    {
        const bool branch_taken_0x2080a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2080a8) {
            ctx->pc = 0x20812Cu;
            goto label_20812c;
        }
    }
    ctx->pc = 0x2080B0u;
    // 0x2080b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2080b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2080B4u;
    {
        const bool branch_taken_0x2080b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2080B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080B4u;
            // 0x2080b8: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080b4) {
            ctx->pc = 0x2080D8u;
            goto label_2080d8;
        }
    }
    ctx->pc = 0x2080BCu;
    // 0x2080bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2080bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2080c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2080c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080c4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2080c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2080c8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2080C8u;
    SET_GPR_U32(ctx, 31, 0x2080D0u);
    ctx->pc = 0x2080CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2080C8u;
            // 0x2080cc: 0x24a599f0  addiu       $a1, $a1, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080D0u; }
        if (ctx->pc != 0x2080D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080D0u; }
        if (ctx->pc != 0x2080D0u) { return; }
    }
    ctx->pc = 0x2080D0u;
label_2080d0:
    // 0x2080d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2080D0u;
    {
        const bool branch_taken_0x2080d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080D0u;
            // 0x2080d4: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080d0) {
            ctx->pc = 0x208138u;
            goto label_208138;
        }
    }
    ctx->pc = 0x2080D8u;
label_2080d8:
    // 0x2080d8: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x2080d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
    // 0x2080dc: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2080DCu;
    SET_GPR_U32(ctx, 31, 0x2080E4u);
    ctx->pc = 0x2080E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2080DCu;
            // 0x2080e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080E4u; }
        if (ctx->pc != 0x2080E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080E4u; }
        if (ctx->pc != 0x2080E4u) { return; }
    }
    ctx->pc = 0x2080E4u;
label_2080e4:
    // 0x2080e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2080e8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x2080e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2080ec: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2080ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2080f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2080F0u;
    {
        const bool branch_taken_0x2080f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080F0u;
            // 0x2080f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080f0) {
            ctx->pc = 0x208100u;
            goto label_208100;
        }
    }
    ctx->pc = 0x2080F8u;
    // 0x2080f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2080F8u;
    {
        const bool branch_taken_0x2080f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080F8u;
            // 0x2080fc: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080f8) {
            ctx->pc = 0x208134u;
            goto label_208134;
        }
    }
    ctx->pc = 0x208100u;
label_208100:
    // 0x208100: 0x8e230d7c  lw          $v1, 0xD7C($s1)
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x208104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208108: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208108u;
    {
        const bool branch_taken_0x208108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208108u;
            // 0x20810c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208108) {
            ctx->pc = 0x208118u;
            goto label_208118;
        }
    }
    ctx->pc = 0x208110u;
    // 0x208110: 0x240200e6  addiu       $v0, $zero, 0xE6
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x208114: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x208114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_208118:
    // 0x208118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20811c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20811Cu;
    SET_GPR_U32(ctx, 31, 0x208124u);
    ctx->pc = 0x208120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20811Cu;
            // 0x208120: 0x24a59ac0  addiu       $a1, $a1, -0x6540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208124u; }
        if (ctx->pc != 0x208124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208124u; }
        if (ctx->pc != 0x208124u) { return; }
    }
    ctx->pc = 0x208124u;
label_208124:
    // 0x208124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208124u;
    {
        const bool branch_taken_0x208124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208124) {
            ctx->pc = 0x208134u;
            goto label_208134;
        }
    }
    ctx->pc = 0x20812Cu;
label_20812c:
    // 0x20812c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208130:
    // 0x208130: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x208130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_208134:
    // 0x208134: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_208138:
    // 0x208138: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x208138u;
    {
        const bool branch_taken_0x208138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208138u;
            // 0x20813c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208138) {
            ctx->pc = 0x20817Cu;
            goto label_20817c;
        }
    }
    ctx->pc = 0x208140u;
    // 0x208140: 0xc08891c  jal         func_222470
    ctx->pc = 0x208140u;
    SET_GPR_U32(ctx, 31, 0x208148u);
    ctx->pc = 0x208144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208140u;
            // 0x208144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208148u; }
        if (ctx->pc != 0x208148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208148u; }
        if (ctx->pc != 0x208148u) { return; }
    }
    ctx->pc = 0x208148u;
label_208148:
    // 0x208148: 0x8e220d7c  lw          $v0, 0xD7C($s1)
    ctx->pc = 0x208148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x20814c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20814Cu;
    {
        const bool branch_taken_0x20814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20814Cu;
            // 0x208150: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20814c) {
            ctx->pc = 0x208158u;
            goto label_208158;
        }
    }
    ctx->pc = 0x208154u;
    // 0x208154: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x208154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_208158:
    // 0x208158: 0x8e230d7c  lw          $v1, 0xD7C($s1)
    ctx->pc = 0x208158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x20815c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208160: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208160u;
    {
        const bool branch_taken_0x208160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208160u;
            // 0x208164: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208160) {
            ctx->pc = 0x208170u;
            goto label_208170;
        }
    }
    ctx->pc = 0x208168u;
    // 0x208168: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20816c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x20816cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_208170:
    // 0x208170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208174: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x208174u;
    SET_GPR_U32(ctx, 31, 0x20817Cu);
    ctx->pc = 0x208178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208174u;
            // 0x208178: 0x24a59ad0  addiu       $a1, $a1, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20817Cu; }
        if (ctx->pc != 0x20817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20817Cu; }
        if (ctx->pc != 0x20817Cu) { return; }
    }
    ctx->pc = 0x20817Cu;
label_20817c:
    // 0x20817c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x20817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x208180: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x208180u;
    {
        const bool branch_taken_0x208180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208180u;
            // 0x208184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208180) {
            ctx->pc = 0x2081D8u;
            goto label_2081d8;
        }
    }
    ctx->pc = 0x208188u;
    // 0x208188: 0xc08891c  jal         func_222470
    ctx->pc = 0x208188u;
    SET_GPR_U32(ctx, 31, 0x208190u);
    ctx->pc = 0x20818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208188u;
            // 0x20818c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208190u; }
        if (ctx->pc != 0x208190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208190u; }
        if (ctx->pc != 0x208190u) { return; }
    }
    ctx->pc = 0x208190u;
label_208190:
    // 0x208190: 0x8e220d7c  lw          $v0, 0xD7C($s1)
    ctx->pc = 0x208190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x208194: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x208194u;
    {
        const bool branch_taken_0x208194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208194u;
            // 0x208198: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208194) {
            ctx->pc = 0x2081A0u;
            goto label_2081a0;
        }
    }
    ctx->pc = 0x20819Cu;
    // 0x20819c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x20819cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_2081a0:
    // 0x2081a0: 0x8e230d7c  lw          $v1, 0xD7C($s1)
    ctx->pc = 0x2081a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x2081a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2081a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2081a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2081A8u;
    {
        const bool branch_taken_0x2081a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2081ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2081A8u;
            // 0x2081ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081a8) {
            ctx->pc = 0x2081B8u;
            goto label_2081b8;
        }
    }
    ctx->pc = 0x2081B0u;
    // 0x2081b0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2081b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2081b4: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2081b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_2081b8:
    // 0x2081b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2081b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081bc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2081BCu;
    SET_GPR_U32(ctx, 31, 0x2081C4u);
    ctx->pc = 0x2081C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2081BCu;
            // 0x2081c0: 0x24a59ae0  addiu       $a1, $a1, -0x6520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081C4u; }
        if (ctx->pc != 0x2081C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081C4u; }
        if (ctx->pc != 0x2081C4u) { return; }
    }
    ctx->pc = 0x2081C4u;
label_2081c4:
    // 0x2081c4: 0x83829170  lb          $v0, -0x6E90($gp)
    ctx->pc = 0x2081c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x2081c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2081cc: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x2081ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2081d0: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2081D0u;
    SET_GPR_U32(ctx, 31, 0x2081D8u);
    ctx->pc = 0x2081D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2081D0u;
            // 0x2081d4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081D8u; }
        if (ctx->pc != 0x2081D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081D8u; }
        if (ctx->pc != 0x2081D8u) { return; }
    }
    ctx->pc = 0x2081D8u;
label_2081d8:
    // 0x2081d8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2081dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2081e0: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2081E0u;
    {
        const bool branch_taken_0x2081e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2081E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2081E0u;
            // 0x2081e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081e0) {
            ctx->pc = 0x208224u;
            goto label_208224;
        }
    }
    ctx->pc = 0x2081E8u;
    // 0x2081e8: 0xc08891c  jal         func_222470
    ctx->pc = 0x2081E8u;
    SET_GPR_U32(ctx, 31, 0x2081F0u);
    ctx->pc = 0x2081ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2081E8u;
            // 0x2081ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081F0u; }
        if (ctx->pc != 0x2081F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081F0u; }
        if (ctx->pc != 0x2081F0u) { return; }
    }
    ctx->pc = 0x2081F0u;
label_2081f0:
    // 0x2081f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2081f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2081f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081f8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2081F8u;
    SET_GPR_U32(ctx, 31, 0x208200u);
    ctx->pc = 0x2081FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2081F8u;
            // 0x2081fc: 0x24a59af8  addiu       $a1, $a1, -0x6508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208200u; }
        if (ctx->pc != 0x208200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208200u; }
        if (ctx->pc != 0x208200u) { return; }
    }
    ctx->pc = 0x208200u;
label_208200:
    // 0x208200: 0x8e230d7c  lw          $v1, 0xD7C($s1)
    ctx->pc = 0x208200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x208204: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208204u;
    {
        const bool branch_taken_0x208204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208204u;
            // 0x208208: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208204) {
            ctx->pc = 0x208210u;
            goto label_208210;
        }
    }
    ctx->pc = 0x20820Cu;
    // 0x20820c: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x20820cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_208210:
    // 0x208210: 0x8e240d7c  lw          $a0, 0xD7C($s1)
    ctx->pc = 0x208210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3452)));
    // 0x208214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208218: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208218u;
    {
        const bool branch_taken_0x208218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208218u;
            // 0x20821c: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208218) {
            ctx->pc = 0x208224u;
            goto label_208224;
        }
    }
    ctx->pc = 0x208220u;
    // 0x208220: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x208220u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_208224:
    // 0x208224: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x208224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x208228: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208228u;
    {
        const bool branch_taken_0x208228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208228u;
            // 0x20822c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208228) {
            ctx->pc = 0x208244u;
            goto label_208244;
        }
    }
    ctx->pc = 0x208230u;
    // 0x208230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208234: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x208234u;
    SET_GPR_U32(ctx, 31, 0x20823Cu);
    ctx->pc = 0x208238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208234u;
            // 0x208238: 0x24a59b08  addiu       $a1, $a1, -0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20823Cu; }
        if (ctx->pc != 0x20823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20823Cu; }
        if (ctx->pc != 0x20823Cu) { return; }
    }
    ctx->pc = 0x20823Cu;
label_20823c:
    // 0x20823c: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x20823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x208240: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x208240u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_208244:
    // 0x208244: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x208244u;
    {
        const bool branch_taken_0x208244 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x208248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208244u;
            // 0x208248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208244) {
            ctx->pc = 0x20826Cu;
            goto label_20826c;
        }
    }
    ctx->pc = 0x20824Cu;
    // 0x20824c: 0xc08891c  jal         func_222470
    ctx->pc = 0x20824Cu;
    SET_GPR_U32(ctx, 31, 0x208254u);
    ctx->pc = 0x208250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20824Cu;
            // 0x208250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208254u; }
        if (ctx->pc != 0x208254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208254u; }
        if (ctx->pc != 0x208254u) { return; }
    }
    ctx->pc = 0x208254u;
label_208254:
    // 0x208254: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x208258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20825c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20825Cu;
    SET_GPR_U32(ctx, 31, 0x208264u);
    ctx->pc = 0x208260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20825Cu;
            // 0x208260: 0x24a59af8  addiu       $a1, $a1, -0x6508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208264u; }
        if (ctx->pc != 0x208264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208264u; }
        if (ctx->pc != 0x208264u) { return; }
    }
    ctx->pc = 0x208264u;
label_208264:
    // 0x208264: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x208264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x208268: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x208268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_20826c:
    // 0x20826c: 0x12a0003f  beqz        $s5, . + 4 + (0x3F << 2)
    ctx->pc = 0x20826Cu;
    {
        const bool branch_taken_0x20826c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x20826c) {
            ctx->pc = 0x20836Cu;
            goto label_20836c;
        }
    }
    ctx->pc = 0x208274u;
    // 0x208274: 0xc07f9e4  jal         func_1FE790
    ctx->pc = 0x208274u;
    SET_GPR_U32(ctx, 31, 0x20827Cu);
    ctx->pc = 0x208278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208274u;
            // 0x208278: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE790u;
    if (runtime->hasFunction(0x1FE790u)) {
        auto targetFn = runtime->lookupFunction(0x1FE790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20827Cu; }
        if (ctx->pc != 0x20827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RelateAlbumPicData__13CDC2AlbumDataFv_0x1fe790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20827Cu; }
        if (ctx->pc != 0x20827Cu) { return; }
    }
    ctx->pc = 0x20827Cu;
label_20827c:
    // 0x20827c: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x20827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x208280: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x208280u;
    SET_GPR_U32(ctx, 31, 0x208288u);
    ctx->pc = 0x208284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208280u;
            // 0x208284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208288u; }
        if (ctx->pc != 0x208288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208288u; }
        if (ctx->pc != 0x208288u) { return; }
    }
    ctx->pc = 0x208288u;
label_208288:
    // 0x208288: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x208288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x20828c: 0x26250440  addiu       $a1, $s1, 0x440
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x208290: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x208290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208294: 0xc07f958  jal         func_1FE560
    ctx->pc = 0x208294u;
    SET_GPR_U32(ctx, 31, 0x20829Cu);
    ctx->pc = 0x208298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208294u;
            // 0x208298: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20829Cu; }
        if (ctx->pc != 0x20829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20829Cu; }
        if (ctx->pc != 0x20829Cu) { return; }
    }
    ctx->pc = 0x20829Cu;
label_20829c:
    // 0x20829c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2082a0: 0x16a3000b  bne         $s5, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2082A0u;
    {
        const bool branch_taken_0x2082a0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2082A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082A0u;
            // 0x2082a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082a0) {
            ctx->pc = 0x2082D0u;
            goto label_2082d0;
        }
    }
    ctx->pc = 0x2082A8u;
    // 0x2082a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2082a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2082ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2082acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082b0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2082B0u;
    SET_GPR_U32(ctx, 31, 0x2082B8u);
    ctx->pc = 0x2082B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2082B0u;
            // 0x2082b4: 0x24a59b18  addiu       $a1, $a1, -0x64E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082B8u; }
        if (ctx->pc != 0x2082B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082B8u; }
        if (ctx->pc != 0x2082B8u) { return; }
    }
    ctx->pc = 0x2082B8u;
label_2082b8:
    // 0x2082b8: 0x83829170  lb          $v0, -0x6E90($gp)
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x2082bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2082bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2082c0: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x2082c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x2082c4: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2082C4u;
    SET_GPR_U32(ctx, 31, 0x2082CCu);
    ctx->pc = 0x2082C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2082C4u;
            // 0x2082c8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082CCu; }
        if (ctx->pc != 0x2082CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082CCu; }
        if (ctx->pc != 0x2082CCu) { return; }
    }
    ctx->pc = 0x2082CCu;
label_2082cc:
    // 0x2082cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2082ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2082d0:
    // 0x2082d0: 0x16a30006  bne         $s5, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2082D0u;
    {
        const bool branch_taken_0x2082d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2082D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082D0u;
            // 0x2082d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082d0) {
            ctx->pc = 0x2082ECu;
            goto label_2082ec;
        }
    }
    ctx->pc = 0x2082D8u;
    // 0x2082d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2082d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2082dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2082dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082e0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2082E0u;
    SET_GPR_U32(ctx, 31, 0x2082E8u);
    ctx->pc = 0x2082E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2082E0u;
            // 0x2082e4: 0x24a59b28  addiu       $a1, $a1, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082E8u; }
        if (ctx->pc != 0x2082E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2082E8u; }
        if (ctx->pc != 0x2082E8u) { return; }
    }
    ctx->pc = 0x2082E8u;
label_2082e8:
    // 0x2082e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2082e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2082ec:
    // 0x2082ec: 0x16a30008  bne         $s5, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2082ECu;
    {
        const bool branch_taken_0x2082ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2082F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082ECu;
            // 0x2082f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082ec) {
            ctx->pc = 0x208310u;
            goto label_208310;
        }
    }
    ctx->pc = 0x2082F4u;
    // 0x2082f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2082f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2082f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2082f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082fc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2082FCu;
    SET_GPR_U32(ctx, 31, 0x208304u);
    ctx->pc = 0x208300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2082FCu;
            // 0x208300: 0x24a59b38  addiu       $a1, $a1, -0x64C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208304u; }
        if (ctx->pc != 0x208304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208304u; }
        if (ctx->pc != 0x208304u) { return; }
    }
    ctx->pc = 0x208304u;
label_208304:
    // 0x208304: 0xc094274  jal         func_2509D0
    ctx->pc = 0x208304u;
    SET_GPR_U32(ctx, 31, 0x20830Cu);
    ctx->pc = 0x208308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208304u;
            // 0x208308: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20830Cu; }
        if (ctx->pc != 0x20830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20830Cu; }
        if (ctx->pc != 0x20830Cu) { return; }
    }
    ctx->pc = 0x20830Cu;
label_20830c:
    // 0x20830c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208310:
    // 0x208310: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x208314: 0xa2240eb6  sb          $a0, 0xEB6($s1)
    ctx->pc = 0x208314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3766), (uint8_t)GPR_U32(ctx, 4));
    // 0x208318: 0x6a10014  bgez        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x208318u;
    {
        const bool branch_taken_0x208318 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x20831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208318u;
            // 0x20831c: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208318) {
            ctx->pc = 0x20836Cu;
            goto label_20836c;
        }
    }
    ctx->pc = 0x208320u;
    // 0x208320: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x208324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208328: 0x24a59b40  addiu       $a1, $a1, -0x64C0
    ctx->pc = 0x208328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941504));
    // 0x20832c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20832Cu;
    SET_GPR_U32(ctx, 31, 0x208334u);
    ctx->pc = 0x208330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20832Cu;
            // 0x208330: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208334u; }
        if (ctx->pc != 0x208334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208334u; }
        if (ctx->pc != 0x208334u) { return; }
    }
    ctx->pc = 0x208334u;
label_208334:
    // 0x208334: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x208334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x208338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20833c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20833Cu;
    SET_GPR_U32(ctx, 31, 0x208344u);
    ctx->pc = 0x208340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20833Cu;
            // 0x208340: 0x24a59b50  addiu       $a1, $a1, -0x64B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208344u; }
        if (ctx->pc != 0x208344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208344u; }
        if (ctx->pc != 0x208344u) { return; }
    }
    ctx->pc = 0x208344u;
label_208344:
    // 0x208344: 0xc052330  jal         func_148CC0
    ctx->pc = 0x208344u;
    SET_GPR_U32(ctx, 31, 0x20834Cu);
    ctx->pc = 0x208348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208344u;
            // 0x208348: 0xa2200634  sb          $zero, 0x634($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1588), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20834Cu; }
        if (ctx->pc != 0x20834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20834Cu; }
        if (ctx->pc != 0x20834Cu) { return; }
    }
    ctx->pc = 0x20834Cu;
label_20834c:
    // 0x20834c: 0xc0bc668  jal         func_2F19A0
    ctx->pc = 0x20834Cu;
    SET_GPR_U32(ctx, 31, 0x208354u);
    ctx->pc = 0x208350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20834Cu;
            // 0x208350: 0x8f8490e0  lw          $a0, -0x6F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19A0u;
    if (runtime->hasFunction(0x2F19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208354u; }
        if (ctx->pc != 0x208354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishForMC__18CMemoryCardManagerFv_0x2f19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208354u; }
        if (ctx->pc != 0x208354u) { return; }
    }
    ctx->pc = 0x208354u;
label_208354:
    // 0x208354: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x208354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x208358: 0xaf8090e0  sw          $zero, -0x6F20($gp)
    ctx->pc = 0x208358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 0));
    // 0x20835c: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x20835cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x208360: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x208364: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x208364u;
    {
        const bool branch_taken_0x208364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208364u;
            // 0x208368: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208364) {
            ctx->pc = 0x20846Cu;
            goto label_20846c;
        }
    }
    ctx->pc = 0x20836Cu;
label_20836c:
    // 0x20836c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x20836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x208370: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x208370u;
    {
        const bool branch_taken_0x208370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208370u;
            // 0x208374: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208370) {
            ctx->pc = 0x2083D4u;
            goto label_2083d4;
        }
    }
    ctx->pc = 0x208378u;
    // 0x208378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20837c: 0x8c23cb40  lw          $v1, -0x34C0($at)
    ctx->pc = 0x20837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953792)));
    // 0x208380: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x208380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x208384: 0x86230110  lh          $v1, 0x110($s1)
    ctx->pc = 0x208384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x208388: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x208388u;
    {
        const bool branch_taken_0x208388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208388u;
            // 0x20838c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208388) {
            ctx->pc = 0x208394u;
            goto label_208394;
        }
    }
    ctx->pc = 0x208390u;
    // 0x208390: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_208394:
    // 0x208394: 0xc0807e0  jal         func_201F80
    ctx->pc = 0x208394u;
    SET_GPR_U32(ctx, 31, 0x20839Cu);
    ctx->pc = 0x208398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208394u;
            // 0x208398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20839Cu; }
        if (ctx->pc != 0x20839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrepareNextMode__11CMenuInventFi_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20839Cu; }
        if (ctx->pc != 0x20839Cu) { return; }
    }
    ctx->pc = 0x20839Cu;
label_20839c:
    // 0x20839c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x20839cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2083a0: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x2083a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2083a4: 0xa2200634  sb          $zero, 0x634($s1)
    ctx->pc = 0x2083a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1588), (uint8_t)GPR_U32(ctx, 0));
    // 0x2083a8: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x2083a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x2083ac: 0xc0bc668  jal         func_2F19A0
    ctx->pc = 0x2083ACu;
    SET_GPR_U32(ctx, 31, 0x2083B4u);
    ctx->pc = 0x2083B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2083ACu;
            // 0x2083b0: 0x8f8490e0  lw          $a0, -0x6F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19A0u;
    if (runtime->hasFunction(0x2F19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083B4u; }
        if (ctx->pc != 0x2083B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishForMC__18CMemoryCardManagerFv_0x2f19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083B4u; }
        if (ctx->pc != 0x2083B4u) { return; }
    }
    ctx->pc = 0x2083B4u;
label_2083b4:
    // 0x2083b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2083b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2083b8: 0xaf8090e0  sw          $zero, -0x6F20($gp)
    ctx->pc = 0x2083b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 0));
    // 0x2083bc: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2083bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x2083c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2083c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2083c4: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2083C4u;
    SET_GPR_U32(ctx, 31, 0x2083CCu);
    ctx->pc = 0x2083C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2083C4u;
            // 0x2083c8: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083CCu; }
        if (ctx->pc != 0x2083CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083CCu; }
        if (ctx->pc != 0x2083CCu) { return; }
    }
    ctx->pc = 0x2083CCu;
label_2083cc:
    // 0x2083cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2083CCu;
    {
        const bool branch_taken_0x2083cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2083CCu;
            // 0x2083d0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083cc) {
            ctx->pc = 0x208470u;
            goto label_208470;
        }
    }
    ctx->pc = 0x2083D4u;
label_2083d4:
    // 0x2083d4: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2083D4u;
    {
        const bool branch_taken_0x2083d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2083D4u;
            // 0x2083d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083d4) {
            ctx->pc = 0x2083FCu;
            goto label_2083fc;
        }
    }
    ctx->pc = 0x2083DCu;
    // 0x2083dc: 0xc0807e0  jal         func_201F80
    ctx->pc = 0x2083DCu;
    SET_GPR_U32(ctx, 31, 0x2083E4u);
    ctx->pc = 0x2083E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2083DCu;
            // 0x2083e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083E4u; }
        if (ctx->pc != 0x2083E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrepareNextMode__11CMenuInventFi_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083E4u; }
        if (ctx->pc != 0x2083E4u) { return; }
    }
    ctx->pc = 0x2083E4u;
label_2083e4:
    // 0x2083e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2083e8: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x2083e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2083ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2083ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083f0: 0x24a59b60  addiu       $a1, $a1, -0x64A0
    ctx->pc = 0x2083f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941536));
    // 0x2083f4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2083F4u;
    SET_GPR_U32(ctx, 31, 0x2083FCu);
    ctx->pc = 0x2083F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2083F4u;
            // 0x2083f8: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083FCu; }
        if (ctx->pc != 0x2083FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083FCu; }
        if (ctx->pc != 0x2083FCu) { return; }
    }
    ctx->pc = 0x2083FCu;
label_2083fc:
    // 0x2083fc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2083fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x208400: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208400u;
    {
        const bool branch_taken_0x208400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208400u;
            // 0x208404: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208400) {
            ctx->pc = 0x20841Cu;
            goto label_20841c;
        }
    }
    ctx->pc = 0x208408u;
    // 0x208408: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x208408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20840c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208410: 0x24a59b60  addiu       $a1, $a1, -0x64A0
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941536));
    // 0x208414: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x208414u;
    SET_GPR_U32(ctx, 31, 0x20841Cu);
    ctx->pc = 0x208418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208414u;
            // 0x208418: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20841Cu; }
        if (ctx->pc != 0x20841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20841Cu; }
        if (ctx->pc != 0x20841Cu) { return; }
    }
    ctx->pc = 0x20841Cu;
label_20841c:
    // 0x20841c: 0x8e240f1c  lw          $a0, 0xF1C($s1)
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3868)));
    // 0x208420: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x208420u;
    {
        const bool branch_taken_0x208420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208420u;
            // 0x208424: 0x27b0014c  addiu       $s0, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208420) {
            ctx->pc = 0x20846Cu;
            goto label_20846c;
        }
    }
    ctx->pc = 0x208428u;
    // 0x208428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20842c: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x208430: 0xc08974c  jal         func_225D30
    ctx->pc = 0x208430u;
    SET_GPR_U32(ctx, 31, 0x208438u);
    ctx->pc = 0x208434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208430u;
            // 0x208434: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208438u; }
        if (ctx->pc != 0x208438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208438u; }
        if (ctx->pc != 0x208438u) { return; }
    }
    ctx->pc = 0x208438u;
label_208438:
    // 0x208438: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20843c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x208440: 0x2442001a  addiu       $v0, $v0, 0x1A
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x208444: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x208444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x208448: 0xc087898  jal         func_21E260
    ctx->pc = 0x208448u;
    SET_GPR_U32(ctx, 31, 0x208450u);
    ctx->pc = 0x20844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208448u;
            // 0x20844c: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208450u; }
        if (ctx->pc != 0x208450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208450u; }
        if (ctx->pc != 0x208450u) { return; }
    }
    ctx->pc = 0x208450u;
label_208450:
    // 0x208450: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x208450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x208454: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x208458: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x208458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20845c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20845cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208460: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x208460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x208464: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x208464u;
    SET_GPR_U32(ctx, 31, 0x20846Cu);
    ctx->pc = 0x208468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208464u;
            // 0x208468: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20846Cu; }
        if (ctx->pc != 0x20846Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20846Cu; }
        if (ctx->pc != 0x20846Cu) { return; }
    }
    ctx->pc = 0x20846Cu;
label_20846c:
    // 0x20846c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x20846cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_208470:
    // 0x208470: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x208470u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x208474: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x208474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x208478: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x208478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20847c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20847cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208480: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x208480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208484: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x208484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208488: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x208488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20848c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20848cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208494: 0x3e00008  jr          $ra
    ctx->pc = 0x208494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208494u;
            // 0x208498: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20849Cu;
}
