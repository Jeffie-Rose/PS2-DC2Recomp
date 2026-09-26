#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo
// Address: 0x1b18a0 - 0x1b1c50
void RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo_0x1b18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo_0x1b18a0");
#endif

    switch (ctx->pc) {
        case 0x1b18a0u: goto label_1b18a0;
        case 0x1b18a4u: goto label_1b18a4;
        case 0x1b18a8u: goto label_1b18a8;
        case 0x1b18acu: goto label_1b18ac;
        case 0x1b18b0u: goto label_1b18b0;
        case 0x1b18b4u: goto label_1b18b4;
        case 0x1b18b8u: goto label_1b18b8;
        case 0x1b18bcu: goto label_1b18bc;
        case 0x1b18c0u: goto label_1b18c0;
        case 0x1b18c4u: goto label_1b18c4;
        case 0x1b18c8u: goto label_1b18c8;
        case 0x1b18ccu: goto label_1b18cc;
        case 0x1b18d0u: goto label_1b18d0;
        case 0x1b18d4u: goto label_1b18d4;
        case 0x1b18d8u: goto label_1b18d8;
        case 0x1b18dcu: goto label_1b18dc;
        case 0x1b18e0u: goto label_1b18e0;
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b18e8u: goto label_1b18e8;
        case 0x1b18ecu: goto label_1b18ec;
        case 0x1b18f0u: goto label_1b18f0;
        case 0x1b18f4u: goto label_1b18f4;
        case 0x1b18f8u: goto label_1b18f8;
        case 0x1b18fcu: goto label_1b18fc;
        case 0x1b1900u: goto label_1b1900;
        case 0x1b1904u: goto label_1b1904;
        case 0x1b1908u: goto label_1b1908;
        case 0x1b190cu: goto label_1b190c;
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1914u: goto label_1b1914;
        case 0x1b1918u: goto label_1b1918;
        case 0x1b191cu: goto label_1b191c;
        case 0x1b1920u: goto label_1b1920;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b192cu: goto label_1b192c;
        case 0x1b1930u: goto label_1b1930;
        case 0x1b1934u: goto label_1b1934;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b193cu: goto label_1b193c;
        case 0x1b1940u: goto label_1b1940;
        case 0x1b1944u: goto label_1b1944;
        case 0x1b1948u: goto label_1b1948;
        case 0x1b194cu: goto label_1b194c;
        case 0x1b1950u: goto label_1b1950;
        case 0x1b1954u: goto label_1b1954;
        case 0x1b1958u: goto label_1b1958;
        case 0x1b195cu: goto label_1b195c;
        case 0x1b1960u: goto label_1b1960;
        case 0x1b1964u: goto label_1b1964;
        case 0x1b1968u: goto label_1b1968;
        case 0x1b196cu: goto label_1b196c;
        case 0x1b1970u: goto label_1b1970;
        case 0x1b1974u: goto label_1b1974;
        case 0x1b1978u: goto label_1b1978;
        case 0x1b197cu: goto label_1b197c;
        case 0x1b1980u: goto label_1b1980;
        case 0x1b1984u: goto label_1b1984;
        case 0x1b1988u: goto label_1b1988;
        case 0x1b198cu: goto label_1b198c;
        case 0x1b1990u: goto label_1b1990;
        case 0x1b1994u: goto label_1b1994;
        case 0x1b1998u: goto label_1b1998;
        case 0x1b199cu: goto label_1b199c;
        case 0x1b19a0u: goto label_1b19a0;
        case 0x1b19a4u: goto label_1b19a4;
        case 0x1b19a8u: goto label_1b19a8;
        case 0x1b19acu: goto label_1b19ac;
        case 0x1b19b0u: goto label_1b19b0;
        case 0x1b19b4u: goto label_1b19b4;
        case 0x1b19b8u: goto label_1b19b8;
        case 0x1b19bcu: goto label_1b19bc;
        case 0x1b19c0u: goto label_1b19c0;
        case 0x1b19c4u: goto label_1b19c4;
        case 0x1b19c8u: goto label_1b19c8;
        case 0x1b19ccu: goto label_1b19cc;
        case 0x1b19d0u: goto label_1b19d0;
        case 0x1b19d4u: goto label_1b19d4;
        case 0x1b19d8u: goto label_1b19d8;
        case 0x1b19dcu: goto label_1b19dc;
        case 0x1b19e0u: goto label_1b19e0;
        case 0x1b19e4u: goto label_1b19e4;
        case 0x1b19e8u: goto label_1b19e8;
        case 0x1b19ecu: goto label_1b19ec;
        case 0x1b19f0u: goto label_1b19f0;
        case 0x1b19f4u: goto label_1b19f4;
        case 0x1b19f8u: goto label_1b19f8;
        case 0x1b19fcu: goto label_1b19fc;
        case 0x1b1a00u: goto label_1b1a00;
        case 0x1b1a04u: goto label_1b1a04;
        case 0x1b1a08u: goto label_1b1a08;
        case 0x1b1a0cu: goto label_1b1a0c;
        case 0x1b1a10u: goto label_1b1a10;
        case 0x1b1a14u: goto label_1b1a14;
        case 0x1b1a18u: goto label_1b1a18;
        case 0x1b1a1cu: goto label_1b1a1c;
        case 0x1b1a20u: goto label_1b1a20;
        case 0x1b1a24u: goto label_1b1a24;
        case 0x1b1a28u: goto label_1b1a28;
        case 0x1b1a2cu: goto label_1b1a2c;
        case 0x1b1a30u: goto label_1b1a30;
        case 0x1b1a34u: goto label_1b1a34;
        case 0x1b1a38u: goto label_1b1a38;
        case 0x1b1a3cu: goto label_1b1a3c;
        case 0x1b1a40u: goto label_1b1a40;
        case 0x1b1a44u: goto label_1b1a44;
        case 0x1b1a48u: goto label_1b1a48;
        case 0x1b1a4cu: goto label_1b1a4c;
        case 0x1b1a50u: goto label_1b1a50;
        case 0x1b1a54u: goto label_1b1a54;
        case 0x1b1a58u: goto label_1b1a58;
        case 0x1b1a5cu: goto label_1b1a5c;
        case 0x1b1a60u: goto label_1b1a60;
        case 0x1b1a64u: goto label_1b1a64;
        case 0x1b1a68u: goto label_1b1a68;
        case 0x1b1a6cu: goto label_1b1a6c;
        case 0x1b1a70u: goto label_1b1a70;
        case 0x1b1a74u: goto label_1b1a74;
        case 0x1b1a78u: goto label_1b1a78;
        case 0x1b1a7cu: goto label_1b1a7c;
        case 0x1b1a80u: goto label_1b1a80;
        case 0x1b1a84u: goto label_1b1a84;
        case 0x1b1a88u: goto label_1b1a88;
        case 0x1b1a8cu: goto label_1b1a8c;
        case 0x1b1a90u: goto label_1b1a90;
        case 0x1b1a94u: goto label_1b1a94;
        case 0x1b1a98u: goto label_1b1a98;
        case 0x1b1a9cu: goto label_1b1a9c;
        case 0x1b1aa0u: goto label_1b1aa0;
        case 0x1b1aa4u: goto label_1b1aa4;
        case 0x1b1aa8u: goto label_1b1aa8;
        case 0x1b1aacu: goto label_1b1aac;
        case 0x1b1ab0u: goto label_1b1ab0;
        case 0x1b1ab4u: goto label_1b1ab4;
        case 0x1b1ab8u: goto label_1b1ab8;
        case 0x1b1abcu: goto label_1b1abc;
        case 0x1b1ac0u: goto label_1b1ac0;
        case 0x1b1ac4u: goto label_1b1ac4;
        case 0x1b1ac8u: goto label_1b1ac8;
        case 0x1b1accu: goto label_1b1acc;
        case 0x1b1ad0u: goto label_1b1ad0;
        case 0x1b1ad4u: goto label_1b1ad4;
        case 0x1b1ad8u: goto label_1b1ad8;
        case 0x1b1adcu: goto label_1b1adc;
        case 0x1b1ae0u: goto label_1b1ae0;
        case 0x1b1ae4u: goto label_1b1ae4;
        case 0x1b1ae8u: goto label_1b1ae8;
        case 0x1b1aecu: goto label_1b1aec;
        case 0x1b1af0u: goto label_1b1af0;
        case 0x1b1af4u: goto label_1b1af4;
        case 0x1b1af8u: goto label_1b1af8;
        case 0x1b1afcu: goto label_1b1afc;
        case 0x1b1b00u: goto label_1b1b00;
        case 0x1b1b04u: goto label_1b1b04;
        case 0x1b1b08u: goto label_1b1b08;
        case 0x1b1b0cu: goto label_1b1b0c;
        case 0x1b1b10u: goto label_1b1b10;
        case 0x1b1b14u: goto label_1b1b14;
        case 0x1b1b18u: goto label_1b1b18;
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b20u: goto label_1b1b20;
        case 0x1b1b24u: goto label_1b1b24;
        case 0x1b1b28u: goto label_1b1b28;
        case 0x1b1b2cu: goto label_1b1b2c;
        case 0x1b1b30u: goto label_1b1b30;
        case 0x1b1b34u: goto label_1b1b34;
        case 0x1b1b38u: goto label_1b1b38;
        case 0x1b1b3cu: goto label_1b1b3c;
        case 0x1b1b40u: goto label_1b1b40;
        case 0x1b1b44u: goto label_1b1b44;
        case 0x1b1b48u: goto label_1b1b48;
        case 0x1b1b4cu: goto label_1b1b4c;
        case 0x1b1b50u: goto label_1b1b50;
        case 0x1b1b54u: goto label_1b1b54;
        case 0x1b1b58u: goto label_1b1b58;
        case 0x1b1b5cu: goto label_1b1b5c;
        case 0x1b1b60u: goto label_1b1b60;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1b68u: goto label_1b1b68;
        case 0x1b1b6cu: goto label_1b1b6c;
        case 0x1b1b70u: goto label_1b1b70;
        case 0x1b1b74u: goto label_1b1b74;
        case 0x1b1b78u: goto label_1b1b78;
        case 0x1b1b7cu: goto label_1b1b7c;
        case 0x1b1b80u: goto label_1b1b80;
        case 0x1b1b84u: goto label_1b1b84;
        case 0x1b1b88u: goto label_1b1b88;
        case 0x1b1b8cu: goto label_1b1b8c;
        case 0x1b1b90u: goto label_1b1b90;
        case 0x1b1b94u: goto label_1b1b94;
        case 0x1b1b98u: goto label_1b1b98;
        case 0x1b1b9cu: goto label_1b1b9c;
        case 0x1b1ba0u: goto label_1b1ba0;
        case 0x1b1ba4u: goto label_1b1ba4;
        case 0x1b1ba8u: goto label_1b1ba8;
        case 0x1b1bacu: goto label_1b1bac;
        case 0x1b1bb0u: goto label_1b1bb0;
        case 0x1b1bb4u: goto label_1b1bb4;
        case 0x1b1bb8u: goto label_1b1bb8;
        case 0x1b1bbcu: goto label_1b1bbc;
        case 0x1b1bc0u: goto label_1b1bc0;
        case 0x1b1bc4u: goto label_1b1bc4;
        case 0x1b1bc8u: goto label_1b1bc8;
        case 0x1b1bccu: goto label_1b1bcc;
        case 0x1b1bd0u: goto label_1b1bd0;
        case 0x1b1bd4u: goto label_1b1bd4;
        case 0x1b1bd8u: goto label_1b1bd8;
        case 0x1b1bdcu: goto label_1b1bdc;
        case 0x1b1be0u: goto label_1b1be0;
        case 0x1b1be4u: goto label_1b1be4;
        case 0x1b1be8u: goto label_1b1be8;
        case 0x1b1becu: goto label_1b1bec;
        case 0x1b1bf0u: goto label_1b1bf0;
        case 0x1b1bf4u: goto label_1b1bf4;
        case 0x1b1bf8u: goto label_1b1bf8;
        case 0x1b1bfcu: goto label_1b1bfc;
        case 0x1b1c00u: goto label_1b1c00;
        case 0x1b1c04u: goto label_1b1c04;
        case 0x1b1c08u: goto label_1b1c08;
        case 0x1b1c0cu: goto label_1b1c0c;
        case 0x1b1c10u: goto label_1b1c10;
        case 0x1b1c14u: goto label_1b1c14;
        case 0x1b1c18u: goto label_1b1c18;
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c20u: goto label_1b1c20;
        case 0x1b1c24u: goto label_1b1c24;
        case 0x1b1c28u: goto label_1b1c28;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c30u: goto label_1b1c30;
        case 0x1b1c34u: goto label_1b1c34;
        case 0x1b1c38u: goto label_1b1c38;
        case 0x1b1c3cu: goto label_1b1c3c;
        case 0x1b1c40u: goto label_1b1c40;
        case 0x1b1c44u: goto label_1b1c44;
        case 0x1b1c48u: goto label_1b1c48;
        case 0x1b1c4cu: goto label_1b1c4c;
        default: break;
    }

    ctx->pc = 0x1b18a0u;

