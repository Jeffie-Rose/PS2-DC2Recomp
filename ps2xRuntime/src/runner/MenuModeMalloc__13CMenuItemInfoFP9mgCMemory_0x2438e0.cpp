#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuModeMalloc__13CMenuItemInfoFP9mgCMemory
// Address: 0x2438e0 - 0x243c98
void MenuModeMalloc__13CMenuItemInfoFP9mgCMemory_0x2438e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuModeMalloc__13CMenuItemInfoFP9mgCMemory_0x2438e0");
#endif

    switch (ctx->pc) {
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a10u: goto label_243a10;
        case 0x243a14u: goto label_243a14;
        case 0x243a18u: goto label_243a18;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a20u: goto label_243a20;
        case 0x243a24u: goto label_243a24;
        case 0x243a28u: goto label_243a28;
        case 0x243a2cu: goto label_243a2c;
        case 0x243a30u: goto label_243a30;
        case 0x243a34u: goto label_243a34;
        case 0x243a38u: goto label_243a38;
        case 0x243a3cu: goto label_243a3c;
        case 0x243a40u: goto label_243a40;
        case 0x243a44u: goto label_243a44;
        case 0x243a48u: goto label_243a48;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a50u: goto label_243a50;
        case 0x243a54u: goto label_243a54;
        case 0x243a58u: goto label_243a58;
        case 0x243a5cu: goto label_243a5c;
        case 0x243a60u: goto label_243a60;
        case 0x243a64u: goto label_243a64;
        case 0x243a68u: goto label_243a68;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a70u: goto label_243a70;
        case 0x243a74u: goto label_243a74;
        case 0x243a78u: goto label_243a78;
        case 0x243a7cu: goto label_243a7c;
        case 0x243a80u: goto label_243a80;
        case 0x243a84u: goto label_243a84;
        case 0x243a88u: goto label_243a88;
        case 0x243a8cu: goto label_243a8c;
        case 0x243a90u: goto label_243a90;
        case 0x243a94u: goto label_243a94;
        case 0x243a98u: goto label_243a98;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa0u: goto label_243aa0;
        case 0x243aa4u: goto label_243aa4;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aacu: goto label_243aac;
        case 0x243ab0u: goto label_243ab0;
        case 0x243ab4u: goto label_243ab4;
        case 0x243ab8u: goto label_243ab8;
        case 0x243abcu: goto label_243abc;
        case 0x243ac0u: goto label_243ac0;
        case 0x243ac4u: goto label_243ac4;
        case 0x243ac8u: goto label_243ac8;
        case 0x243accu: goto label_243acc;
        case 0x243ad0u: goto label_243ad0;
        case 0x243ad4u: goto label_243ad4;
        case 0x243ad8u: goto label_243ad8;
        case 0x243adcu: goto label_243adc;
        case 0x243ae0u: goto label_243ae0;
        case 0x243ae4u: goto label_243ae4;
        case 0x243ae8u: goto label_243ae8;
        case 0x243aecu: goto label_243aec;
        case 0x243af0u: goto label_243af0;
        case 0x243af4u: goto label_243af4;
        case 0x243af8u: goto label_243af8;
        case 0x243afcu: goto label_243afc;
        case 0x243b00u: goto label_243b00;
        case 0x243b04u: goto label_243b04;
        case 0x243b08u: goto label_243b08;
        case 0x243b0cu: goto label_243b0c;
        case 0x243b10u: goto label_243b10;
        case 0x243b14u: goto label_243b14;
        case 0x243b18u: goto label_243b18;
        case 0x243b1cu: goto label_243b1c;
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        case 0x243b90u: goto label_243b90;
        case 0x243b94u: goto label_243b94;
        case 0x243b98u: goto label_243b98;
        case 0x243b9cu: goto label_243b9c;
        case 0x243ba0u: goto label_243ba0;
        case 0x243ba4u: goto label_243ba4;
        case 0x243ba8u: goto label_243ba8;
        case 0x243bacu: goto label_243bac;
        case 0x243bb0u: goto label_243bb0;
        case 0x243bb4u: goto label_243bb4;
        case 0x243bb8u: goto label_243bb8;
        case 0x243bbcu: goto label_243bbc;
        case 0x243bc0u: goto label_243bc0;
        case 0x243bc4u: goto label_243bc4;
        case 0x243bc8u: goto label_243bc8;
        case 0x243bccu: goto label_243bcc;
        case 0x243bd0u: goto label_243bd0;
        case 0x243bd4u: goto label_243bd4;
        case 0x243bd8u: goto label_243bd8;
        case 0x243bdcu: goto label_243bdc;
        case 0x243be0u: goto label_243be0;
        case 0x243be4u: goto label_243be4;
        case 0x243be8u: goto label_243be8;
        case 0x243becu: goto label_243bec;
        case 0x243bf0u: goto label_243bf0;
        case 0x243bf4u: goto label_243bf4;
        case 0x243bf8u: goto label_243bf8;
        case 0x243bfcu: goto label_243bfc;
        case 0x243c00u: goto label_243c00;
        case 0x243c04u: goto label_243c04;
        case 0x243c08u: goto label_243c08;
        case 0x243c0cu: goto label_243c0c;
        case 0x243c10u: goto label_243c10;
        case 0x243c14u: goto label_243c14;
        case 0x243c18u: goto label_243c18;
        case 0x243c1cu: goto label_243c1c;
        case 0x243c20u: goto label_243c20;
        case 0x243c24u: goto label_243c24;
        case 0x243c28u: goto label_243c28;
        case 0x243c2cu: goto label_243c2c;
        case 0x243c30u: goto label_243c30;
        case 0x243c34u: goto label_243c34;
        case 0x243c38u: goto label_243c38;
        case 0x243c3cu: goto label_243c3c;
        case 0x243c40u: goto label_243c40;
        case 0x243c44u: goto label_243c44;
        case 0x243c48u: goto label_243c48;
        case 0x243c4cu: goto label_243c4c;
        case 0x243c50u: goto label_243c50;
        case 0x243c54u: goto label_243c54;
        case 0x243c58u: goto label_243c58;
        case 0x243c5cu: goto label_243c5c;
        case 0x243c60u: goto label_243c60;
        case 0x243c64u: goto label_243c64;
        case 0x243c68u: goto label_243c68;
        case 0x243c6cu: goto label_243c6c;
        case 0x243c70u: goto label_243c70;
        case 0x243c74u: goto label_243c74;
        case 0x243c78u: goto label_243c78;
        case 0x243c7cu: goto label_243c7c;
        case 0x243c80u: goto label_243c80;
        case 0x243c84u: goto label_243c84;
        case 0x243c88u: goto label_243c88;
        case 0x243c8cu: goto label_243c8c;
        case 0x243c90u: goto label_243c90;
        case 0x243c94u: goto label_243c94;
        default: break;
    }

    ctx->pc = 0x2438e0u;

