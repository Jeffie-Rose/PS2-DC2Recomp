#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CDynamicAnimeFv
// Address: 0x179910 - 0x179e58
void Step__13CDynamicAnimeFv_0x179910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CDynamicAnimeFv_0x179910");
#endif

    switch (ctx->pc) {
        case 0x179910u: goto label_179910;
        case 0x179914u: goto label_179914;
        case 0x179918u: goto label_179918;
        case 0x17991cu: goto label_17991c;
        case 0x179920u: goto label_179920;
        case 0x179924u: goto label_179924;
        case 0x179928u: goto label_179928;
        case 0x17992cu: goto label_17992c;
        case 0x179930u: goto label_179930;
        case 0x179934u: goto label_179934;
        case 0x179938u: goto label_179938;
        case 0x17993cu: goto label_17993c;
        case 0x179940u: goto label_179940;
        case 0x179944u: goto label_179944;
        case 0x179948u: goto label_179948;
        case 0x17994cu: goto label_17994c;
        case 0x179950u: goto label_179950;
        case 0x179954u: goto label_179954;
        case 0x179958u: goto label_179958;
        case 0x17995cu: goto label_17995c;
        case 0x179960u: goto label_179960;
        case 0x179964u: goto label_179964;
        case 0x179968u: goto label_179968;
        case 0x17996cu: goto label_17996c;
        case 0x179970u: goto label_179970;
        case 0x179974u: goto label_179974;
        case 0x179978u: goto label_179978;
        case 0x17997cu: goto label_17997c;
        case 0x179980u: goto label_179980;
        case 0x179984u: goto label_179984;
        case 0x179988u: goto label_179988;
        case 0x17998cu: goto label_17998c;
        case 0x179990u: goto label_179990;
        case 0x179994u: goto label_179994;
        case 0x179998u: goto label_179998;
        case 0x17999cu: goto label_17999c;
        case 0x1799a0u: goto label_1799a0;
        case 0x1799a4u: goto label_1799a4;
        case 0x1799a8u: goto label_1799a8;
        case 0x1799acu: goto label_1799ac;
        case 0x1799b0u: goto label_1799b0;
        case 0x1799b4u: goto label_1799b4;
        case 0x1799b8u: goto label_1799b8;
        case 0x1799bcu: goto label_1799bc;
        case 0x1799c0u: goto label_1799c0;
        case 0x1799c4u: goto label_1799c4;
        case 0x1799c8u: goto label_1799c8;
        case 0x1799ccu: goto label_1799cc;
        case 0x1799d0u: goto label_1799d0;
        case 0x1799d4u: goto label_1799d4;
        case 0x1799d8u: goto label_1799d8;
        case 0x1799dcu: goto label_1799dc;
        case 0x1799e0u: goto label_1799e0;
        case 0x1799e4u: goto label_1799e4;
        case 0x1799e8u: goto label_1799e8;
        case 0x1799ecu: goto label_1799ec;
        case 0x1799f0u: goto label_1799f0;
        case 0x1799f4u: goto label_1799f4;
        case 0x1799f8u: goto label_1799f8;
        case 0x1799fcu: goto label_1799fc;
        case 0x179a00u: goto label_179a00;
        case 0x179a04u: goto label_179a04;
        case 0x179a08u: goto label_179a08;
        case 0x179a0cu: goto label_179a0c;
        case 0x179a10u: goto label_179a10;
        case 0x179a14u: goto label_179a14;
        case 0x179a18u: goto label_179a18;
        case 0x179a1cu: goto label_179a1c;
        case 0x179a20u: goto label_179a20;
        case 0x179a24u: goto label_179a24;
        case 0x179a28u: goto label_179a28;
        case 0x179a2cu: goto label_179a2c;
        case 0x179a30u: goto label_179a30;
        case 0x179a34u: goto label_179a34;
        case 0x179a38u: goto label_179a38;
        case 0x179a3cu: goto label_179a3c;
        case 0x179a40u: goto label_179a40;
        case 0x179a44u: goto label_179a44;
        case 0x179a48u: goto label_179a48;
        case 0x179a4cu: goto label_179a4c;
        case 0x179a50u: goto label_179a50;
        case 0x179a54u: goto label_179a54;
        case 0x179a58u: goto label_179a58;
        case 0x179a5cu: goto label_179a5c;
        case 0x179a60u: goto label_179a60;
        case 0x179a64u: goto label_179a64;
        case 0x179a68u: goto label_179a68;
        case 0x179a6cu: goto label_179a6c;
        case 0x179a70u: goto label_179a70;
        case 0x179a74u: goto label_179a74;
        case 0x179a78u: goto label_179a78;
        case 0x179a7cu: goto label_179a7c;
        case 0x179a80u: goto label_179a80;
        case 0x179a84u: goto label_179a84;
        case 0x179a88u: goto label_179a88;
        case 0x179a8cu: goto label_179a8c;
        case 0x179a90u: goto label_179a90;
        case 0x179a94u: goto label_179a94;
        case 0x179a98u: goto label_179a98;
        case 0x179a9cu: goto label_179a9c;
        case 0x179aa0u: goto label_179aa0;
        case 0x179aa4u: goto label_179aa4;
        case 0x179aa8u: goto label_179aa8;
        case 0x179aacu: goto label_179aac;
        case 0x179ab0u: goto label_179ab0;
        case 0x179ab4u: goto label_179ab4;
        case 0x179ab8u: goto label_179ab8;
        case 0x179abcu: goto label_179abc;
        case 0x179ac0u: goto label_179ac0;
        case 0x179ac4u: goto label_179ac4;
        case 0x179ac8u: goto label_179ac8;
        case 0x179accu: goto label_179acc;
        case 0x179ad0u: goto label_179ad0;
        case 0x179ad4u: goto label_179ad4;
        case 0x179ad8u: goto label_179ad8;
        case 0x179adcu: goto label_179adc;
        case 0x179ae0u: goto label_179ae0;
        case 0x179ae4u: goto label_179ae4;
        case 0x179ae8u: goto label_179ae8;
        case 0x179aecu: goto label_179aec;
        case 0x179af0u: goto label_179af0;
        case 0x179af4u: goto label_179af4;
        case 0x179af8u: goto label_179af8;
        case 0x179afcu: goto label_179afc;
        case 0x179b00u: goto label_179b00;
        case 0x179b04u: goto label_179b04;
        case 0x179b08u: goto label_179b08;
        case 0x179b0cu: goto label_179b0c;
        case 0x179b10u: goto label_179b10;
        case 0x179b14u: goto label_179b14;
        case 0x179b18u: goto label_179b18;
        case 0x179b1cu: goto label_179b1c;
        case 0x179b20u: goto label_179b20;
        case 0x179b24u: goto label_179b24;
        case 0x179b28u: goto label_179b28;
        case 0x179b2cu: goto label_179b2c;
        case 0x179b30u: goto label_179b30;
        case 0x179b34u: goto label_179b34;
        case 0x179b38u: goto label_179b38;
        case 0x179b3cu: goto label_179b3c;
        case 0x179b40u: goto label_179b40;
        case 0x179b44u: goto label_179b44;
        case 0x179b48u: goto label_179b48;
        case 0x179b4cu: goto label_179b4c;
        case 0x179b50u: goto label_179b50;
        case 0x179b54u: goto label_179b54;
        case 0x179b58u: goto label_179b58;
        case 0x179b5cu: goto label_179b5c;
        case 0x179b60u: goto label_179b60;
        case 0x179b64u: goto label_179b64;
        case 0x179b68u: goto label_179b68;
        case 0x179b6cu: goto label_179b6c;
        case 0x179b70u: goto label_179b70;
        case 0x179b74u: goto label_179b74;
        case 0x179b78u: goto label_179b78;
        case 0x179b7cu: goto label_179b7c;
        case 0x179b80u: goto label_179b80;
        case 0x179b84u: goto label_179b84;
        case 0x179b88u: goto label_179b88;
        case 0x179b8cu: goto label_179b8c;
        case 0x179b90u: goto label_179b90;
        case 0x179b94u: goto label_179b94;
        case 0x179b98u: goto label_179b98;
        case 0x179b9cu: goto label_179b9c;
        case 0x179ba0u: goto label_179ba0;
        case 0x179ba4u: goto label_179ba4;
        case 0x179ba8u: goto label_179ba8;
        case 0x179bacu: goto label_179bac;
        case 0x179bb0u: goto label_179bb0;
        case 0x179bb4u: goto label_179bb4;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bbcu: goto label_179bbc;
        case 0x179bc0u: goto label_179bc0;
        case 0x179bc4u: goto label_179bc4;
        case 0x179bc8u: goto label_179bc8;
        case 0x179bccu: goto label_179bcc;
        case 0x179bd0u: goto label_179bd0;
        case 0x179bd4u: goto label_179bd4;
        case 0x179bd8u: goto label_179bd8;
        case 0x179bdcu: goto label_179bdc;
        case 0x179be0u: goto label_179be0;
        case 0x179be4u: goto label_179be4;
        case 0x179be8u: goto label_179be8;
        case 0x179becu: goto label_179bec;
        case 0x179bf0u: goto label_179bf0;
        case 0x179bf4u: goto label_179bf4;
        case 0x179bf8u: goto label_179bf8;
        case 0x179bfcu: goto label_179bfc;
        case 0x179c00u: goto label_179c00;
        case 0x179c04u: goto label_179c04;
        case 0x179c08u: goto label_179c08;
        case 0x179c0cu: goto label_179c0c;
        case 0x179c10u: goto label_179c10;
        case 0x179c14u: goto label_179c14;
        case 0x179c18u: goto label_179c18;
        case 0x179c1cu: goto label_179c1c;
        case 0x179c20u: goto label_179c20;
        case 0x179c24u: goto label_179c24;
        case 0x179c28u: goto label_179c28;
        case 0x179c2cu: goto label_179c2c;
        case 0x179c30u: goto label_179c30;
        case 0x179c34u: goto label_179c34;
        case 0x179c38u: goto label_179c38;
        case 0x179c3cu: goto label_179c3c;
        case 0x179c40u: goto label_179c40;
        case 0x179c44u: goto label_179c44;
        case 0x179c48u: goto label_179c48;
        case 0x179c4cu: goto label_179c4c;
        case 0x179c50u: goto label_179c50;
        case 0x179c54u: goto label_179c54;
        case 0x179c58u: goto label_179c58;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c60u: goto label_179c60;
        case 0x179c64u: goto label_179c64;
        case 0x179c68u: goto label_179c68;
        case 0x179c6cu: goto label_179c6c;
        case 0x179c70u: goto label_179c70;
        case 0x179c74u: goto label_179c74;
        case 0x179c78u: goto label_179c78;
        case 0x179c7cu: goto label_179c7c;
        case 0x179c80u: goto label_179c80;
        case 0x179c84u: goto label_179c84;
        case 0x179c88u: goto label_179c88;
        case 0x179c8cu: goto label_179c8c;
        case 0x179c90u: goto label_179c90;
        case 0x179c94u: goto label_179c94;
        case 0x179c98u: goto label_179c98;
        case 0x179c9cu: goto label_179c9c;
        case 0x179ca0u: goto label_179ca0;
        case 0x179ca4u: goto label_179ca4;
        case 0x179ca8u: goto label_179ca8;
        case 0x179cacu: goto label_179cac;
        case 0x179cb0u: goto label_179cb0;
        case 0x179cb4u: goto label_179cb4;
        case 0x179cb8u: goto label_179cb8;
        case 0x179cbcu: goto label_179cbc;
        case 0x179cc0u: goto label_179cc0;
        case 0x179cc4u: goto label_179cc4;
        case 0x179cc8u: goto label_179cc8;
        case 0x179cccu: goto label_179ccc;
        case 0x179cd0u: goto label_179cd0;
        case 0x179cd4u: goto label_179cd4;
        case 0x179cd8u: goto label_179cd8;
        case 0x179cdcu: goto label_179cdc;
        case 0x179ce0u: goto label_179ce0;
        case 0x179ce4u: goto label_179ce4;
        case 0x179ce8u: goto label_179ce8;
        case 0x179cecu: goto label_179cec;
        case 0x179cf0u: goto label_179cf0;
        case 0x179cf4u: goto label_179cf4;
        case 0x179cf8u: goto label_179cf8;
        case 0x179cfcu: goto label_179cfc;
        case 0x179d00u: goto label_179d00;
        case 0x179d04u: goto label_179d04;
        case 0x179d08u: goto label_179d08;
        case 0x179d0cu: goto label_179d0c;
        case 0x179d10u: goto label_179d10;
        case 0x179d14u: goto label_179d14;
        case 0x179d18u: goto label_179d18;
        case 0x179d1cu: goto label_179d1c;
        case 0x179d20u: goto label_179d20;
        case 0x179d24u: goto label_179d24;
        case 0x179d28u: goto label_179d28;
        case 0x179d2cu: goto label_179d2c;
        case 0x179d30u: goto label_179d30;
        case 0x179d34u: goto label_179d34;
        case 0x179d38u: goto label_179d38;
        case 0x179d3cu: goto label_179d3c;
        case 0x179d40u: goto label_179d40;
        case 0x179d44u: goto label_179d44;
        case 0x179d48u: goto label_179d48;
        case 0x179d4cu: goto label_179d4c;
        case 0x179d50u: goto label_179d50;
        case 0x179d54u: goto label_179d54;
        case 0x179d58u: goto label_179d58;
        case 0x179d5cu: goto label_179d5c;
        case 0x179d60u: goto label_179d60;
        case 0x179d64u: goto label_179d64;
        case 0x179d68u: goto label_179d68;
        case 0x179d6cu: goto label_179d6c;
        case 0x179d70u: goto label_179d70;
        case 0x179d74u: goto label_179d74;
        case 0x179d78u: goto label_179d78;
        case 0x179d7cu: goto label_179d7c;
        case 0x179d80u: goto label_179d80;
        case 0x179d84u: goto label_179d84;
        case 0x179d88u: goto label_179d88;
        case 0x179d8cu: goto label_179d8c;
        case 0x179d90u: goto label_179d90;
        case 0x179d94u: goto label_179d94;
        case 0x179d98u: goto label_179d98;
        case 0x179d9cu: goto label_179d9c;
        case 0x179da0u: goto label_179da0;
        case 0x179da4u: goto label_179da4;
        case 0x179da8u: goto label_179da8;
        case 0x179dacu: goto label_179dac;
        case 0x179db0u: goto label_179db0;
        case 0x179db4u: goto label_179db4;
        case 0x179db8u: goto label_179db8;
        case 0x179dbcu: goto label_179dbc;
        case 0x179dc0u: goto label_179dc0;
        case 0x179dc4u: goto label_179dc4;
        case 0x179dc8u: goto label_179dc8;
        case 0x179dccu: goto label_179dcc;
        case 0x179dd0u: goto label_179dd0;
        case 0x179dd4u: goto label_179dd4;
        case 0x179dd8u: goto label_179dd8;
        case 0x179ddcu: goto label_179ddc;
        case 0x179de0u: goto label_179de0;
        case 0x179de4u: goto label_179de4;
        case 0x179de8u: goto label_179de8;
        case 0x179decu: goto label_179dec;
        case 0x179df0u: goto label_179df0;
        case 0x179df4u: goto label_179df4;
        case 0x179df8u: goto label_179df8;
        case 0x179dfcu: goto label_179dfc;
        case 0x179e00u: goto label_179e00;
        case 0x179e04u: goto label_179e04;
        case 0x179e08u: goto label_179e08;
        case 0x179e0cu: goto label_179e0c;
        case 0x179e10u: goto label_179e10;
        case 0x179e14u: goto label_179e14;
        case 0x179e18u: goto label_179e18;
        case 0x179e1cu: goto label_179e1c;
        case 0x179e20u: goto label_179e20;
        case 0x179e24u: goto label_179e24;
        case 0x179e28u: goto label_179e28;
        case 0x179e2cu: goto label_179e2c;
        case 0x179e30u: goto label_179e30;
        case 0x179e34u: goto label_179e34;
        case 0x179e38u: goto label_179e38;
        case 0x179e3cu: goto label_179e3c;
        case 0x179e40u: goto label_179e40;
        case 0x179e44u: goto label_179e44;
        case 0x179e48u: goto label_179e48;
        case 0x179e4cu: goto label_179e4c;
        case 0x179e50u: goto label_179e50;
        case 0x179e54u: goto label_179e54;
        default: break;
    }

    ctx->pc = 0x179910u;