label_1b18a0:
    // 0x1b18a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b18a4:
    // 0x1b18a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b18a8:
    // 0x1b18a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b18a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b18ac:
    // 0x1b18ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b18acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b18b0:
    // 0x1b18b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b18b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b18b4:
    // 0x1b18b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b18b8:
    // 0x1b18b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b18b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b18bc:
    // 0x1b18bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b18bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b18c0:
    // 0x1b18c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b18c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b18c4:
    // 0x1b18c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b18c8:
    // 0x1b18c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b18c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b18cc:
    // 0x1b18cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b18d0:
    // 0x1b18d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b18d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b18d4:
    // 0x1b18d4: 0xc06c310  jal         func_1B0C40
label_1b18d8:
    if (ctx->pc == 0x1B18D8u) {
        ctx->pc = 0x1B18D8u;
            // 0x1b18d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B18DCu;
        goto label_1b18dc;
    }
    ctx->pc = 0x1B18D4u;
    SET_GPR_U32(ctx, 31, 0x1B18DCu);
    ctx->pc = 0x1B18D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18D4u;
            // 0x1b18d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18DCu; }
        if (ctx->pc != 0x1B18DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18DCu; }
        if (ctx->pc != 0x1B18DCu) { return; }
    }
    ctx->pc = 0x1B18DCu;