label_2438e0:
    // 0x2438e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2438e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2438e4:
    // 0x2438e4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2438e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2438e8:
    // 0x2438e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2438e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2438ec:
    // 0x2438ec: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_2438f0:
    // 0x2438f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2438f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2438f4:
    // 0x2438f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2438f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2438f8:
    // 0x2438f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2438f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2438fc:
    // 0x2438fc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2438fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_243900:
    // 0x243900: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x243900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_243904:
    // 0x243904: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x243904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_243908:
    // 0x243908: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x243908u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_24390c:
    // 0x24390c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x24390cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_243910:
    // 0x243910: 0xc04e79c  jal         func_139E70
label_243914:
    if (ctx->pc == 0x243914u) {
        ctx->pc = 0x243914u;
            // 0x243914: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x243918u;
        goto label_243918;
    }
    ctx->pc = 0x243910u;
    SET_GPR_U32(ctx, 31, 0x243918u);
    ctx->pc = 0x243914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243910u;
            // 0x243914: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243918u; }
        if (ctx->pc != 0x243918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243918u; }
        if (ctx->pc != 0x243918u) { return; }
    }
    ctx->pc = 0x243918u;
label_243918:
    // 0x243918: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24391c:
    // 0x24391c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24391cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243920:
    // 0x243920: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243924:
    // 0x243924: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x243924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_243928:
    // 0x243928: 0xc04e748  jal         func_139D20
label_24392c:
    if (ctx->pc == 0x24392Cu) {
        ctx->pc = 0x24392Cu;
            // 0x24392c: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->pc = 0x243930u;
        goto label_243930;
    }
    ctx->pc = 0x243928u;
    SET_GPR_U32(ctx, 31, 0x243930u);
    ctx->pc = 0x24392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243928u;
            // 0x24392c: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243930u; }
        if (ctx->pc != 0x243930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243930u; }
        if (ctx->pc != 0x243930u) { return; }
    }
    ctx->pc = 0x243930u;
label_243930:
    // 0x243930: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_243934:
    // 0x243934: 0xc04e638  jal         func_1398E0
label_243938:
    if (ctx->pc == 0x243938u) {
        ctx->pc = 0x243938u;
            // 0x243938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24393Cu;
        goto label_24393c;
    }
    ctx->pc = 0x243934u;
    SET_GPR_U32(ctx, 31, 0x24393Cu);
    ctx->pc = 0x243938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243934u;
            // 0x243938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24393Cu; }
        if (ctx->pc != 0x24393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24393Cu; }
        if (ctx->pc != 0x24393Cu) { return; }
    }
    ctx->pc = 0x24393Cu;
label_24393c:
    // 0x24393c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_243940:
    if (ctx->pc == 0x243940u) {
        ctx->pc = 0x243940u;
            // 0x243940: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243944u;
        goto label_243944;
    }
    ctx->pc = 0x24393Cu;
    {
        const bool branch_taken_0x24393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24393Cu;
            // 0x243940: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24393c) {
            ctx->pc = 0x2439E4u;
            goto label_2439e4;
        }
    }
    ctx->pc = 0x243944u;
label_243944:
    // 0x243944: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243948:
    // 0x243948: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x243948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_24394c:
    // 0x24394c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_243950:
    // 0x243950: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x243950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_243954:
    // 0x243954: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243958:
    // 0x243958: 0x320f809  jalr        $t9
label_24395c:
    if (ctx->pc == 0x24395Cu) {
        ctx->pc = 0x24395Cu;
            // 0x24395c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243960u;
        goto label_243960;
    }
    ctx->pc = 0x243958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243960u);
        ctx->pc = 0x24395Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243958u;
            // 0x24395c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243960u; }
            if (ctx->pc != 0x243960u) { return; }
        }
        }
    }
    ctx->pc = 0x243960u;
label_243960:
    // 0x243960: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243964:
    // 0x243964: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_243968:
    // 0x243968: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x243968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_24396c:
    // 0x24396c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x24396cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_243970:
    // 0x243970: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x243970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243974:
    // 0x243974: 0x320f809  jalr        $t9