label_179910:
    // 0x179910: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_179914:
    // 0x179914: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x179914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_179918:
    // 0x179918: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x179918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17991c:
    // 0x17991c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_179920:
    // 0x179920: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x179920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_179924:
    // 0x179924: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x179924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_179928:
    // 0x179928: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x179928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17992c:
    // 0x17992c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_179930:
    // 0x179930: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_179934:
    // 0x179934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x179934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_179938:
    // 0x179938: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x179938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17993c:
    // 0x17993c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_179940:
    // 0x179940: 0x18600139  blez        $v1, . + 4 + (0x139 << 2)
label_179944:
    if (ctx->pc == 0x179944u) {
        ctx->pc = 0x179944u;
            // 0x179944: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179948u;
        goto label_179948;
    }
    ctx->pc = 0x179940u;
    {
        const bool branch_taken_0x179940 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x179944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179940u;
            // 0x179944: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179940) {
            ctx->pc = 0x179E28u;
            goto label_179e28;
        }
    }
    ctx->pc = 0x179948u;
label_179948:
    // 0x179948: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x179948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17994c:
    // 0x17994c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_179950:
    if (ctx->pc == 0x179950u) {
        ctx->pc = 0x179950u;
            // 0x179950: 0xc6b40060  lwc1        $f20, 0x60($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x179954u;
        goto label_179954;
    }
    ctx->pc = 0x17994Cu;
    {
        const bool branch_taken_0x17994c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17994Cu;
            // 0x179950: 0xc6b40060  lwc1        $f20, 0x60($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17994c) {
            ctx->pc = 0x179964u;
            goto label_179964;
        }
    }
    ctx->pc = 0x179954u;