label_1b18dc:
    // 0x1b18dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1b18dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b18e0:
    // 0x1b18e0: 0x12c0008f  beqz        $s6, . + 4 + (0x8F << 2)
label_1b18e4:
    if (ctx->pc == 0x1B18E4u) {
        ctx->pc = 0x1B18E4u;
            // 0x1b18e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B18E8u;
        goto label_1b18e8;
    }
    ctx->pc = 0x1B18E0u;
    {
        const bool branch_taken_0x1b18e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18E0u;
            // 0x1b18e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18e0) {
            ctx->pc = 0x1B1B20u;
            goto label_1b1b20;
        }
    }
    ctx->pc = 0x1B18E8u;
label_1b18e8:
    // 0x1b18e8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_1b18ec:
    if (ctx->pc == 0x1B18ECu) {
        ctx->pc = 0x1B18ECu;
            // 0x1b18ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B18F0u;
        goto label_1b18f0;
    }
    ctx->pc = 0x1B18E8u;
    {
        const bool branch_taken_0x1b18e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18E8u;
            // 0x1b18ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18e8) {
            ctx->pc = 0x1B1924u;
            goto label_1b1924;
        }
    }
    ctx->pc = 0x1B18F0u;
label_1b18f0:
    // 0x1b18f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b18f4:
    // 0x1b18f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1b18f8:
    if (ctx->pc == 0x1B18F8u) {
        ctx->pc = 0x1B18FCu;
        goto label_1b18fc;
    }
    ctx->pc = 0x1B18F4u;
    {
        const bool branch_taken_0x1b18f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b18f4) {
            ctx->pc = 0x1B1920u;
            goto label_1b1920;
        }
    }
    ctx->pc = 0x1B18FCu;
label_1b18fc:
    // 0x1b18fc: 0x8ec20324  lw          $v0, 0x324($s6)
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 804)));
label_1b1900:
    // 0x1b1900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b1904:
    if (ctx->pc == 0x1B1904u) {
        ctx->pc = 0x1B1908u;
        goto label_1b1908;
    }
    ctx->pc = 0x1B1900u;
    {
        const bool branch_taken_0x1b1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1900) {
            ctx->pc = 0x1B1920u;
            goto label_1b1920;
        }
    }
    ctx->pc = 0x1B1908u;
label_1b1908:
    // 0x1b1908: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b190c:
    // 0x1b190c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b1910:
    // 0x1b1910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b1914:
    if (ctx->pc == 0x1B1914u) {
        ctx->pc = 0x1B1914u;
            // 0x1b1914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1918u;
        goto label_1b1918;
    }
    ctx->pc = 0x1B1910u;
    {
        const bool branch_taken_0x1b1910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1910u;
            // 0x1b1914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1910) {
            ctx->pc = 0x1B1920u;
            goto label_1b1920;
        }
    }
    ctx->pc = 0x1B1918u;
label_1b1918:
    // 0x1b1918: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1b191c:
    if (ctx->pc == 0x1B191Cu) {
        ctx->pc = 0x1B191Cu;
            // 0x1b191c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1B1920u;
        goto label_1b1920;
    }
    ctx->pc = 0x1B1918u;
    {
        const bool branch_taken_0x1b1918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B191Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1918u;
            // 0x1b191c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1918) {
            ctx->pc = 0x1B1C28u;
            goto label_1b1c28;
        }
    }
    ctx->pc = 0x1B1920u;
label_1b1920:
    // 0x1b1920: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b1924:
    // 0x1b1924: 0xc06d694  jal         func_1B5A50
label_1b1928:
    if (ctx->pc == 0x1B1928u) {
        ctx->pc = 0x1B192Cu;
        goto label_1b192c;
    }
    ctx->pc = 0x1B1924u;
    SET_GPR_U32(ctx, 31, 0x1B192Cu);
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B192Cu; }
        if (ctx->pc != 0x1B192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B192Cu; }
        if (ctx->pc != 0x1B192Cu) { return; }
    }
    ctx->pc = 0x1B192Cu;
label_1b192c:
    // 0x1b192c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_1b1930:
    if (ctx->pc == 0x1B1930u) {
        ctx->pc = 0x1B1930u;
            // 0x1b1930: 0xaec00310  sw          $zero, 0x310($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 784), GPR_U32(ctx, 0));
        ctx->pc = 0x1B1934u;
        goto label_1b1934;
    }
    ctx->pc = 0x1B192Cu;
    {
        const bool branch_taken_0x1b192c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B192Cu;
            // 0x1b1930: 0xaec00310  sw          $zero, 0x310($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b192c) {
            ctx->pc = 0x1B195Cu;
            goto label_1b195c;
        }
    }
    ctx->pc = 0x1B1934u;
label_1b1934:
    // 0x1b1934: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x1b1934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_1b1938:
    // 0x1b1938: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1b193c:
    if (ctx->pc == 0x1B193Cu) {
        ctx->pc = 0x1B1940u;
        goto label_1b1940;
    }
    ctx->pc = 0x1B1938u;
    {
        const bool branch_taken_0x1b1938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1938) {
            ctx->pc = 0x1B195Cu;
            goto label_1b195c;
        }
    }
    ctx->pc = 0x1B1940u;
label_1b1940:
    // 0x1b1940: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1b1944:
    if (ctx->pc == 0x1B1944u) {
        ctx->pc = 0x1B1948u;
        goto label_1b1948;
    }
    ctx->pc = 0x1B1940u;
    {
        const bool branch_taken_0x1b1940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1940) {
            ctx->pc = 0x1B195Cu;
            goto label_1b195c;
        }
    }
    ctx->pc = 0x1B1948u;
label_1b1948:
    // 0x1b1948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b194c:
    // 0x1b194c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1b194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b1950:
    // 0x1b1950: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1b1954:
    // 0x1b1954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b1958:
    // 0x1b1958: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1b1958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1b195c:
    // 0x1b195c: 0x8ec20328  lw          $v0, 0x328($s6)
    ctx->pc = 0x1b195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 808)));