label_243978:
    if (ctx->pc == 0x243978u) {
        ctx->pc = 0x243978u;
            // 0x243978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24397Cu;
        goto label_24397c;
    }
    ctx->pc = 0x243974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24397Cu);
        ctx->pc = 0x243978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243974u;
            // 0x243978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24397Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24397Cu; }
            if (ctx->pc != 0x24397Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24397Cu;
label_24397c:
    // 0x24397c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x24397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243980:
    // 0x243980: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_243984:
    // 0x243984: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x243984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_243988:
    // 0x243988: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x243988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24398c:
    // 0x24398c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x24398cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243990:
    // 0x243990: 0x320f809  jalr        $t9
label_243994:
    if (ctx->pc == 0x243994u) {
        ctx->pc = 0x243994u;
            // 0x243994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243998u;
        goto label_243998;
    }
    ctx->pc = 0x243990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243998u);
        ctx->pc = 0x243994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243990u;
            // 0x243994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243998u; }
            if (ctx->pc != 0x243998u) { return; }
        }
        }
    }
    ctx->pc = 0x243998u;
label_243998:
    // 0x243998: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_24399c:
    // 0x24399c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x24399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2439a0:
    // 0x2439a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2439a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2439a4:
    // 0x2439a4: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2439a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2439a8:
    // 0x2439a8: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2439a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2439ac:
    // 0x2439ac: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2439acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2439b0:
    // 0x2439b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2439b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2439b4:
    // 0x2439b4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2439b8:
    // 0x2439b8: 0x320f809  jalr        $t9
label_2439bc:
    if (ctx->pc == 0x2439BCu) {
        ctx->pc = 0x2439BCu;
            // 0x2439bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2439C0u;
        goto label_2439c0;
    }
    ctx->pc = 0x2439B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2439C0u);
        ctx->pc = 0x2439BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2439B8u;
            // 0x2439bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2439C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2439C0u; }
            if (ctx->pc != 0x2439C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2439C0u;
label_2439c0:
    // 0x2439c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2439c4:
    // 0x2439c4: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_2439c8:
    // 0x2439c8: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2439c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2439cc:
    // 0x2439cc: 0xc061b34  jal         func_186CD0
label_2439d0:
    if (ctx->pc == 0x2439D0u) {
        ctx->pc = 0x2439D0u;
            // 0x2439d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2439D4u;
        goto label_2439d4;
    }
    ctx->pc = 0x2439CCu;
    SET_GPR_U32(ctx, 31, 0x2439D4u);
    ctx->pc = 0x2439D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2439CCu;
            // 0x2439d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2439D4u; }
        if (ctx->pc != 0x2439D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2439D4u; }
        if (ctx->pc != 0x2439D4u) { return; }
    }
    ctx->pc = 0x2439D4u;
label_2439d4:
    // 0x2439d4: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_2439d8:
    // 0x2439d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2439d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2439dc:
    // 0x2439dc: 0xc049c86  jal         func_127218
label_2439e0:
    if (ctx->pc == 0x2439E0u) {
        ctx->pc = 0x2439E0u;
            // 0x2439e0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2439E4u;
        goto label_2439e4;
    }
    ctx->pc = 0x2439DCu;
    SET_GPR_U32(ctx, 31, 0x2439E4u);
    ctx->pc = 0x2439E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2439DCu;
            // 0x2439e0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2439E4u; }
        if (ctx->pc != 0x2439E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2439E4u; }
        if (ctx->pc != 0x2439E4u) { return; }
    }
    ctx->pc = 0x2439E4u;
label_2439e4:
    // 0x2439e4: 0x0  nop
    ctx->pc = 0x2439e4u;
    // NOP
label_2439e8:
    // 0x2439e8: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2439e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2439ec:
    // 0x2439ec: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x2439ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
label_2439f0:
    // 0x2439f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2439f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2439f4:
    // 0x2439f4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2439f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_2439f8:
    // 0x2439f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2439f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2439fc:
    // 0x2439fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2439fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_243a00:
    // 0x243a00: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_243a04:
    // 0x243a04: 0x320f809  jalr        $t9
label_243a08:
    if (ctx->pc == 0x243A08u) {
        ctx->pc = 0x243A08u;
            // 0x243a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A0Cu;
        goto label_243a0c;
    }
    ctx->pc = 0x243A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243A0Cu);
        ctx->pc = 0x243A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A04u;
            // 0x243a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243A0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243A0Cu; }
            if (ctx->pc != 0x243A0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x243A0Cu;
label_243a0c:
    // 0x243a0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x243a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_243a10:
    // 0x243a10: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x243a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_243a14:
    // 0x243a14: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_243a18:
    if (ctx->pc == 0x243A18u) {
        ctx->pc = 0x243A18u;
            // 0x243a18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x243A1Cu;
        goto label_243a1c;
    }
    ctx->pc = 0x243A14u;
    {
        const bool branch_taken_0x243a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A14u;
            // 0x243a18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a14) {
            ctx->pc = 0x243920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243920;
        }
    }
    ctx->pc = 0x243A1Cu;
label_243a1c:
    // 0x243a1c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243a20:
    // 0x243a20: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x243a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_243a24:
    // 0x243a24: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_243a28:
    // 0x243a28: 0xc0abf24  jal         func_2AFC90
label_243a2c:
    if (ctx->pc == 0x243A2Cu) {
        ctx->pc = 0x243A2Cu;
            // 0x243a2c: 0x24a50ff0  addiu       $a1, $a1, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4080));
        ctx->pc = 0x243A30u;
        goto label_243a30;
    }
    ctx->pc = 0x243A28u;
    SET_GPR_U32(ctx, 31, 0x243A30u);
    ctx->pc = 0x243A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A28u;
            // 0x243a2c: 0x24a50ff0  addiu       $a1, $a1, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC90u;
    if (runtime->hasFunction(0x2AFC90u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A30u; }
        if (ctx->pc != 0x243A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A30u; }
        if (ctx->pc != 0x243A30u) { return; }
    }
    ctx->pc = 0x243A30u;