label_179954:
    // 0x179954: 0xc04dc0c  jal         func_137030
label_179958:
    if (ctx->pc == 0x179958u) {
        ctx->pc = 0x179958u;
            // 0x179958: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x17995Cu;
        goto label_17995c;
    }
    ctx->pc = 0x179954u;
    SET_GPR_U32(ctx, 31, 0x17995Cu);
    ctx->pc = 0x179958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179954u;
            // 0x179958: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17995Cu; }
        if (ctx->pc != 0x17995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17995Cu; }
        if (ctx->pc != 0x17995Cu) { return; }
    }
    ctx->pc = 0x17995Cu;
label_17995c:
    // 0x17995c: 0x10000002  b           . + 4 + (0x2 << 2)
label_179960:
    if (ctx->pc == 0x179960u) {
        ctx->pc = 0x179964u;
        goto label_179964;
    }
    ctx->pc = 0x17995Cu;
    {
        const bool branch_taken_0x17995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17995c) {
            ctx->pc = 0x179968u;
            goto label_179968;
        }
    }
    ctx->pc = 0x179964u;
label_179964:
    // 0x179964: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x179964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_179968:
    // 0x179968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17996c:
    // 0x17996c: 0x0  nop
    ctx->pc = 0x17996cu;
    // NOP
label_179970:
    // 0x179970: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x179970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179974:
    // 0x179974: 0x0  nop
    ctx->pc = 0x179974u;
    // NOP
label_179978:
    // 0x179978: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_17997c:
    if (ctx->pc == 0x17997Cu) {
        ctx->pc = 0x17997Cu;
            // 0x17997c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179980u;
        goto label_179980;
    }
    ctx->pc = 0x179978u;
    {
        const bool branch_taken_0x179978 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179978u;
            // 0x17997c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179978) {
            ctx->pc = 0x179998u;
            goto label_179998;
        }
    }
    ctx->pc = 0x179980u;
label_179980:
    // 0x179980: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x179980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_179984:
    // 0x179984: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x179984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_179988:
    // 0x179988: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x179988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_17998c:
    // 0x17998c: 0xc04c228  jal         func_1308A0
label_179990:
    if (ctx->pc == 0x179990u) {
        ctx->pc = 0x179990u;
            // 0x179990: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x179994u;
        goto label_179994;
    }
    ctx->pc = 0x17998Cu;
    SET_GPR_U32(ctx, 31, 0x179994u);
    ctx->pc = 0x179990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17998Cu;
            // 0x179990: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179994u; }
        if (ctx->pc != 0x179994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179994u; }
        if (ctx->pc != 0x179994u) { return; }
    }
    ctx->pc = 0x179994u;
label_179994:
    // 0x179994: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179998:
    // 0x179998: 0x1000000f  b           . + 4 + (0xF << 2)
label_17999c:
    if (ctx->pc == 0x17999Cu) {
        ctx->pc = 0x17999Cu;
            // 0x17999c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1799A0u;
        goto label_1799a0;
    }
    ctx->pc = 0x179998u;
    {
        const bool branch_taken_0x179998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179998u;
            // 0x17999c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179998) {
            ctx->pc = 0x1799D8u;
            goto label_1799d8;
        }
    }
    ctx->pc = 0x1799A0u;
label_1799a0:
    // 0x1799a0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x1799a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_1799a4:
    // 0x1799a4: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1799a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_1799a8:
    // 0x1799a8: 0xc04bcf4  jal         func_12F3D0
label_1799ac:
    if (ctx->pc == 0x1799ACu) {
        ctx->pc = 0x1799ACu;
            // 0x1799ac: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1799B0u;
        goto label_1799b0;
    }
    ctx->pc = 0x1799A8u;
    SET_GPR_U32(ctx, 31, 0x1799B0u);
    ctx->pc = 0x1799ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1799A8u;
            // 0x1799ac: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799B0u; }
        if (ctx->pc != 0x1799B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799B0u; }
        if (ctx->pc != 0x1799B0u) { return; }
    }
    ctx->pc = 0x1799B0u;
label_1799b0:
    // 0x1799b0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_1799b4:
    // 0x1799b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1799b8:
    // 0x1799b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1799b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1799bc:
    // 0x1799bc: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x1799bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_1799c0:
    // 0x1799c0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x1799c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_1799c4:
    // 0x1799c4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1799c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1799c8:
    // 0x1799c8: 0xc04bcf4  jal         func_12F3D0
label_1799cc:
    if (ctx->pc == 0x1799CCu) {
        ctx->pc = 0x1799CCu;
            // 0x1799cc: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1799D0u;
        goto label_1799d0;
    }
    ctx->pc = 0x1799C8u;
    SET_GPR_U32(ctx, 31, 0x1799D0u);
    ctx->pc = 0x1799CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1799C8u;
            // 0x1799cc: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799D0u; }
        if (ctx->pc != 0x1799D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799D0u; }
        if (ctx->pc != 0x1799D0u) { return; }
    }
    ctx->pc = 0x1799D0u;