label_1b1960:
    // 0x1b1960: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b1964:
    if (ctx->pc == 0x1B1964u) {
        ctx->pc = 0x1B1968u;
        goto label_1b1968;
    }
    ctx->pc = 0x1B1960u;
    {
        const bool branch_taken_0x1b1960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1960) {
            ctx->pc = 0x1B1994u;
            goto label_1b1994;
        }
    }
    ctx->pc = 0x1B1968u;
label_1b1968:
    // 0x1b1968: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1b1968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b196c:
    // 0x1b196c: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
label_1b1970:
    if (ctx->pc == 0x1B1970u) {
        ctx->pc = 0x1B1974u;
        goto label_1b1974;
    }
    ctx->pc = 0x1B196Cu;
    {
        const bool branch_taken_0x1b196c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b196c) {
            ctx->pc = 0x1B1994u;
            goto label_1b1994;
        }
    }
    ctx->pc = 0x1B1974u;
label_1b1974:
    // 0x1b1974: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_1b1978:
    if (ctx->pc == 0x1B1978u) {
        ctx->pc = 0x1B197Cu;
        goto label_1b197c;
    }
    ctx->pc = 0x1B1974u;
    {
        const bool branch_taken_0x1b1974 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1974) {
            ctx->pc = 0x1B1994u;
            goto label_1b1994;
        }
    }
    ctx->pc = 0x1B197Cu;
label_1b197c:
    // 0x1b197c: 0x8e420410  lw          $v0, 0x410($s2)
    ctx->pc = 0x1b197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1040)));
label_1b1980:
    // 0x1b1980: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b1984:
    // 0x1b1984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b1988:
    // 0x1b1988: 0xae430410  sw          $v1, 0x410($s2)
    ctx->pc = 0x1b1988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1040), GPR_U32(ctx, 3));
label_1b198c:
    // 0x1b198c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b1990:
    // 0x1b1990: 0xac440414  sw          $a0, 0x414($v0)
    ctx->pc = 0x1b1990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 4));
label_1b1994:
    // 0x1b1994: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
label_1b1998:
    if (ctx->pc == 0x1B1998u) {
        ctx->pc = 0x1B199Cu;
        goto label_1b199c;
    }
    ctx->pc = 0x1B1994u;
    {
        const bool branch_taken_0x1b1994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1994) {
            ctx->pc = 0x1B1A5Cu;
            goto label_1b1a5c;
        }
    }
    ctx->pc = 0x1B199Cu;
label_1b199c:
    // 0x1b199c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b19a0:
    // 0x1b19a0: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
label_1b19a4:
    if (ctx->pc == 0x1B19A4u) {
        ctx->pc = 0x1B19A4u;
            // 0x1b19a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B19A8u;
        goto label_1b19a8;
    }
    ctx->pc = 0x1B19A0u;
    {
        const bool branch_taken_0x1b19a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B19A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19A0u;
            // 0x1b19a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19a0) {
            ctx->pc = 0x1B1A5Cu;
            goto label_1b1a5c;
        }
    }
    ctx->pc = 0x1B19A8u;
label_1b19a8:
    // 0x1b19a8: 0xc06d6b0  jal         func_1B5AC0
label_1b19ac:
    if (ctx->pc == 0x1B19ACu) {
        ctx->pc = 0x1B19B0u;
        goto label_1b19b0;
    }
    ctx->pc = 0x1B19A8u;
    SET_GPR_U32(ctx, 31, 0x1B19B0u);
    ctx->pc = 0x1B5AC0u;
    if (runtime->hasFunction(0x1B5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19B0u; }
        if (ctx->pc != 0x1B19B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFence__10CEditPartsFv_0x1b5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19B0u; }
        if (ctx->pc != 0x1B19B0u) { return; }
    }
    ctx->pc = 0x1B19B0u;
label_1b19b0:
    // 0x1b19b0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_1b19b4:
    if (ctx->pc == 0x1B19B4u) {
        ctx->pc = 0x1B19B4u;
            // 0x1b19b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B19B8u;
        goto label_1b19b8;
    }
    ctx->pc = 0x1B19B0u;
    {
        const bool branch_taken_0x1b19b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B19B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19B0u;
            // 0x1b19b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19b0) {
            ctx->pc = 0x1B1A5Cu;
            goto label_1b1a5c;
        }
    }
    ctx->pc = 0x1B19B8u;
label_1b19b8:
    // 0x1b19b8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b19bc:
    if (ctx->pc == 0x1B19BCu) {
        ctx->pc = 0x1B19C0u;
        goto label_1b19c0;
    }
    ctx->pc = 0x1B19B8u;
    {
        const bool branch_taken_0x1b19b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b19b8) {
            ctx->pc = 0x1B1A44u;
            goto label_1b1a44;
        }
    }
    ctx->pc = 0x1B19C0u;
label_1b19c0:
    // 0x1b19c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b19c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b19c4:
    // 0x1b19c4: 0xc0599ec  jal         func_1667B0
label_1b19c8:
    if (ctx->pc == 0x1B19C8u) {
        ctx->pc = 0x1B19C8u;
            // 0x1b19c8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1B19CCu;
        goto label_1b19cc;
    }
    ctx->pc = 0x1B19C4u;
    SET_GPR_U32(ctx, 31, 0x1B19CCu);
    ctx->pc = 0x1B19C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19C4u;
            // 0x1b19c8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1667B0u;
    if (runtime->hasFunction(0x1667B0u)) {
        auto targetFn = runtime->lookupFunction(0x1667B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19CCu; }
        if (ctx->pc != 0x1B19CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__9CMapPartsFiPf_0x1667b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19CCu; }
        if (ctx->pc != 0x1B19CCu) { return; }
    }
    ctx->pc = 0x1B19CCu;
label_1b19cc:
    // 0x1b19cc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1b19d0:
    if (ctx->pc == 0x1B19D0u) {
        ctx->pc = 0x1B19D0u;
            // 0x1b19d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B19D4u;
        goto label_1b19d4;
    }
    ctx->pc = 0x1B19CCu;
    {
        const bool branch_taken_0x1b19cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19CCu;
            // 0x1b19d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19cc) {
            ctx->pc = 0x1B1A40u;
            goto label_1b1a40;
        }
    }
    ctx->pc = 0x1B19D4u;
label_1b19d4:
    // 0x1b19d4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b19d8:
    if (ctx->pc == 0x1B19D8u) {
        ctx->pc = 0x1B19D8u;
            // 0x1b19d8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B19DCu;
        goto label_1b19dc;
    }
    ctx->pc = 0x1B19D4u;
    {
        const bool branch_taken_0x1b19d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19D4u;
            // 0x1b19d8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19d4) {
            ctx->pc = 0x1B1A30u;
            goto label_1b1a30;
        }
    }
    ctx->pc = 0x1B19DCu;