label_243a30:
    // 0x243a30: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243a34:
    // 0x243a34: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x243a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_243a38:
    // 0x243a38: 0xc04e748  jal         func_139D20
label_243a3c:
    if (ctx->pc == 0x243A3Cu) {
        ctx->pc = 0x243A3Cu;
            // 0x243a3c: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->pc = 0x243A40u;
        goto label_243a40;
    }
    ctx->pc = 0x243A38u;
    SET_GPR_U32(ctx, 31, 0x243A40u);
    ctx->pc = 0x243A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A38u;
            // 0x243a3c: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A40u; }
        if (ctx->pc != 0x243A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A40u; }
        if (ctx->pc != 0x243A40u) { return; }
    }
    ctx->pc = 0x243A40u;
label_243a40:
    // 0x243a40: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x243a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_243a44:
    // 0x243a44: 0xc04e638  jal         func_1398E0
label_243a48:
    if (ctx->pc == 0x243A48u) {
        ctx->pc = 0x243A48u;
            // 0x243a48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A4Cu;
        goto label_243a4c;
    }
    ctx->pc = 0x243A44u;
    SET_GPR_U32(ctx, 31, 0x243A4Cu);
    ctx->pc = 0x243A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A44u;
            // 0x243a48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A4Cu; }
        if (ctx->pc != 0x243A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A4Cu; }
        if (ctx->pc != 0x243A4Cu) { return; }
    }
    ctx->pc = 0x243A4Cu;
label_243a4c:
    // 0x243a4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_243a50:
    if (ctx->pc == 0x243A50u) {
        ctx->pc = 0x243A50u;
            // 0x243a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A54u;
        goto label_243a54;
    }
    ctx->pc = 0x243A4Cu;
    {
        const bool branch_taken_0x243a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A4Cu;
            // 0x243a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a4c) {
            ctx->pc = 0x243A80u;
            goto label_243a80;
        }
    }
    ctx->pc = 0x243A54u;
label_243a54:
    // 0x243a54: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_243a58:
    // 0x243a58: 0xc065c24  jal         func_197090
label_243a5c:
    if (ctx->pc == 0x243A5Cu) {
        ctx->pc = 0x243A5Cu;
            // 0x243a5c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x243A60u;
        goto label_243a60;
    }
    ctx->pc = 0x243A58u;
    SET_GPR_U32(ctx, 31, 0x243A60u);
    ctx->pc = 0x243A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A58u;
            // 0x243a5c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A60u; }
        if (ctx->pc != 0x243A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A60u; }
        if (ctx->pc != 0x243A60u) { return; }
    }
    ctx->pc = 0x243A60u;
label_243a60:
    // 0x243a60: 0x2631007c  addiu       $s1, $s1, 0x7C
    ctx->pc = 0x243a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_243a64:
    // 0x243a64: 0x26020104  addiu       $v0, $s0, 0x104
    ctx->pc = 0x243a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
label_243a68:
    // 0x243a68: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x243a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_243a6c:
    // 0x243a6c: 0x0  nop
    ctx->pc = 0x243a6cu;
    // NOP
label_243a70:
    // 0x243a70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_243a74:
    if (ctx->pc == 0x243A74u) {
        ctx->pc = 0x243A78u;
        goto label_243a78;
    }
    ctx->pc = 0x243A70u;
    {
        const bool branch_taken_0x243a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a70) {
            ctx->pc = 0x243A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243a58;
        }
    }
    ctx->pc = 0x243A78u;
label_243a78:
    // 0x243a78: 0xc0878fc  jal         func_21E3F0
label_243a7c:
    if (ctx->pc == 0x243A7Cu) {
        ctx->pc = 0x243A7Cu;
            // 0x243a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243A80u;
        goto label_243a80;
    }
    ctx->pc = 0x243A78u;
    SET_GPR_U32(ctx, 31, 0x243A80u);
    ctx->pc = 0x243A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A78u;
            // 0x243a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3F0u;
    if (runtime->hasFunction(0x21E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A80u; }
        if (ctx->pc != 0x243A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CMenuMoveItemFv_0x21e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A80u; }
        if (ctx->pc != 0x243A80u) { return; }
    }
    ctx->pc = 0x243A80u;
label_243a80:
    // 0x243a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243a84:
    // 0x243a84: 0xc08791c  jal         func_21E470
label_243a88:
    if (ctx->pc == 0x243A88u) {
        ctx->pc = 0x243A88u;
            // 0x243a88: 0xaf909510  sw          $s0, -0x6AF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939920), GPR_U32(ctx, 16));
        ctx->pc = 0x243A8Cu;
        goto label_243a8c;
    }
    ctx->pc = 0x243A84u;
    SET_GPR_U32(ctx, 31, 0x243A8Cu);
    ctx->pc = 0x243A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A84u;
            // 0x243a88: 0xaf909510  sw          $s0, -0x6AF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939920), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E470u;
    if (runtime->hasFunction(0x21E470u)) {
        auto targetFn = runtime->lookupFunction(0x21E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A8Cu; }
        if (ctx->pc != 0x243A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__13CMenuMoveItemFv_0x21e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A8Cu; }
        if (ctx->pc != 0x243A8Cu) { return; }
    }
    ctx->pc = 0x243A8Cu;
label_243a8c:
    // 0x243a8c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243a90:
    // 0x243a90: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x243a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_243a94:
    // 0x243a94: 0xc04e748  jal         func_139D20