label_1799d0:
    // 0x1799d0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1799d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1799d4:
    // 0x1799d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1799d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1799d8:
    // 0x1799d8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1799dc:
    // 0x1799dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1799dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1799e0:
    // 0x1799e0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1799e4:
    if (ctx->pc == 0x1799E4u) {
        ctx->pc = 0x1799E8u;
        goto label_1799e8;
    }
    ctx->pc = 0x1799E0u;
    {
        const bool branch_taken_0x1799e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1799e0) {
            ctx->pc = 0x1799A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1799a0;
        }
    }
    ctx->pc = 0x1799E8u;
label_1799e8:
    // 0x1799e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1799e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1799ec:
    // 0x1799ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1799ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1799f0:
    // 0x1799f0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1799f4:
    if (ctx->pc == 0x1799F4u) {
        ctx->pc = 0x1799F4u;
            // 0x1799f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1799F8u;
        goto label_1799f8;
    }
    ctx->pc = 0x1799F0u;
    {
        const bool branch_taken_0x1799f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1799F0u;
            // 0x1799f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799f0) {
            ctx->pc = 0x179A30u;
            goto label_179a30;
        }
    }
    ctx->pc = 0x1799F8u;
label_1799f8:
    // 0x1799f8: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x1799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_1799fc:
    // 0x1799fc: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x1799fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179a00:
    // 0x179a00: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x179a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_179a04:
    // 0x179a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x179a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_179a08:
    // 0x179a08: 0xc48c000c  lwc1        $f12, 0xC($a0)
    ctx->pc = 0x179a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_179a0c:
    // 0x179a0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x179a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_179a10:
    // 0x179a10: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x179a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_179a14:
    // 0x179a14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_179a18:
    // 0x179a18: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x179a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_179a1c:
    // 0x179a1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_179a20:
    // 0x179a20: 0xc05e5e4  jal         func_179790
label_179a24:
    if (ctx->pc == 0x179A24u) {
        ctx->pc = 0x179A24u;
            // 0x179a24: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x179A28u;
        goto label_179a28;
    }
    ctx->pc = 0x179A20u;
    SET_GPR_U32(ctx, 31, 0x179A28u);
    ctx->pc = 0x179A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179A20u;
            // 0x179a24: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179790u;
    if (runtime->hasFunction(0x179790u)) {
        auto targetFn = runtime->lookupFunction(0x179790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A28u; }
        if (ctx->pc != 0x179A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x179790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A28u; }
        if (ctx->pc != 0x179A28u) { return; }
    }
    ctx->pc = 0x179A28u;
label_179a28:
    // 0x179a28: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x179a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_179a2c:
    // 0x179a2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x179a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_179a30:
    // 0x179a30: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x179a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_179a34:
    // 0x179a34: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x179a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_179a38:
    // 0x179a38: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_179a3c:
    if (ctx->pc == 0x179A3Cu) {
        ctx->pc = 0x179A3Cu;
            // 0x179a3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179A40u;
        goto label_179a40;
    }
    ctx->pc = 0x179A38u;
    {
        const bool branch_taken_0x179a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A38u;
            // 0x179a3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a38) {
            ctx->pc = 0x1799F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1799f8;
        }
    }
    ctx->pc = 0x179A40u;
label_179a40:
    // 0x179a40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179a44:
    // 0x179a44: 0x10000019  b           . + 4 + (0x19 << 2)
label_179a48:
    if (ctx->pc == 0x179A48u) {
        ctx->pc = 0x179A48u;
            // 0x179a48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179A4Cu;
        goto label_179a4c;
    }
    ctx->pc = 0x179A44u;
    {
        const bool branch_taken_0x179a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A44u;
            // 0x179a48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a44) {
            ctx->pc = 0x179AACu;
            goto label_179aac;
        }
    }
    ctx->pc = 0x179A4Cu;
label_179a4c:
    // 0x179a4c: 0x0  nop
    ctx->pc = 0x179a4cu;
    // NOP
label_179a50:
    // 0x179a50: 0x8ea3002c  lw          $v1, 0x2C($s5)
    ctx->pc = 0x179a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_179a54:
    // 0x179a54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_179a58:
    // 0x179a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179a5c:
    // 0x179a5c: 0x71a021  addu        $s4, $v1, $s1
    ctx->pc = 0x179a5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_179a60:
    // 0x179a60: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x179a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179a64:
    // 0x179a64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x179a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179a68:
    // 0x179a68: 0x0  nop
    ctx->pc = 0x179a68u;
    // NOP
label_179a6c:
    // 0x179a6c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_179a70:
    if (ctx->pc == 0x179A70u) {
        ctx->pc = 0x179A74u;
        goto label_179a74;
    }
    ctx->pc = 0x179A6Cu;
    {
        const bool branch_taken_0x179a6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179a6c) {
            ctx->pc = 0x179A9Cu;
            goto label_179a9c;
        }
    }
    ctx->pc = 0x179A74u;
label_179a74:
    // 0x179a74: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x179a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_179a78:
    // 0x179a78: 0xc05ea3c  jal         func_17A8F0
label_179a7c:
    if (ctx->pc == 0x179A7Cu) {
        ctx->pc = 0x179A7Cu;
            // 0x179a7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179A80u;
        goto label_179a80;
    }
    ctx->pc = 0x179A78u;
    SET_GPR_U32(ctx, 31, 0x179A80u);
    ctx->pc = 0x179A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179A78u;
            // 0x179a7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A80u; }
        if (ctx->pc != 0x179A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A80u; }
        if (ctx->pc != 0x179A80u) { return; }
    }
    ctx->pc = 0x179A80u;
label_179a80:
    // 0x179a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179a84:
    // 0x179a84: 0x108000e8  beqz        $a0, . + 4 + (0xE8 << 2)
label_179a88:
    if (ctx->pc == 0x179A88u) {
        ctx->pc = 0x179A8Cu;
        goto label_179a8c;
    }
    ctx->pc = 0x179A84u;
    {
        const bool branch_taken_0x179a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a84) {
            ctx->pc = 0x179E28u;
            goto label_179e28;
        }
    }
    ctx->pc = 0x179A8Cu;
label_179a8c:
    // 0x179a8c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x179a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179a90:
    // 0x179a90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x179a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_179a94:
    // 0x179a94: 0xc04ddf8  jal         func_1377E0
label_179a98:
    if (ctx->pc == 0x179A98u) {
        ctx->pc = 0x179A98u;
            // 0x179a98: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x179A9Cu;
        goto label_179a9c;
    }
    ctx->pc = 0x179A94u;
    SET_GPR_U32(ctx, 31, 0x179A9Cu);
    ctx->pc = 0x179A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179A94u;
            // 0x179a98: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A9Cu; }
        if (ctx->pc != 0x179A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A9Cu; }
        if (ctx->pc != 0x179A9Cu) { return; }
    }
    ctx->pc = 0x179A9Cu;
label_179a9c:
    // 0x179a9c: 0x0  nop
    ctx->pc = 0x179a9cu;
    // NOP
label_179aa0:
    // 0x179aa0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x179aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_179aa4:
    // 0x179aa4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_179aa8:
    // 0x179aa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x179aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_179aac:
    // 0x179aac: 0x0  nop
    ctx->pc = 0x179aacu;
    // NOP
label_179ab0:
    // 0x179ab0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_179ab4:
    // 0x179ab4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x179ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_179ab8:
    // 0x179ab8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_179abc:
    if (ctx->pc == 0x179ABCu) {
        ctx->pc = 0x179AC0u;
        goto label_179ac0;
    }
    ctx->pc = 0x179AB8u;
    {
        const bool branch_taken_0x179ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179ab8) {
            ctx->pc = 0x179A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179a4c;
        }
    }
    ctx->pc = 0x179AC0u;