label_1b19dc:
    // 0x1b19dc: 0x0  nop
    ctx->pc = 0x1b19dcu;
    // NOP
label_1b19e0:
    // 0x1b19e0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1b19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1b19e4:
    // 0x1b19e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b19e8:
    // 0x1b19e8: 0xc06d7e4  jal         func_1B5F90
label_1b19ec:
    if (ctx->pc == 0x1B19ECu) {
        ctx->pc = 0x1B19ECu;
            // 0x1b19ec: 0x572821  addu        $a1, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->pc = 0x1B19F0u;
        goto label_1b19f0;
    }
    ctx->pc = 0x1B19E8u;
    SET_GPR_U32(ctx, 31, 0x1B19F0u);
    ctx->pc = 0x1B19ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19E8u;
            // 0x1b19ec: 0x572821  addu        $a1, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F90u;
    if (runtime->hasFunction(0x1B5F90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19F0u; }
        if (ctx->pc != 0x1B19F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPartsCmpColor__FPfPf_0x1b5f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19F0u; }
        if (ctx->pc != 0x1B19F0u) { return; }
    }
    ctx->pc = 0x1B19F0u;
label_1b19f0:
    // 0x1b19f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b19f4:
    if (ctx->pc == 0x1B19F4u) {
        ctx->pc = 0x1B19F8u;
        goto label_1b19f8;
    }
    ctx->pc = 0x1B19F0u;
    {
        const bool branch_taken_0x1b19f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b19f0) {
            ctx->pc = 0x1B1A24u;
            goto label_1b1a24;
        }
    }
    ctx->pc = 0x1B19F8u;
label_1b19f8:
    // 0x1b19f8: 0x8ec20324  lw          $v0, 0x324($s6)
    ctx->pc = 0x1b19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 804)));
label_1b19fc:
    // 0x1b19fc: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1b19fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b1a00:
    // 0x1b1a00: 0xc0bbabc  jal         func_2EEAF0
label_1b1a04:
    if (ctx->pc == 0x1B1A04u) {
        ctx->pc = 0x1B1A04u;
            // 0x1b1a04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A08u;
        goto label_1b1a08;
    }
    ctx->pc = 0x1B1A00u;
    SET_GPR_U32(ctx, 31, 0x1B1A08u);
    ctx->pc = 0x1B1A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A00u;
            // 0x1b1a04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEAF0u;
    if (runtime->hasFunction(0x2EEAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2EEAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A08u; }
        if (ctx->pc != 0x1B1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RePaintNum__8CEditMapFi_0x2eeaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A08u; }
        if (ctx->pc != 0x1B1A08u) { return; }
    }
    ctx->pc = 0x1B1A08u;
label_1b1a08:
    // 0x1b1a08: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1b1a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1b1a0c:
    // 0x1b1a0c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1b1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1b1a10:
    // 0x1b1a10: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b1a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b1a14:
    // 0x1b1a14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1a18:
    // 0x1b1a18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b1a1c:
    // 0x1b1a1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b1a20:
    if (ctx->pc == 0x1B1A20u) {
        ctx->pc = 0x1B1A20u;
            // 0x1b1a20: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1B1A24u;
        goto label_1b1a24;
    }
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A1Cu;
            // 0x1b1a20: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A40u;
            goto label_1b1a40;
        }
    }
    ctx->pc = 0x1B1A24u;
label_1b1a24:
    // 0x1b1a24: 0x0  nop
    ctx->pc = 0x1b1a24u;
    // NOP
label_1b1a28:
    // 0x1b1a28: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1b1a2c:
    // 0x1b1a2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b1a30:
    // 0x1b1a30: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b1a34:
    // 0x1b1a34: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b1a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1a38:
    // 0x1b1a38: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1b1a3c:
    if (ctx->pc == 0x1B1A3Cu) {
        ctx->pc = 0x1B1A40u;
        goto label_1b1a40;
    }
    ctx->pc = 0x1B1A38u;
    {
        const bool branch_taken_0x1b1a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a38) {
            ctx->pc = 0x1B19DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b19dc;
        }
    }
    ctx->pc = 0x1B1A40u;
label_1b1a40:
    // 0x1b1a40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1a44:
    // 0x1b1a44: 0x0  nop
    ctx->pc = 0x1b1a44u;
    // NOP
label_1b1a48:
    // 0x1b1a48: 0x8ec20324  lw          $v0, 0x324($s6)
    ctx->pc = 0x1b1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 804)));
label_1b1a4c:
    // 0x1b1a4c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1b1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1b1a50:
    // 0x1b1a50: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b1a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1a54:
    // 0x1b1a54: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1b1a58:
    if (ctx->pc == 0x1B1A58u) {
        ctx->pc = 0x1B1A58u;
            // 0x1b1a58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A5Cu;
        goto label_1b1a5c;
    }
    ctx->pc = 0x1B1A54u;
    {
        const bool branch_taken_0x1b1a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A54u;
            // 0x1b1a58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a54) {
            ctx->pc = 0x1B19C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b19c0;
        }
    }
    ctx->pc = 0x1B1A5Cu;
label_1b1a5c:
    // 0x1b1a5c: 0x0  nop
    ctx->pc = 0x1b1a5cu;
    // NOP
label_1b1a60:
    // 0x1b1a60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1a64:
    // 0x1b1a64: 0xc06c608  jal         func_1B1820
label_1b1a68:
    if (ctx->pc == 0x1B1A68u) {
        ctx->pc = 0x1B1A68u;
            // 0x1b1a68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A6Cu;
        goto label_1b1a6c;
    }
    ctx->pc = 0x1B1A64u;
    SET_GPR_U32(ctx, 31, 0x1B1A6Cu);
    ctx->pc = 0x1B1A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A64u;
            // 0x1b1a68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1820u;
    if (runtime->hasFunction(0x1B1820u)) {
        auto targetFn = runtime->lookupFunction(0x1B1820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A6Cu; }
        if (ctx->pc != 0x1B1A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEditParts__8CEditMapFi_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A6Cu; }
        if (ctx->pc != 0x1B1A6Cu) { return; }
    }
    ctx->pc = 0x1B1A6Cu;
label_1b1a6c:
    // 0x1b1a6c: 0x8ea20f48  lw          $v0, 0xF48($s5)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3912)));
label_1b1a70:
    // 0x1b1a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1a74:
    if (ctx->pc == 0x1B1A74u) {
        ctx->pc = 0x1B1A74u;
            // 0x1b1a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B1A78u;
        goto label_1b1a78;
    }
    ctx->pc = 0x1B1A70u;
    {
        const bool branch_taken_0x1b1a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A70u;
            // 0x1b1a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a70) {
            ctx->pc = 0x1B1A84u;
            goto label_1b1a84;
        }
    }
    ctx->pc = 0x1B1A78u;