label_243a98:
    if (ctx->pc == 0x243A98u) {
        ctx->pc = 0x243A98u;
            // 0x243a98: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->pc = 0x243A9Cu;
        goto label_243a9c;
    }
    ctx->pc = 0x243A94u;
    SET_GPR_U32(ctx, 31, 0x243A9Cu);
    ctx->pc = 0x243A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A94u;
            // 0x243a98: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A9Cu; }
        if (ctx->pc != 0x243A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A9Cu; }
        if (ctx->pc != 0x243A9Cu) { return; }
    }
    ctx->pc = 0x243A9Cu;
label_243a9c:
    // 0x243a9c: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x243a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_243aa0:
    // 0x243aa0: 0xc04e638  jal         func_1398E0
label_243aa4:
    if (ctx->pc == 0x243AA4u) {
        ctx->pc = 0x243AA4u;
            // 0x243aa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243AA8u;
        goto label_243aa8;
    }
    ctx->pc = 0x243AA0u;
    SET_GPR_U32(ctx, 31, 0x243AA8u);
    ctx->pc = 0x243AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243AA0u;
            // 0x243aa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AA8u; }
        if (ctx->pc != 0x243AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AA8u; }
        if (ctx->pc != 0x243AA8u) { return; }
    }
    ctx->pc = 0x243AA8u;
label_243aa8:
    // 0x243aa8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_243aac:
    if (ctx->pc == 0x243AACu) {
        ctx->pc = 0x243AACu;
            // 0x243aac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243AB0u;
        goto label_243ab0;
    }
    ctx->pc = 0x243AA8u;
    {
        const bool branch_taken_0x243aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AA8u;
            // 0x243aac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243aa8) {
            ctx->pc = 0x243B50u;
            goto label_243b50;
        }
    }
    ctx->pc = 0x243AB0u;
label_243ab0:
    // 0x243ab0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243ab4:
    // 0x243ab4: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x243ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_243ab8:
    // 0x243ab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x243ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_243abc:
    // 0x243abc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_243ac0:
    // 0x243ac0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x243ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243ac4:
    // 0x243ac4: 0x320f809  jalr        $t9
label_243ac8:
    if (ctx->pc == 0x243AC8u) {
        ctx->pc = 0x243AC8u;
            // 0x243ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243ACCu;
        goto label_243acc;
    }
    ctx->pc = 0x243AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243ACCu);
        ctx->pc = 0x243AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AC4u;
            // 0x243ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243ACCu; }
            if (ctx->pc != 0x243ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x243ACCu;
label_243acc:
    // 0x243acc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243ad0:
    // 0x243ad0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x243ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_243ad4:
    // 0x243ad4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x243ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_243ad8:
    // 0x243ad8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x243ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_243adc:
    // 0x243adc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x243adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243ae0:
    // 0x243ae0: 0x320f809  jalr        $t9
label_243ae4:
    if (ctx->pc == 0x243AE4u) {
        ctx->pc = 0x243AE4u;
            // 0x243ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243AE8u;
        goto label_243ae8;
    }
    ctx->pc = 0x243AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243AE8u);
        ctx->pc = 0x243AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AE0u;
            // 0x243ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243AE8u; }
            if (ctx->pc != 0x243AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x243AE8u;
label_243ae8:
    // 0x243ae8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243aec:
    // 0x243aec: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x243aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_243af0:
    // 0x243af0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x243af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_243af4:
    // 0x243af4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x243af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_243af8:
    // 0x243af8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243afc:
    // 0x243afc: 0x320f809  jalr        $t9
label_243b00:
    if (ctx->pc == 0x243B00u) {
        ctx->pc = 0x243B00u;
            // 0x243b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B04u;
        goto label_243b04;
    }
    ctx->pc = 0x243AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243B04u);
        ctx->pc = 0x243B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AFCu;
            // 0x243b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243B04u; }
            if (ctx->pc != 0x243B04u) { return; }
        }
        }
    }
    ctx->pc = 0x243B04u;
label_243b04:
    // 0x243b04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243b08:
    // 0x243b08: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x243b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_243b0c:
    // 0x243b0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x243b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_243b10:
    // 0x243b10: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x243b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_243b14:
    // 0x243b14: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x243b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_243b18:
    // 0x243b18: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x243b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_243b1c:
    // 0x243b1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_243b20:
    // 0x243b20: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x243b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_243b24:
    // 0x243b24: 0x320f809  jalr        $t9
label_243b28:
    if (ctx->pc == 0x243B28u) {
        ctx->pc = 0x243B28u;
            // 0x243b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B2Cu;
        goto label_243b2c;
    }
    ctx->pc = 0x243B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243B2Cu);
        ctx->pc = 0x243B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B24u;
            // 0x243b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243B2Cu; }
            if (ctx->pc != 0x243B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x243B2Cu;
label_243b2c:
    // 0x243b2c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x243b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_243b30:
    // 0x243b30: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x243b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_243b34:
    // 0x243b34: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x243b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_243b38:
    // 0x243b38: 0xc061b34  jal         func_186CD0
label_243b3c:
    if (ctx->pc == 0x243B3Cu) {
        ctx->pc = 0x243B3Cu;
            // 0x243b3c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x243B40u;
        goto label_243b40;
    }
    ctx->pc = 0x243B38u;
    SET_GPR_U32(ctx, 31, 0x243B40u);
    ctx->pc = 0x243B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B38u;
            // 0x243b3c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B40u; }
        if (ctx->pc != 0x243B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B40u; }
        if (ctx->pc != 0x243B40u) { return; }
    }
    ctx->pc = 0x243B40u;
label_243b40:
    // 0x243b40: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x243b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_243b44:
    // 0x243b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243b48:
    // 0x243b48: 0xc049c86  jal         func_127218