label_179ac0:
    // 0x179ac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_179ac4:
    // 0x179ac4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x179ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_179ac8:
    // 0x179ac8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_179acc:
    if (ctx->pc == 0x179ACCu) {
        ctx->pc = 0x179ACCu;
            // 0x179acc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179AD0u;
        goto label_179ad0;
    }
    ctx->pc = 0x179AC8u;
    {
        const bool branch_taken_0x179ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179AC8u;
            // 0x179acc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ac8) {
            ctx->pc = 0x1799F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1799f0;
        }
    }
    ctx->pc = 0x179AD0u;
label_179ad0:
    // 0x179ad0: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x179ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179ad4:
    // 0x179ad4: 0xc041c5c  jal         func_107170
label_179ad8:
    if (ctx->pc == 0x179AD8u) {
        ctx->pc = 0x179AD8u;
            // 0x179ad8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x179ADCu;
        goto label_179adc;
    }
    ctx->pc = 0x179AD4u;
    SET_GPR_U32(ctx, 31, 0x179ADCu);
    ctx->pc = 0x179AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179AD4u;
            // 0x179ad8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179ADCu; }
        if (ctx->pc != 0x179ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179ADCu; }
        if (ctx->pc != 0x179ADCu) { return; }
    }
    ctx->pc = 0x179ADCu;
label_179adc:
    // 0x179adc: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x179adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179ae0:
    // 0x179ae0: 0xc041c5c  jal         func_107170
label_179ae4:
    if (ctx->pc == 0x179AE4u) {
        ctx->pc = 0x179AE4u;
            // 0x179ae4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x179AE8u;
        goto label_179ae8;
    }
    ctx->pc = 0x179AE0u;
    SET_GPR_U32(ctx, 31, 0x179AE8u);
    ctx->pc = 0x179AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179AE0u;
            // 0x179ae4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AE8u; }
        if (ctx->pc != 0x179AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AE8u; }
        if (ctx->pc != 0x179AE8u) { return; }
    }
    ctx->pc = 0x179AE8u;
label_179ae8:
    // 0x179ae8: 0xc05e87c  jal         func_17A1F0
label_179aec:
    if (ctx->pc == 0x179AECu) {
        ctx->pc = 0x179AECu;
            // 0x179aec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179AF0u;
        goto label_179af0;
    }
    ctx->pc = 0x179AE8u;
    SET_GPR_U32(ctx, 31, 0x179AF0u);
    ctx->pc = 0x179AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179AE8u;
            // 0x179aec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A1F0u;
    if (runtime->hasFunction(0x17A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AF0u; }
        if (ctx->pc != 0x179AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreCollision__13CDynamicAnimeFv_0x17a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AF0u; }
        if (ctx->pc != 0x179AF0u) { return; }
    }
    ctx->pc = 0x179AF0u;
label_179af0:
    // 0x179af0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x179af0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179af4:
    // 0x179af4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179af8:
    // 0x179af8: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_179afc:
    if (ctx->pc == 0x179AFCu) {
        ctx->pc = 0x179AFCu;
            // 0x179afc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179B00u;
        goto label_179b00;
    }
    ctx->pc = 0x179AF8u;
    {
        const bool branch_taken_0x179af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179AF8u;
            // 0x179afc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af8) {
            ctx->pc = 0x179DD0u;
            goto label_179dd0;
        }
    }
    ctx->pc = 0x179B00u;
label_179b00:
    // 0x179b00: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x179b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_179b04:
    // 0x179b04: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x179b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179b08:
    // 0x179b08: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x179b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_179b0c:
    // 0x179b0c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x179b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_179b10:
    // 0x179b10: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x179b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_179b14:
    // 0x179b14: 0xc041c3e  jal         func_1070F8
label_179b18:
    if (ctx->pc == 0x179B18u) {
        ctx->pc = 0x179B18u;
            // 0x179b18: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179B1Cu;
        goto label_179b1c;
    }
    ctx->pc = 0x179B14u;
    SET_GPR_U32(ctx, 31, 0x179B1Cu);
    ctx->pc = 0x179B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179B14u;
            // 0x179b18: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B1Cu; }
        if (ctx->pc != 0x179B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B1Cu; }
        if (ctx->pc != 0x179B1Cu) { return; }
    }
    ctx->pc = 0x179B1Cu;
label_179b1c:
    // 0x179b1c: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x179b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179b20:
    // 0x179b20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_179b24:
    // 0x179b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179b28:
    // 0x179b28: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x179b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_179b2c:
    // 0x179b2c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x179b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_179b30:
    // 0x179b30: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x179b30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_179b34:
    // 0x179b34: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x179b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_179b38:
    // 0x179b38: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x179b38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_179b3c:
    // 0x179b3c: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x179b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_179b40:
    // 0x179b40: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x179b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_179b44:
    // 0x179b44: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x179b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179b48:
    // 0x179b48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x179b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179b4c:
    // 0x179b4c: 0x0  nop
    ctx->pc = 0x179b4cu;
    // NOP
label_179b50:
    // 0x179b50: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_179b54:
    if (ctx->pc == 0x179B54u) {
        ctx->pc = 0x179B58u;
        goto label_179b58;
    }
    ctx->pc = 0x179B50u;
    {
        const bool branch_taken_0x179b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179b50) {
            ctx->pc = 0x179BE0u;
            goto label_179be0;
        }
    }
    ctx->pc = 0x179B58u;
label_179b58:
    // 0x179b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179b5c:
    // 0x179b5c: 0x0  nop
    ctx->pc = 0x179b5cu;
    // NOP
label_179b60:
    // 0x179b60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x179b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179b64:
    // 0x179b64: 0x0  nop
    ctx->pc = 0x179b64u;
    // NOP
label_179b68:
    // 0x179b68: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_179b6c:
    if (ctx->pc == 0x179B6Cu) {
        ctx->pc = 0x179B70u;
        goto label_179b70;
    }
    ctx->pc = 0x179B68u;
    {
        const bool branch_taken_0x179b68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179b68) {
            ctx->pc = 0x179BE0u;
            goto label_179be0;
        }
    }
    ctx->pc = 0x179B70u;
label_179b70:
    // 0x179b70: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_179b74:
    // 0x179b74: 0xc05ea3c  jal         func_17A8F0
label_179b78:
    if (ctx->pc == 0x179B78u) {
        ctx->pc = 0x179B78u;
            // 0x179b78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179B7Cu;
        goto label_179b7c;
    }
    ctx->pc = 0x179B74u;
    SET_GPR_U32(ctx, 31, 0x179B7Cu);
    ctx->pc = 0x179B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179B74u;
            // 0x179b78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B7Cu; }
        if (ctx->pc != 0x179B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B7Cu; }
        if (ctx->pc != 0x179B7Cu) { return; }
    }
    ctx->pc = 0x179B7Cu;
label_179b7c:
    // 0x179b7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_179b80:
    if (ctx->pc == 0x179B80u) {
        ctx->pc = 0x179B80u;
            // 0x179b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179B84u;
        goto label_179b84;
    }
    ctx->pc = 0x179B7Cu;
    {
        const bool branch_taken_0x179b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B7Cu;
            // 0x179b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b7c) {
            ctx->pc = 0x179BE0u;
            goto label_179be0;
        }
    }
    ctx->pc = 0x179B84u;
label_179b84:
    // 0x179b84: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x179b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179b88:
    // 0x179b88: 0xc04ddf8  jal         func_1377E0
label_179b8c:
    if (ctx->pc == 0x179B8Cu) {
        ctx->pc = 0x179B8Cu;
            // 0x179b8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179B90u;
        goto label_179b90;
    }
    ctx->pc = 0x179B88u;
    SET_GPR_U32(ctx, 31, 0x179B90u);
    ctx->pc = 0x179B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179B88u;
            // 0x179b8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B90u; }
        if (ctx->pc != 0x179B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B90u; }
        if (ctx->pc != 0x179B90u) { return; }
    }
    ctx->pc = 0x179B90u;