label_1b1a78:
    // 0x1b1a78: 0x8eb60f4c  lw          $s6, 0xF4C($s5)
    ctx->pc = 0x1b1a78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3916)));
label_1b1a7c:
    // 0x1b1a7c: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_1b1a80:
    if (ctx->pc == 0x1B1A80u) {
        ctx->pc = 0x1B1A80u;
            // 0x1b1a80: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A84u;
        goto label_1b1a84;
    }
    ctx->pc = 0x1B1A7Cu;
    {
        const bool branch_taken_0x1b1a7c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A7Cu;
            // 0x1b1a80: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a7c) {
            ctx->pc = 0x1B1A8Cu;
            goto label_1b1a8c;
        }
    }
    ctx->pc = 0x1B1A84u;
label_1b1a84:
    // 0x1b1a84: 0x10000067  b           . + 4 + (0x67 << 2)
label_1b1a88:
    if (ctx->pc == 0x1B1A88u) {
        ctx->pc = 0x1B1A8Cu;
        goto label_1b1a8c;
    }
    ctx->pc = 0x1B1A84u;
    {
        const bool branch_taken_0x1b1a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a84) {
            ctx->pc = 0x1B1C24u;
            goto label_1b1c24;
        }
    }
    ctx->pc = 0x1B1A8Cu;
label_1b1a8c:
    // 0x1b1a8c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b1a90:
    if (ctx->pc == 0x1B1A90u) {
        ctx->pc = 0x1B1A94u;
        goto label_1b1a94;
    }
    ctx->pc = 0x1B1A8Cu;
    {
        const bool branch_taken_0x1b1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a8c) {
            ctx->pc = 0x1B1B08u;
            goto label_1b1b08;
        }
    }
    ctx->pc = 0x1B1A94u;
label_1b1a94:
    // 0x1b1a94: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x1b1a94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1b1a98:
    // 0x1b1a98: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1b1a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
label_1b1a9c:
    // 0x1b1a9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b1a9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1b1aa0:
    // 0x1b1aa0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1b1aa4:
    if (ctx->pc == 0x1B1AA4u) {
        ctx->pc = 0x1B1AA8u;
        goto label_1b1aa8;
    }
    ctx->pc = 0x1B1AA0u;
    {
        const bool branch_taken_0x1b1aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1aa0) {
            ctx->pc = 0x1B1AFCu;
            goto label_1b1afc;
        }
    }
    ctx->pc = 0x1B1AA8u;
label_1b1aa8:
    // 0x1b1aa8: 0x8eb10f4c  lw          $s1, 0xF4C($s5)
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3916)));
label_1b1aac:
    // 0x1b1aac: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b1ab0:
    if (ctx->pc == 0x1B1AB0u) {
        ctx->pc = 0x1B1AB0u;
            // 0x1b1ab0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AB4u;
        goto label_1b1ab4;
    }
    ctx->pc = 0x1B1AACu;
    {
        const bool branch_taken_0x1b1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AACu;
            // 0x1b1ab0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1aac) {
            ctx->pc = 0x1B1AE8u;
            goto label_1b1ae8;
        }
    }
    ctx->pc = 0x1B1AB4u;
label_1b1ab4:
    // 0x1b1ab4: 0x0  nop
    ctx->pc = 0x1b1ab4u;
    // NOP
label_1b1ab8:
    // 0x1b1ab8: 0x12170009  beq         $s0, $s7, . + 4 + (0x9 << 2)
label_1b1abc:
    if (ctx->pc == 0x1B1ABCu) {
        ctx->pc = 0x1B1AC0u;
        goto label_1b1ac0;
    }
    ctx->pc = 0x1B1AB8u;
    {
        const bool branch_taken_0x1b1ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        if (branch_taken_0x1b1ab8) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1AC0u;
label_1b1ac0:
    // 0x1b1ac0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x1b1ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1b1ac4:
    // 0x1b1ac4: 0x14540006  bne         $v0, $s4, . + 4 + (0x6 << 2)
label_1b1ac8:
    if (ctx->pc == 0x1B1AC8u) {
        ctx->pc = 0x1B1ACCu;
        goto label_1b1acc;
    }
    ctx->pc = 0x1B1AC4u;
    {
        const bool branch_taken_0x1b1ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1b1ac4) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1ACCu;
label_1b1acc:
    // 0x1b1acc: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1b1ad0:
    // 0x1b1ad0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ad4:
    // 0x1b1ad4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b1ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ad8:
    // 0x1b1ad8: 0xc06c628  jal         func_1B18A0
label_1b1adc:
    if (ctx->pc == 0x1B1ADCu) {
        ctx->pc = 0x1B1ADCu;
            // 0x1b1adc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AE0u;
        goto label_1b1ae0;
    }
    ctx->pc = 0x1B1AD8u;
    SET_GPR_U32(ctx, 31, 0x1B1AE0u);
    ctx->pc = 0x1B1ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AD8u;
            // 0x1b1adc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B18A0u;
    goto label_1b18a0;
    ctx->pc = 0x1B1AE0u;
label_1b1ae0:
    // 0x1b1ae0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1ae4:
    // 0x1b1ae4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b1ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1b1ae8:
    // 0x1b1ae8: 0x8ea20f48  lw          $v0, 0xF48($s5)
    ctx->pc = 0x1b1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3912)));
label_1b1aec:
    // 0x1b1aec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b1aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1af0:
    // 0x1b1af0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1b1af4:
    if (ctx->pc == 0x1B1AF4u) {
        ctx->pc = 0x1B1AF4u;
            // 0x1b1af4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B1AF8u;
        goto label_1b1af8;
    }
    ctx->pc = 0x1B1AF0u;
    {
        const bool branch_taken_0x1b1af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AF0u;
            // 0x1b1af4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1af0) {
            ctx->pc = 0x1B1AB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1ab4;
        }
    }
    ctx->pc = 0x1B1AF8u;
label_1b1af8:
    // 0x1b1af8: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x1b1af8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
label_1b1afc:
    // 0x1b1afc: 0x0  nop
    ctx->pc = 0x1b1afcu;
    // NOP
label_1b1b00:
    // 0x1b1b00: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1b1b04:
    // 0x1b1b04: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1b1b04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_1b1b08:
    // 0x1b1b08: 0x8ea20f48  lw          $v0, 0xF48($s5)
    ctx->pc = 0x1b1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3912)));
label_1b1b0c:
    // 0x1b1b0c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x1b1b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1b10:
    // 0x1b1b10: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1b1b14:
    if (ctx->pc == 0x1B1B14u) {
        ctx->pc = 0x1B1B14u;
            // 0x1b1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B1B18u;
        goto label_1b1b18;
    }
    ctx->pc = 0x1B1B10u;
    {
        const bool branch_taken_0x1b1b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B10u;
            // 0x1b1b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b10) {
            ctx->pc = 0x1B1A94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1a94;
        }
    }
    ctx->pc = 0x1B1B18u;