label_243b4c:
    if (ctx->pc == 0x243B4Cu) {
        ctx->pc = 0x243B4Cu;
            // 0x243b4c: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x243B50u;
        goto label_243b50;
    }
    ctx->pc = 0x243B48u;
    SET_GPR_U32(ctx, 31, 0x243B50u);
    ctx->pc = 0x243B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B48u;
            // 0x243b4c: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B50u; }
        if (ctx->pc != 0x243B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B50u; }
        if (ctx->pc != 0x243B50u) { return; }
    }
    ctx->pc = 0x243B50u;
label_243b50:
    // 0x243b50: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243b54:
    // 0x243b54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x243b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243b58:
    // 0x243b58: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x243b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_243b5c:
    // 0x243b5c: 0xc04e748  jal         func_139D20
label_243b60:
    if (ctx->pc == 0x243B60u) {
        ctx->pc = 0x243B60u;
            // 0x243b60: 0xaf909624  sw          $s0, -0x69DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940196), GPR_U32(ctx, 16));
        ctx->pc = 0x243B64u;
        goto label_243b64;
    }
    ctx->pc = 0x243B5Cu;
    SET_GPR_U32(ctx, 31, 0x243B64u);
    ctx->pc = 0x243B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B5Cu;
            // 0x243b60: 0xaf909624  sw          $s0, -0x69DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B64u; }
        if (ctx->pc != 0x243B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B64u; }
        if (ctx->pc != 0x243B64u) { return; }
    }
    ctx->pc = 0x243B64u;
label_243b64:
    // 0x243b64: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x243b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_243b68:
    // 0x243b68: 0xc04e638  jal         func_1398E0
label_243b6c:
    if (ctx->pc == 0x243B6Cu) {
        ctx->pc = 0x243B6Cu;
            // 0x243b6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B70u;
        goto label_243b70;
    }
    ctx->pc = 0x243B68u;
    SET_GPR_U32(ctx, 31, 0x243B70u);
    ctx->pc = 0x243B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B68u;
            // 0x243b6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B70u; }
        if (ctx->pc != 0x243B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B70u; }
        if (ctx->pc != 0x243B70u) { return; }
    }
    ctx->pc = 0x243B70u;
label_243b70:
    // 0x243b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243b74:
    if (ctx->pc == 0x243B74u) {
        ctx->pc = 0x243B74u;
            // 0x243b74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B78u;
        goto label_243b78;
    }
    ctx->pc = 0x243B70u;
    {
        const bool branch_taken_0x243b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B70u;
            // 0x243b74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b70) {
            ctx->pc = 0x243B80u;
            goto label_243b80;
        }
    }
    ctx->pc = 0x243B78u;
label_243b78:
    // 0x243b78: 0xc08bed8  jal         func_22FB60
label_243b7c:
    if (ctx->pc == 0x243B7Cu) {
        ctx->pc = 0x243B7Cu;
            // 0x243b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243B80u;
        goto label_243b80;
    }
    ctx->pc = 0x243B78u;
    SET_GPR_U32(ctx, 31, 0x243B80u);
    ctx->pc = 0x243B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B78u;
            // 0x243b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB60u;
    if (runtime->hasFunction(0x22FB60u)) {
        auto targetFn = runtime->lookupFunction(0x22FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B80u; }
        if (ctx->pc != 0x243B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMenuEffectFv_0x22fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B80u; }
        if (ctx->pc != 0x243B80u) { return; }
    }
    ctx->pc = 0x243B80u;
label_243b80:
    // 0x243b80: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243b84:
    // 0x243b84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x243b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243b88:
    // 0x243b88: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x243b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_243b8c:
    // 0x243b8c: 0xc04e748  jal         func_139D20
label_243b90:
    if (ctx->pc == 0x243B90u) {
        ctx->pc = 0x243B90u;
            // 0x243b90: 0xaf9095c8  sw          $s0, -0x6A38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940104), GPR_U32(ctx, 16));
        ctx->pc = 0x243B94u;
        goto label_243b94;
    }
    ctx->pc = 0x243B8Cu;
    SET_GPR_U32(ctx, 31, 0x243B94u);
    ctx->pc = 0x243B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B8Cu;
            // 0x243b90: 0xaf9095c8  sw          $s0, -0x6A38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940104), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B94u; }
        if (ctx->pc != 0x243B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B94u; }
        if (ctx->pc != 0x243B94u) { return; }
    }
    ctx->pc = 0x243B94u;
label_243b94:
    // 0x243b94: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x243b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_243b98:
    // 0x243b98: 0xc04e638  jal         func_1398E0
label_243b9c:
    if (ctx->pc == 0x243B9Cu) {
        ctx->pc = 0x243B9Cu;
            // 0x243b9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243BA0u;
        goto label_243ba0;
    }
    ctx->pc = 0x243B98u;
    SET_GPR_U32(ctx, 31, 0x243BA0u);
    ctx->pc = 0x243B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B98u;
            // 0x243b9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BA0u; }
        if (ctx->pc != 0x243BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BA0u; }
        if (ctx->pc != 0x243BA0u) { return; }
    }
    ctx->pc = 0x243BA0u;
label_243ba0:
    // 0x243ba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243ba4:
    if (ctx->pc == 0x243BA4u) {
        ctx->pc = 0x243BA4u;
            // 0x243ba4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243BA8u;
        goto label_243ba8;
    }
    ctx->pc = 0x243BA0u;
    {
        const bool branch_taken_0x243ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BA0u;
            // 0x243ba4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ba0) {
            ctx->pc = 0x243BB0u;
            goto label_243bb0;
        }
    }
    ctx->pc = 0x243BA8u;