label_179b90:
    // 0x179b90: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x179b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179b94:
    // 0x179b94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x179b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179b98:
    // 0x179b98: 0xc04bcfc  jal         func_12F3F0
label_179b9c:
    if (ctx->pc == 0x179B9Cu) {
        ctx->pc = 0x179B9Cu;
            // 0x179b9c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179BA0u;
        goto label_179ba0;
    }
    ctx->pc = 0x179B98u;
    SET_GPR_U32(ctx, 31, 0x179BA0u);
    ctx->pc = 0x179B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179B98u;
            // 0x179b9c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BA0u; }
        if (ctx->pc != 0x179BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BA0u; }
        if (ctx->pc != 0x179BA0u) { return; }
    }
    ctx->pc = 0x179BA0u;
label_179ba0:
    // 0x179ba0: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x179ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_179ba4:
    // 0x179ba4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x179ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179ba8:
    // 0x179ba8: 0xc041c4a  jal         func_107128
label_179bac:
    if (ctx->pc == 0x179BACu) {
        ctx->pc = 0x179BACu;
            // 0x179bac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179BB0u;
        goto label_179bb0;
    }
    ctx->pc = 0x179BA8u;
    SET_GPR_U32(ctx, 31, 0x179BB0u);
    ctx->pc = 0x179BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179BA8u;
            // 0x179bac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BB0u; }
        if (ctx->pc != 0x179BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BB0u; }
        if (ctx->pc != 0x179BB0u) { return; }
    }
    ctx->pc = 0x179BB0u;
label_179bb0:
    // 0x179bb0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x179bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179bb4:
    // 0x179bb4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x179bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179bb8:
    // 0x179bb8: 0xc04bcf4  jal         func_12F3D0
label_179bbc:
    if (ctx->pc == 0x179BBCu) {
        ctx->pc = 0x179BBCu;
            // 0x179bbc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179BC0u;
        goto label_179bc0;
    }
    ctx->pc = 0x179BB8u;
    SET_GPR_U32(ctx, 31, 0x179BC0u);
    ctx->pc = 0x179BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179BB8u;
            // 0x179bbc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BC0u; }
        if (ctx->pc != 0x179BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BC0u; }
        if (ctx->pc != 0x179BC0u) { return; }
    }
    ctx->pc = 0x179BC0u;
label_179bc0:
    // 0x179bc0: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x179bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_179bc4:
    // 0x179bc4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x179bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179bc8:
    // 0x179bc8: 0xc041c4a  jal         func_107128
label_179bcc:
    if (ctx->pc == 0x179BCCu) {
        ctx->pc = 0x179BCCu;
            // 0x179bcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179BD0u;
        goto label_179bd0;
    }
    ctx->pc = 0x179BC8u;
    SET_GPR_U32(ctx, 31, 0x179BD0u);
    ctx->pc = 0x179BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179BC8u;
            // 0x179bcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BD0u; }
        if (ctx->pc != 0x179BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BD0u; }
        if (ctx->pc != 0x179BD0u) { return; }
    }
    ctx->pc = 0x179BD0u;
label_179bd0:
    // 0x179bd0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x179bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_179bd4:
    // 0x179bd4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179bd8:
    // 0x179bd8: 0xc04bcfc  jal         func_12F3F0
label_179bdc:
    if (ctx->pc == 0x179BDCu) {
        ctx->pc = 0x179BDCu;
            // 0x179bdc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179BE0u;
        goto label_179be0;
    }
    ctx->pc = 0x179BD8u;
    SET_GPR_U32(ctx, 31, 0x179BE0u);
    ctx->pc = 0x179BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179BD8u;
            // 0x179bdc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BE0u; }
        if (ctx->pc != 0x179BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179BE0u; }
        if (ctx->pc != 0x179BE0u) { return; }
    }
    ctx->pc = 0x179BE0u;
label_179be0:
    // 0x179be0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_179be4:
    // 0x179be4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x179be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179be8:
    // 0x179be8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x179be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_179bec:
    // 0x179bec: 0x0  nop
    ctx->pc = 0x179becu;
    // NOP
label_179bf0:
    // 0x179bf0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x179bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179bf4:
    // 0x179bf4: 0x0  nop
    ctx->pc = 0x179bf4u;
    // NOP
label_179bf8:
    // 0x179bf8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_179bfc:
    if (ctx->pc == 0x179BFCu) {
        ctx->pc = 0x179BFCu;
            // 0x179bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179C00u;
        goto label_179c00;
    }
    ctx->pc = 0x179BF8u;
    {
        const bool branch_taken_0x179bf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x179BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179BF8u;
            // 0x179bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bf8) {
            ctx->pc = 0x179C8Cu;
            goto label_179c8c;
        }
    }
    ctx->pc = 0x179C00u;
label_179c00:
    // 0x179c00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x179c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179c04:
    // 0x179c04: 0x10000016  b           . + 4 + (0x16 << 2)
label_179c08:
    if (ctx->pc == 0x179C08u) {
        ctx->pc = 0x179C08u;
            // 0x179c08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179C0Cu;
        goto label_179c0c;
    }
    ctx->pc = 0x179C04u;
    {
        const bool branch_taken_0x179c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C04u;
            // 0x179c08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c04) {
            ctx->pc = 0x179C60u;
            goto label_179c60;
        }
    }
    ctx->pc = 0x179C0Cu;
label_179c0c:
    // 0x179c0c: 0x0  nop
    ctx->pc = 0x179c0cu;
    // NOP
label_179c10:
    // 0x179c10: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x179c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_179c14:
    // 0x179c14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x179c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_179c18:
    // 0x179c18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x179c18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_179c1c:
    // 0x179c1c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_179c20:
    if (ctx->pc == 0x179C20u) {
        ctx->pc = 0x179C24u;
        goto label_179c24;
    }
    ctx->pc = 0x179C1Cu;
    {
        const bool branch_taken_0x179c1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c1c) {
            ctx->pc = 0x179C54u;
            goto label_179c54;
        }
    }
    ctx->pc = 0x179C24u;
label_179c24:
    // 0x179c24: 0x8e3900c0  lw          $t9, 0xC0($s1)
    ctx->pc = 0x179c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_179c28:
    // 0x179c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179c2c:
    // 0x179c2c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x179c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179c30:
    // 0x179c30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x179c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_179c34:
    // 0x179c34: 0x320f809  jalr        $t9
label_179c38:
    if (ctx->pc == 0x179C38u) {
        ctx->pc = 0x179C38u;
            // 0x179c38: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179C3Cu;
        goto label_179c3c;
    }
    ctx->pc = 0x179C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x179C3Cu);
        ctx->pc = 0x179C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C34u;
            // 0x179c38: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179C3Cu; }
            if (ctx->pc != 0x179C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x179C3Cu;
label_179c3c:
    // 0x179c3c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x179c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179c40:
    // 0x179c40: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x179c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179c44:
    // 0x179c44: 0x0  nop
    ctx->pc = 0x179c44u;
    // NOP
label_179c48:
    // 0x179c48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_179c4c:
    if (ctx->pc == 0x179C4Cu) {
        ctx->pc = 0x179C4Cu;
            // 0x179c4c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->pc = 0x179C50u;
        goto label_179c50;
    }
    ctx->pc = 0x179C48u;
    {
        const bool branch_taken_0x179c48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179C48u;
            // 0x179c4c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c48) {
            ctx->pc = 0x179C54u;
            goto label_179c54;
        }
    }
    ctx->pc = 0x179C50u;