label_1b1b18:
    // 0x1b1b18: 0x10000042  b           . + 4 + (0x42 << 2)
label_1b1b1c:
    if (ctx->pc == 0x1B1B1Cu) {
        ctx->pc = 0x1B1B20u;
        goto label_1b1b20;
    }
    ctx->pc = 0x1B1B18u;
    {
        const bool branch_taken_0x1b1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b18) {
            ctx->pc = 0x1B1C24u;
            goto label_1b1c24;
        }
    }
    ctx->pc = 0x1B1B20u;
label_1b1b20:
    // 0x1b1b20: 0xc0a5a10  jal         func_296840
label_1b1b24:
    if (ctx->pc == 0x1B1B24u) {
        ctx->pc = 0x1B1B24u;
            // 0x1b1b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B28u;
        goto label_1b1b28;
    }
    ctx->pc = 0x1B1B20u;
    SET_GPR_U32(ctx, 31, 0x1B1B28u);
    ctx->pc = 0x1B1B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B20u;
            // 0x1b1b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296840u;
    if (runtime->hasFunction(0x296840u)) {
        auto targetFn = runtime->lookupFunction(0x296840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B28u; }
        if (ctx->pc != 0x1B1B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveRiver__8CEditMapFPf_0x296840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B28u; }
        if (ctx->pc != 0x1B1B28u) { return; }
    }
    ctx->pc = 0x1B1B28u;
label_1b1b28:
    // 0x1b1b28: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1b1b2c:
    if (ctx->pc == 0x1B1B2Cu) {
        ctx->pc = 0x1B1B2Cu;
            // 0x1b1b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B30u;
        goto label_1b1b30;
    }
    ctx->pc = 0x1B1B28u;
    {
        const bool branch_taken_0x1b1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B28u;
            // 0x1b1b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b28) {
            ctx->pc = 0x1B1C24u;
            goto label_1b1c24;
        }
    }
    ctx->pc = 0x1B1B30u;
label_1b1b30:
    // 0x1b1b30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b34:
    // 0x1b1b34: 0xc06c2d8  jal         func_1B0B60
label_1b1b38:
    if (ctx->pc == 0x1B1B38u) {
        ctx->pc = 0x1B1B38u;
            // 0x1b1b38: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1B1B3Cu;
        goto label_1b1b3c;
    }
    ctx->pc = 0x1B1B34u;
    SET_GPR_U32(ctx, 31, 0x1B1B3Cu);
    ctx->pc = 0x1B1B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B34u;
            // 0x1b1b38: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B60u;
    if (runtime->hasFunction(0x1B0B60u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B3Cu; }
        if (ctx->pc != 0x1B1B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtType__8CEditMapFi_0x1b0b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B3Cu; }
        if (ctx->pc != 0x1B1B3Cu) { return; }
    }
    ctx->pc = 0x1B1B3Cu;
label_1b1b3c:
    // 0x1b1b3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b1b40:
    if (ctx->pc == 0x1B1B40u) {
        ctx->pc = 0x1B1B44u;
        goto label_1b1b44;
    }
    ctx->pc = 0x1B1B3Cu;
    {
        const bool branch_taken_0x1b1b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b3c) {
            ctx->pc = 0x1B1B74u;
            goto label_1b1b74;
        }
    }
    ctx->pc = 0x1B1B44u;
label_1b1b44:
    // 0x1b1b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1b48:
    // 0x1b1b48: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_1b1b4c:
    if (ctx->pc == 0x1B1B4Cu) {
        ctx->pc = 0x1B1B4Cu;
            // 0x1b1b4c: 0x28410100  slti        $at, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->pc = 0x1B1B50u;
        goto label_1b1b50;
    }
    ctx->pc = 0x1B1B48u;
    {
        const bool branch_taken_0x1b1b48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B48u;
            // 0x1b1b4c: 0x28410100  slti        $at, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b48) {
            ctx->pc = 0x1B1B74u;
            goto label_1b1b74;
        }
    }
    ctx->pc = 0x1B1B50u;
label_1b1b50:
    // 0x1b1b50: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1b1b54:
    if (ctx->pc == 0x1B1B54u) {
        ctx->pc = 0x1B1B58u;
        goto label_1b1b58;
    }
    ctx->pc = 0x1B1B50u;
    {
        const bool branch_taken_0x1b1b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b50) {
            ctx->pc = 0x1B1B74u;
            goto label_1b1b74;
        }
    }
    ctx->pc = 0x1B1B58u;
label_1b1b58:
    // 0x1b1b58: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1b1b5c:
    if (ctx->pc == 0x1B1B5Cu) {
        ctx->pc = 0x1B1B60u;
        goto label_1b1b60;
    }
    ctx->pc = 0x1B1B58u;
    {
        const bool branch_taken_0x1b1b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b58) {
            ctx->pc = 0x1B1B74u;
            goto label_1b1b74;
        }
    }
    ctx->pc = 0x1B1B60u;
label_1b1b60:
    // 0x1b1b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b1b64:
    // 0x1b1b64: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b1b68:
    // 0x1b1b68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1b1b6c:
    // 0x1b1b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b1b70:
    // 0x1b1b70: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1b1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1b1b74:
    // 0x1b1b74: 0x8eb00d44  lw          $s0, 0xD44($s5)
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
label_1b1b78:
    // 0x1b1b78: 0x10000025  b           . + 4 + (0x25 << 2)
label_1b1b7c:
    if (ctx->pc == 0x1B1B7Cu) {
        ctx->pc = 0x1B1B7Cu;
            // 0x1b1b7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B80u;
        goto label_1b1b80;
    }
    ctx->pc = 0x1B1B78u;
    {
        const bool branch_taken_0x1b1b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B78u;
            // 0x1b1b7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b78) {
            ctx->pc = 0x1B1C10u;
            goto label_1b1c10;
        }
    }
    ctx->pc = 0x1B1B80u;
label_1b1b80:
    // 0x1b1b80: 0xc0bb988  jal         func_2EE620
label_1b1b84:
    if (ctx->pc == 0x1B1B84u) {
        ctx->pc = 0x1B1B84u;
            // 0x1b1b84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B88u;
        goto label_1b1b88;
    }
    ctx->pc = 0x1B1B80u;
    SET_GPR_U32(ctx, 31, 0x1B1B88u);
    ctx->pc = 0x1B1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B80u;
            // 0x1b1b84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    }
    ctx->pc = 0x1B1B88u;
label_1b1b88:
    // 0x1b1b88: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1b1b8c:
    if (ctx->pc == 0x1B1B8Cu) {
        ctx->pc = 0x1B1B90u;
        goto label_1b1b90;
    }
    ctx->pc = 0x1B1B88u;
    {
        const bool branch_taken_0x1b1b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b88) {
            ctx->pc = 0x1B1C04u;
            goto label_1b1c04;
        }
    }
    ctx->pc = 0x1B1B90u;