label_243ba8:
    // 0x243ba8: 0xc08bed8  jal         func_22FB60
label_243bac:
    if (ctx->pc == 0x243BACu) {
        ctx->pc = 0x243BACu;
            // 0x243bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243BB0u;
        goto label_243bb0;
    }
    ctx->pc = 0x243BA8u;
    SET_GPR_U32(ctx, 31, 0x243BB0u);
    ctx->pc = 0x243BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BA8u;
            // 0x243bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB60u;
    if (runtime->hasFunction(0x22FB60u)) {
        auto targetFn = runtime->lookupFunction(0x22FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BB0u; }
        if (ctx->pc != 0x243BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMenuEffectFv_0x22fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BB0u; }
        if (ctx->pc != 0x243BB0u) { return; }
    }
    ctx->pc = 0x243BB0u;
label_243bb0:
    // 0x243bb0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243bb4:
    // 0x243bb4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x243bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_243bb8:
    // 0x243bb8: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x243bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_243bbc:
    // 0x243bbc: 0xc04e748  jal         func_139D20
label_243bc0:
    if (ctx->pc == 0x243BC0u) {
        ctx->pc = 0x243BC0u;
            // 0x243bc0: 0xaf9095cc  sw          $s0, -0x6A34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940108), GPR_U32(ctx, 16));
        ctx->pc = 0x243BC4u;
        goto label_243bc4;
    }
    ctx->pc = 0x243BBCu;
    SET_GPR_U32(ctx, 31, 0x243BC4u);
    ctx->pc = 0x243BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BBCu;
            // 0x243bc0: 0xaf9095cc  sw          $s0, -0x6A34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940108), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BC4u; }
        if (ctx->pc != 0x243BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BC4u; }
        if (ctx->pc != 0x243BC4u) { return; }
    }
    ctx->pc = 0x243BC4u;
label_243bc4:
    // 0x243bc4: 0x240401ec  addiu       $a0, $zero, 0x1EC
    ctx->pc = 0x243bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
label_243bc8:
    // 0x243bc8: 0xc04e638  jal         func_1398E0
label_243bcc:
    if (ctx->pc == 0x243BCCu) {
        ctx->pc = 0x243BCCu;
            // 0x243bcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243BD0u;
        goto label_243bd0;
    }
    ctx->pc = 0x243BC8u;
    SET_GPR_U32(ctx, 31, 0x243BD0u);
    ctx->pc = 0x243BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BC8u;
            // 0x243bcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BD0u; }
        if (ctx->pc != 0x243BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BD0u; }
        if (ctx->pc != 0x243BD0u) { return; }
    }
    ctx->pc = 0x243BD0u;
label_243bd0:
    // 0x243bd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_243bd4:
    if (ctx->pc == 0x243BD4u) {
        ctx->pc = 0x243BD4u;
            // 0x243bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243BD8u;
        goto label_243bd8;
    }
    ctx->pc = 0x243BD0u;
    {
        const bool branch_taken_0x243bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BD0u;
            // 0x243bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bd0) {
            ctx->pc = 0x243C04u;
            goto label_243c04;
        }
    }
    ctx->pc = 0x243BD8u;
label_243bd8:
    // 0x243bd8: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x243bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_243bdc:
    // 0x243bdc: 0xc04e640  jal         func_139900
label_243be0:
    if (ctx->pc == 0x243BE0u) {
        ctx->pc = 0x243BE0u;
            // 0x243be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243BE4u;
        goto label_243be4;
    }
    ctx->pc = 0x243BDCu;
    SET_GPR_U32(ctx, 31, 0x243BE4u);
    ctx->pc = 0x243BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BDCu;
            // 0x243be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BE4u; }
        if (ctx->pc != 0x243BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BE4u; }
        if (ctx->pc != 0x243BE4u) { return; }
    }
    ctx->pc = 0x243BE4u;
label_243be4:
    // 0x243be4: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x243be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_243be8:
    // 0x243be8: 0x260201a4  addiu       $v0, $s0, 0x1A4
    ctx->pc = 0x243be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
label_243bec:
    // 0x243bec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x243becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_243bf0:
    // 0x243bf0: 0x0  nop
    ctx->pc = 0x243bf0u;
    // NOP
label_243bf4:
    // 0x243bf4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_243bf8:
    if (ctx->pc == 0x243BF8u) {
        ctx->pc = 0x243BFCu;
        goto label_243bfc;
    }
    ctx->pc = 0x243BF4u;
    {
        const bool branch_taken_0x243bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243bf4) {
            ctx->pc = 0x243BDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243bdc;
        }
    }
    ctx->pc = 0x243BFCu;
label_243bfc:
    // 0x243bfc: 0xc04e640  jal         func_139900
label_243c00:
    if (ctx->pc == 0x243C00u) {
        ctx->pc = 0x243C00u;
            // 0x243c00: 0x260401b4  addiu       $a0, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->pc = 0x243C04u;
        goto label_243c04;
    }
    ctx->pc = 0x243BFCu;
    SET_GPR_U32(ctx, 31, 0x243C04u);
    ctx->pc = 0x243C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BFCu;
            // 0x243c00: 0x260401b4  addiu       $a0, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C04u; }
        if (ctx->pc != 0x243C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C04u; }
        if (ctx->pc != 0x243C04u) { return; }
    }
    ctx->pc = 0x243C04u;
label_243c04:
    // 0x243c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243c08:
    // 0x243c08: 0xc08b614  jal         func_22D850