label_179c50:
    // 0x179c50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x179c50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_179c54:
    // 0x179c54: 0x0  nop
    ctx->pc = 0x179c54u;
    // NOP
label_179c58:
    // 0x179c58: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x179c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_179c5c:
    // 0x179c5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x179c5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_179c60:
    // 0x179c60: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x179c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_179c64:
    // 0x179c64: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x179c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_179c68:
    // 0x179c68: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_179c6c:
    if (ctx->pc == 0x179C6Cu) {
        ctx->pc = 0x179C70u;
        goto label_179c70;
    }
    ctx->pc = 0x179C68u;
    {
        const bool branch_taken_0x179c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179c68) {
            ctx->pc = 0x179C0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179c0c;
        }
    }
    ctx->pc = 0x179C70u;
label_179c70:
    // 0x179c70: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_179c74:
    if (ctx->pc == 0x179C74u) {
        ctx->pc = 0x179C78u;
        goto label_179c78;
    }
    ctx->pc = 0x179C70u;
    {
        const bool branch_taken_0x179c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c70) {
            ctx->pc = 0x179C8Cu;
            goto label_179c8c;
        }
    }
    ctx->pc = 0x179C78u;
label_179c78:
    // 0x179c78: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x179c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_179c7c:
    // 0x179c7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x179c7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_179c80:
    // 0x179c80: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x179c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_179c84:
    // 0x179c84: 0xc041c4a  jal         func_107128
label_179c88:
    if (ctx->pc == 0x179C88u) {
        ctx->pc = 0x179C88u;
            // 0x179c88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179C8Cu;
        goto label_179c8c;
    }
    ctx->pc = 0x179C84u;
    SET_GPR_U32(ctx, 31, 0x179C8Cu);
    ctx->pc = 0x179C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179C84u;
            // 0x179c88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C8Cu; }
        if (ctx->pc != 0x179C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179C8Cu; }
        if (ctx->pc != 0x179C8Cu) { return; }
    }
    ctx->pc = 0x179C8Cu;
label_179c8c:
    // 0x179c8c: 0x0  nop
    ctx->pc = 0x179c8cu;
    // NOP
label_179c90:
    // 0x179c90: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x179c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_179c94:
    // 0x179c94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_179c98:
    if (ctx->pc == 0x179C98u) {
        ctx->pc = 0x179C9Cu;
        goto label_179c9c;
    }
    ctx->pc = 0x179C94u;
    {
        const bool branch_taken_0x179c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c94) {
            ctx->pc = 0x179CDCu;
            goto label_179cdc;
        }
    }
    ctx->pc = 0x179C9Cu;
label_179c9c:
    // 0x179c9c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x179c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179ca0:
    // 0x179ca0: 0xc6a1008c  lwc1        $f1, 0x8C($s5)
    ctx->pc = 0x179ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179ca4:
    // 0x179ca4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x179ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_179ca8:
    // 0x179ca8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x179ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179cac:
    // 0x179cac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x179cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179cb0:
    // 0x179cb0: 0x0  nop
    ctx->pc = 0x179cb0u;
    // NOP
label_179cb4:
    // 0x179cb4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_179cb8:
    if (ctx->pc == 0x179CB8u) {
        ctx->pc = 0x179CB8u;
            // 0x179cb8: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x179CBCu;
        goto label_179cbc;
    }
    ctx->pc = 0x179CB4u;
    {
        const bool branch_taken_0x179cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x179CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179CB4u;
            // 0x179cb8: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb4) {
            ctx->pc = 0x179CDCu;
            goto label_179cdc;
        }
    }
    ctx->pc = 0x179CBCu;
label_179cbc:
    // 0x179cbc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x179cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_179cc0:
    // 0x179cc0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x179cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_179cc4:
    // 0x179cc4: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x179cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_179cc8:
    // 0x179cc8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x179cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_179ccc:
    // 0x179ccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x179cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_179cd0:
    // 0x179cd0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x179cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_179cd4:
    // 0x179cd4: 0xc041c4a  jal         func_107128
label_179cd8:
    if (ctx->pc == 0x179CD8u) {
        ctx->pc = 0x179CD8u;
            // 0x179cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179CDCu;
        goto label_179cdc;
    }
    ctx->pc = 0x179CD4u;
    SET_GPR_U32(ctx, 31, 0x179CDCu);
    ctx->pc = 0x179CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179CD4u;
            // 0x179cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CDCu; }
        if (ctx->pc != 0x179CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179CDCu; }
        if (ctx->pc != 0x179CDCu) { return; }
    }
    ctx->pc = 0x179CDCu;
label_179cdc:
    // 0x179cdc: 0x0  nop
    ctx->pc = 0x179cdcu;
    // NOP
label_179ce0:
    // 0x179ce0: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x179ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179ce4:
    // 0x179ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179ce8:
    // 0x179ce8: 0x0  nop
    ctx->pc = 0x179ce8u;
    // NOP
label_179cec:
    // 0x179cec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x179cecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179cf0:
    // 0x179cf0: 0x0  nop
    ctx->pc = 0x179cf0u;
    // NOP
label_179cf4:
    // 0x179cf4: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_179cf8:
    if (ctx->pc == 0x179CF8u) {
        ctx->pc = 0x179CF8u;
            // 0x179cf8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x179CFCu;
        goto label_179cfc;
    }
    ctx->pc = 0x179CF4u;
    {
        const bool branch_taken_0x179cf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179CF4u;
            // 0x179cf8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cf4) {
            ctx->pc = 0x179DA8u;
            goto label_179da8;
        }
    }
    ctx->pc = 0x179CFCu;
label_179cfc:
    // 0x179cfc: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x179cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_179d00:
    // 0x179d00: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x179d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_179d04:
    // 0x179d04: 0x3c02cf00  lui         $v0, 0xCF00
    ctx->pc = 0x179d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52992 << 16));
label_179d08:
    // 0x179d08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_179d0c:
    // 0x179d0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_179d10:
    // 0x179d10: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x179d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_179d14:
    // 0x179d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_179d18:
    // 0x179d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179d1c:
    // 0x179d1c: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x179d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_179d20:
    // 0x179d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_179d24:
    // 0x179d24: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x179d24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
label_179d28:
    // 0x179d28: 0xc6a30080  lwc1        $f3, 0x80($s5)
    ctx->pc = 0x179d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_179d2c:
    // 0x179d2c: 0xc6a10084  lwc1        $f1, 0x84($s5)
    ctx->pc = 0x179d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179d30:
    // 0x179d30: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x179d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_179d34:
    // 0x179d34: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x179d34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_179d38:
    // 0x179d38: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x179d38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_179d3c:
    // 0x179d3c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x179d3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_179d40:
    // 0x179d40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x179d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_179d44:
    // 0x179d44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x179d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179d48:
    // 0x179d48: 0x0  nop
    ctx->pc = 0x179d48u;
    // NOP
label_179d4c:
    // 0x179d4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_179d50:
    if (ctx->pc == 0x179D50u) {
        ctx->pc = 0x179D50u;
            // 0x179d50: 0xe6a10084  swc1        $f1, 0x84($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
        ctx->pc = 0x179D54u;
        goto label_179d54;
    }
    ctx->pc = 0x179D4Cu;
    {
        const bool branch_taken_0x179d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179D4Cu;
            // 0x179d50: 0xe6a10084  swc1        $f1, 0x84($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d4c) {
            ctx->pc = 0x179D58u;
            goto label_179d58;
        }
    }
    ctx->pc = 0x179D54u;
label_179d54:
    // 0x179d54: 0xe6a00084  swc1        $f0, 0x84($s5)
    ctx->pc = 0x179d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
label_179d58:
    // 0x179d58: 0xc6a10084  lwc1        $f1, 0x84($s5)
    ctx->pc = 0x179d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179d5c:
    // 0x179d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_179d60:
    // 0x179d60: 0x0  nop
    ctx->pc = 0x179d60u;
    // NOP