label_1b1b90:
    // 0x1b1b90: 0x8e110324  lw          $s1, 0x324($s0)
    ctx->pc = 0x1b1b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1b1b94:
    // 0x1b1b94: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1b1b98:
    if (ctx->pc == 0x1B1B98u) {
        ctx->pc = 0x1B1B9Cu;
        goto label_1b1b9c;
    }
    ctx->pc = 0x1B1B94u;
    {
        const bool branch_taken_0x1b1b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b94) {
            ctx->pc = 0x1B1C04u;
            goto label_1b1c04;
        }
    }
    ctx->pc = 0x1B1B9Cu;
label_1b1b9c:
    // 0x1b1b9c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b1ba0:
    // 0x1b1ba0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1b1ba4:
    // 0x1b1ba4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b1ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b1ba8:
    // 0x1b1ba8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1b1bac:
    if (ctx->pc == 0x1B1BACu) {
        ctx->pc = 0x1B1BB0u;
        goto label_1b1bb0;
    }
    ctx->pc = 0x1B1BA8u;
    {
        const bool branch_taken_0x1b1ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ba8) {
            ctx->pc = 0x1B1C04u;
            goto label_1b1c04;
        }
    }
    ctx->pc = 0x1B1BB0u;
label_1b1bb0:
    // 0x1b1bb0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1bb4:
    // 0x1b1bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1bb8:
    // 0x1b1bb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1bbc:
    // 0x1b1bbc: 0x320f809  jalr        $t9
label_1b1bc0:
    if (ctx->pc == 0x1B1BC0u) {
        ctx->pc = 0x1B1BC0u;
            // 0x1b1bc0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1B1BC4u;
        goto label_1b1bc4;
    }
    ctx->pc = 0x1B1BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1BC4u);
        ctx->pc = 0x1B1BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BBCu;
            // 0x1b1bc0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1BC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BC4u; }
            if (ctx->pc != 0x1B1BC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1BC4u;
label_1b1bc4:
    // 0x1b1bc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b1bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1bc8:
    // 0x1b1bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1bcc:
    // 0x1b1bcc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b1bd0:
    // 0x1b1bd0: 0x320f809  jalr        $t9
label_1b1bd4:
    if (ctx->pc == 0x1B1BD4u) {
        ctx->pc = 0x1B1BD4u;
            // 0x1b1bd4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B1BD8u;
        goto label_1b1bd8;
    }
    ctx->pc = 0x1B1BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1BD8u);
        ctx->pc = 0x1B1BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BD0u;
            // 0x1b1bd4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BD8u; }
            if (ctx->pc != 0x1B1BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1BD8u;
label_1b1bd8:
    // 0x1b1bd8: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x1b1bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b1bdc:
    // 0x1b1bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1be0:
    // 0x1b1be0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1be4:
    // 0x1b1be4: 0xc0bb7d8  jal         func_2EDF60
label_1b1be8:
    if (ctx->pc == 0x1B1BE8u) {
        ctx->pc = 0x1B1BE8u;
            // 0x1b1be8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1B1BECu;
        goto label_1b1bec;
    }
    ctx->pc = 0x1B1BE4u;
    SET_GPR_U32(ctx, 31, 0x1B1BECu);
    ctx->pc = 0x1B1BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BE4u;
            // 0x1b1be8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF60u;
    if (runtime->hasFunction(0x2EDF60u)) {
        auto targetFn = runtime->lookupFunction(0x2EDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BECu; }
        if (ctx->pc != 0x1B1BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditPartsOnRiver__8CEditMapFP14CEditPartsInfoPff_0x2edf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BECu; }
        if (ctx->pc != 0x1B1BECu) { return; }
    }
    ctx->pc = 0x1B1BECu;
label_1b1bec:
    // 0x1b1bec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b1bf0:
    if (ctx->pc == 0x1B1BF0u) {
        ctx->pc = 0x1B1BF0u;
            // 0x1b1bf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BF4u;
        goto label_1b1bf4;
    }
    ctx->pc = 0x1B1BECu;
    {
        const bool branch_taken_0x1b1bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BECu;
            // 0x1b1bf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bec) {
            ctx->pc = 0x1B1C04u;
            goto label_1b1c04;
        }
    }
    ctx->pc = 0x1B1BF4u;
label_1b1bf4:
    // 0x1b1bf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b1bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1bf8:
    // 0x1b1bf8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1b1bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b1bfc:
    // 0x1b1bfc: 0xc06c628  jal         func_1B18A0
label_1b1c00:
    if (ctx->pc == 0x1B1C00u) {
        ctx->pc = 0x1B1C00u;
            // 0x1b1c00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C04u;
        goto label_1b1c04;
    }
    ctx->pc = 0x1B1BFCu;
    SET_GPR_U32(ctx, 31, 0x1B1C04u);
    ctx->pc = 0x1B1C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BFCu;
            // 0x1b1c00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B18A0u;
    goto label_1b18a0;
    ctx->pc = 0x1B1C04u;
label_1b1c04:
    // 0x1b1c04: 0x0  nop
    ctx->pc = 0x1b1c04u;
    // NOP
label_1b1c08:
    // 0x1b1c08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b1c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b1c0c:
    // 0x1b1c0c: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1b1c10:
    // 0x1b1c10: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
label_1b1c14:
    // 0x1b1c14: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b1c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1c18:
    // 0x1b1c18: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1b1c1c:
    if (ctx->pc == 0x1B1C1Cu) {
        ctx->pc = 0x1B1C1Cu;
            // 0x1b1c1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C20u;
        goto label_1b1c20;
    }
    ctx->pc = 0x1B1C18u;
    {
        const bool branch_taken_0x1b1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C18u;
            // 0x1b1c1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c18) {
            ctx->pc = 0x1B1B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1b80;
        }
    }
    ctx->pc = 0x1B1C20u;
label_1b1c20:
    // 0x1b1c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1c24:
    // 0x1b1c24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1c28:
    // 0x1b1c28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b1c28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1c2c:
    // 0x1b1c2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b1c2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1c30:
    // 0x1b1c30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b1c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1c34:
    // 0x1b1c34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1c38:
    // 0x1b1c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1c3c:
    // 0x1b1c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1c40:
    // 0x1b1c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1c44:
    // 0x1b1c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1c48:
    // 0x1b1c48: 0x3e00008  jr          $ra
label_1b1c4c:
    if (ctx->pc == 0x1B1C4Cu) {
        ctx->pc = 0x1B1C4Cu;
            // 0x1b1c4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1B1C50u;
        goto label_fallthrough_0x1b1c48;
    }
    ctx->pc = 0x1B1C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C48u;
            // 0x1b1c4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b1c48:
    ctx->pc = 0x1B1C50u;
}