label_243c0c:
    if (ctx->pc == 0x243C0Cu) {
        ctx->pc = 0x243C0Cu;
            // 0x243c0c: 0xaf909584  sw          $s0, -0x6A7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940036), GPR_U32(ctx, 16));
        ctx->pc = 0x243C10u;
        goto label_243c10;
    }
    ctx->pc = 0x243C08u;
    SET_GPR_U32(ctx, 31, 0x243C10u);
    ctx->pc = 0x243C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C08u;
            // 0x243c0c: 0xaf909584  sw          $s0, -0x6A7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940036), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C10u; }
        if (ctx->pc != 0x243C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CRepairManagerFv_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C10u; }
        if (ctx->pc != 0x243C10u) { return; }
    }
    ctx->pc = 0x243C10u;
label_243c10:
    // 0x243c10: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243c14:
    // 0x243c14: 0xc08ba1c  jal         func_22E870
label_243c18:
    if (ctx->pc == 0x243C18u) {
        ctx->pc = 0x243C18u;
            // 0x243c18: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->pc = 0x243C1Cu;
        goto label_243c1c;
    }
    ctx->pc = 0x243C14u;
    SET_GPR_U32(ctx, 31, 0x243C1Cu);
    ctx->pc = 0x243C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C14u;
            // 0x243c18: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E870u;
    if (runtime->hasFunction(0x22E870u)) {
        auto targetFn = runtime->lookupFunction(0x22E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C1Cu; }
        if (ctx->pc != 0x243C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__21CLevelUpEffectManagerFv_0x22e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C1Cu; }
        if (ctx->pc != 0x243C1Cu) { return; }
    }
    ctx->pc = 0x243C1Cu;
label_243c1c:
    // 0x243c1c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x243c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_243c20:
    // 0x243c20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_243c24:
    // 0x243c24: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x243c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_243c28:
    // 0x243c28: 0x24a5ae38  addiu       $a1, $a1, -0x51C8
    ctx->pc = 0x243c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946360));
label_243c2c:
    // 0x243c2c: 0xc04b414  jal         func_12D050
label_243c30:
    if (ctx->pc == 0x243C30u) {
        ctx->pc = 0x243C30u;
            // 0x243c30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x243C34u;
        goto label_243c34;
    }
    ctx->pc = 0x243C2Cu;
    SET_GPR_U32(ctx, 31, 0x243C34u);
    ctx->pc = 0x243C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C2Cu;
            // 0x243c30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C34u; }
        if (ctx->pc != 0x243C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C34u; }
        if (ctx->pc != 0x243C34u) { return; }
    }
    ctx->pc = 0x243C34u;
label_243c34:
    // 0x243c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x243c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243c38:
    // 0x243c38: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243c3c:
    // 0x243c3c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x243c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_243c40:
    // 0x243c40: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x243c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_243c44:
    // 0x243c44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x243c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_243c48:
    // 0x243c48: 0xc08bcd8  jal         func_22F360
label_243c4c:
    if (ctx->pc == 0x243C4Cu) {
        ctx->pc = 0x243C4Cu;
            // 0x243c4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x243C50u;
        goto label_243c50;
    }
    ctx->pc = 0x243C48u;
    SET_GPR_U32(ctx, 31, 0x243C50u);
    ctx->pc = 0x243C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C48u;
            // 0x243c4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F360u;
    if (runtime->hasFunction(0x22F360u)) {
        auto targetFn = runtime->lookupFunction(0x22F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C50u; }
        if (ctx->pc != 0x243C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBuildUpInfoEffect__FP9mgCMemoryP10mgCTextureif_0x22f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C50u; }
        if (ctx->pc != 0x243C50u) { return; }
    }
    ctx->pc = 0x243C50u;
label_243c50:
    // 0x243c50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243c54:
    // 0x243c54: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x243c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_243c58:
    // 0x243c58: 0x8c23dbe8  lw          $v1, -0x2418($at)
    ctx->pc = 0x243c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958056)));
label_243c5c:
    // 0x243c5c: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x243c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
label_243c60:
    // 0x243c60: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243c64:
    // 0x243c64: 0x8c25dbe4  lw          $a1, -0x241C($at)
    ctx->pc = 0x243c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958052)));
label_243c68:
    // 0x243c68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243c6c:
    // 0x243c6c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_243c70:
    // 0x243c70: 0x8c22dbe0  lw          $v0, -0x2420($at)
    ctx->pc = 0x243c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958048)));
label_243c74:
    // 0x243c74: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x243c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_243c78:
    // 0x243c78: 0xc04e79c  jal         func_139E70
label_243c7c:
    if (ctx->pc == 0x243C7Cu) {
        ctx->pc = 0x243C7Cu;
            // 0x243c7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x243C80u;
        goto label_243c80;
    }
    ctx->pc = 0x243C78u;
    SET_GPR_U32(ctx, 31, 0x243C80u);
    ctx->pc = 0x243C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C78u;
            // 0x243c7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C80u; }
        if (ctx->pc != 0x243C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C80u; }
        if (ctx->pc != 0x243C80u) { return; }
    }
    ctx->pc = 0x243C80u;
label_243c80:
    // 0x243c80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x243c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_243c84:
    // 0x243c84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x243c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243c88:
    // 0x243c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_243c8c:
    // 0x243c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_243c90:
    // 0x243c90: 0x3e00008  jr          $ra
label_243c94:
    if (ctx->pc == 0x243C94u) {
        ctx->pc = 0x243C94u;
            // 0x243c94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x243C98u;
        goto label_fallthrough_0x243c90;
    }
    ctx->pc = 0x243C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C90u;
            // 0x243c94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x243c90:
    ctx->pc = 0x243C98u;
}