label_179d64:
    // 0x179d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x179d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179d68:
    // 0x179d68: 0x0  nop
    ctx->pc = 0x179d68u;
    // NOP
label_179d6c:
    // 0x179d6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_179d70:
    if (ctx->pc == 0x179D70u) {
        ctx->pc = 0x179D74u;
        goto label_179d74;
    }
    ctx->pc = 0x179D6Cu;
    {
        const bool branch_taken_0x179d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179d6c) {
            ctx->pc = 0x179D78u;
            goto label_179d78;
        }
    }
    ctx->pc = 0x179D74u;
label_179d74:
    // 0x179d74: 0xe6a00084  swc1        $f0, 0x84($s5)
    ctx->pc = 0x179d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
label_179d78:
    // 0x179d78: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x179d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_179d7c:
    // 0x179d7c: 0xc6a20068  lwc1        $f2, 0x68($s5)
    ctx->pc = 0x179d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179d80:
    // 0x179d80: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x179d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_179d84:
    // 0x179d84: 0xc6a10084  lwc1        $f1, 0x84($s5)
    ctx->pc = 0x179d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179d88:
    // 0x179d88: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x179d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179d8c:
    // 0x179d8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x179d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_179d90:
    // 0x179d90: 0xc041c4a  jal         func_107128
label_179d94:
    if (ctx->pc == 0x179D94u) {
        ctx->pc = 0x179D94u;
            // 0x179d94: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x179D98u;
        goto label_179d98;
    }
    ctx->pc = 0x179D90u;
    SET_GPR_U32(ctx, 31, 0x179D98u);
    ctx->pc = 0x179D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179D90u;
            // 0x179d94: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D98u; }
        if (ctx->pc != 0x179D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179D98u; }
        if (ctx->pc != 0x179D98u) { return; }
    }
    ctx->pc = 0x179D98u;
label_179d98:
    // 0x179d98: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x179d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_179d9c:
    // 0x179d9c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x179d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_179da0:
    // 0x179da0: 0xc04bcf4  jal         func_12F3D0
label_179da4:
    if (ctx->pc == 0x179DA4u) {
        ctx->pc = 0x179DA4u;
            // 0x179da4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179DA8u;
        goto label_179da8;
    }
    ctx->pc = 0x179DA0u;
    SET_GPR_U32(ctx, 31, 0x179DA8u);
    ctx->pc = 0x179DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179DA0u;
            // 0x179da4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DA8u; }
        if (ctx->pc != 0x179DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DA8u; }
        if (ctx->pc != 0x179DA8u) { return; }
    }
    ctx->pc = 0x179DA8u;
label_179da8:
    // 0x179da8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x179da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_179dac:
    // 0x179dac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x179dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_179db0:
    // 0x179db0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_179db4:
    // 0x179db4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x179db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179db8:
    // 0x179db8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x179db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179dbc:
    // 0x179dbc: 0xc04bd34  jal         func_12F4D0
label_179dc0:
    if (ctx->pc == 0x179DC0u) {
        ctx->pc = 0x179DC0u;
            // 0x179dc0: 0x534021  addu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x179DC4u;
        goto label_179dc4;
    }
    ctx->pc = 0x179DBCu;
    SET_GPR_U32(ctx, 31, 0x179DC4u);
    ctx->pc = 0x179DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179DBCu;
            // 0x179dc0: 0x534021  addu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DC4u; }
        if (ctx->pc != 0x179DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179DC4u; }
        if (ctx->pc != 0x179DC4u) { return; }
    }
    ctx->pc = 0x179DC4u;
label_179dc4:
    // 0x179dc4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x179dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_179dc8:
    // 0x179dc8: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x179dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_179dcc:
    // 0x179dcc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x179dccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_179dd0:
    // 0x179dd0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x179dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_179dd4:
    // 0x179dd4: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x179dd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_179dd8:
    // 0x179dd8: 0x1460ff49  bnez        $v1, . + 4 + (-0xB7 << 2)
label_179ddc:
    if (ctx->pc == 0x179DDCu) {
        ctx->pc = 0x179DDCu;
            // 0x179ddc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179DE0u;
        goto label_179de0;
    }
    ctx->pc = 0x179DD8u;
    {
        const bool branch_taken_0x179dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179DD8u;
            // 0x179ddc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dd8) {
            ctx->pc = 0x179B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179b00;
        }
    }
    ctx->pc = 0x179DE0u;
label_179de0:
    // 0x179de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179de4:
    // 0x179de4: 0x1000000b  b           . + 4 + (0xB << 2)
label_179de8:
    if (ctx->pc == 0x179DE8u) {
        ctx->pc = 0x179DE8u;
            // 0x179de8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179DECu;
        goto label_179dec;
    }
    ctx->pc = 0x179DE4u;
    {
        const bool branch_taken_0x179de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179DE4u;
            // 0x179de8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179de4) {
            ctx->pc = 0x179E14u;
            goto label_179e14;
        }
    }
    ctx->pc = 0x179DECu;
label_179dec:
    // 0x179dec: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x179decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_179df0:
    // 0x179df0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x179df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_179df4:
    // 0x179df4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x179df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_179df8:
    // 0x179df8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x179df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_179dfc:
    // 0x179dfc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x179dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_179e00:
    // 0x179e00: 0xc05e7ac  jal         func_179EB0
label_179e04:
    if (ctx->pc == 0x179E04u) {
        ctx->pc = 0x179E04u;
            // 0x179e04: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x179E08u;
        goto label_179e08;
    }
    ctx->pc = 0x179E00u;
    SET_GPR_U32(ctx, 31, 0x179E08u);
    ctx->pc = 0x179E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179E00u;
            // 0x179e04: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179EB0u;
    if (runtime->hasFunction(0x179EB0u)) {
        auto targetFn = runtime->lookupFunction(0x179EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179E08u; }
        if (ctx->pc != 0x179E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FramePose__13CDynamicAnimeFP8mgCFrameP13DA_FRAME_POSE_0x179eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179E08u; }
        if (ctx->pc != 0x179E08u) { return; }
    }
    ctx->pc = 0x179E08u;
label_179e08:
    // 0x179e08: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_179e0c:
    // 0x179e0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x179e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_179e10:
    // 0x179e10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x179e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_179e14:
    // 0x179e14: 0x0  nop
    ctx->pc = 0x179e14u;
    // NOP
label_179e18:
    // 0x179e18: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x179e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_179e1c:
    // 0x179e1c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x179e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_179e20:
    // 0x179e20: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_179e24:
    if (ctx->pc == 0x179E24u) {
        ctx->pc = 0x179E28u;
        goto label_179e28;
    }
    ctx->pc = 0x179E20u;
    {
        const bool branch_taken_0x179e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179e20) {
            ctx->pc = 0x179DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179dec;
        }
    }
    ctx->pc = 0x179E28u;
label_179e28:
    // 0x179e28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x179e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_179e2c:
    // 0x179e2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x179e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_179e30:
    // 0x179e30: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x179e30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_179e34:
    // 0x179e34: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x179e34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_179e38:
    // 0x179e38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x179e38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_179e3c:
    // 0x179e3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x179e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_179e40:
    // 0x179e40: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x179e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179e44:
    // 0x179e44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x179e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179e48:
    // 0x179e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179e4c:
    // 0x179e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179e50:
    // 0x179e50: 0x3e00008  jr          $ra
label_179e54:
    if (ctx->pc == 0x179E54u) {
        ctx->pc = 0x179E54u;
            // 0x179e54: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x179E58u;
        goto label_fallthrough_0x179e50;
    }
    ctx->pc = 0x179E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E50u;
            // 0x179e54: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x179e50:
    ctx->pc = 0x179E58u;
}
