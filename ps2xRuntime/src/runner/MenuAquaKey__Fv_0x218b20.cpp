#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAquaKey__Fv
// Address: 0x218b20 - 0x219018
void MenuAquaKey__Fv_0x218b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAquaKey__Fv_0x218b20");
#endif

    switch (ctx->pc) {
        case 0x218b20u: goto label_218b20;
        case 0x218b24u: goto label_218b24;
        case 0x218b28u: goto label_218b28;
        case 0x218b2cu: goto label_218b2c;
        case 0x218b30u: goto label_218b30;
        case 0x218b34u: goto label_218b34;
        case 0x218b38u: goto label_218b38;
        case 0x218b3cu: goto label_218b3c;
        case 0x218b40u: goto label_218b40;
        case 0x218b44u: goto label_218b44;
        case 0x218b48u: goto label_218b48;
        case 0x218b4cu: goto label_218b4c;
        case 0x218b50u: goto label_218b50;
        case 0x218b54u: goto label_218b54;
        case 0x218b58u: goto label_218b58;
        case 0x218b5cu: goto label_218b5c;
        case 0x218b60u: goto label_218b60;
        case 0x218b64u: goto label_218b64;
        case 0x218b68u: goto label_218b68;
        case 0x218b6cu: goto label_218b6c;
        case 0x218b70u: goto label_218b70;
        case 0x218b74u: goto label_218b74;
        case 0x218b78u: goto label_218b78;
        case 0x218b7cu: goto label_218b7c;
        case 0x218b80u: goto label_218b80;
        case 0x218b84u: goto label_218b84;
        case 0x218b88u: goto label_218b88;
        case 0x218b8cu: goto label_218b8c;
        case 0x218b90u: goto label_218b90;
        case 0x218b94u: goto label_218b94;
        case 0x218b98u: goto label_218b98;
        case 0x218b9cu: goto label_218b9c;
        case 0x218ba0u: goto label_218ba0;
        case 0x218ba4u: goto label_218ba4;
        case 0x218ba8u: goto label_218ba8;
        case 0x218bacu: goto label_218bac;
        case 0x218bb0u: goto label_218bb0;
        case 0x218bb4u: goto label_218bb4;
        case 0x218bb8u: goto label_218bb8;
        case 0x218bbcu: goto label_218bbc;
        case 0x218bc0u: goto label_218bc0;
        case 0x218bc4u: goto label_218bc4;
        case 0x218bc8u: goto label_218bc8;
        case 0x218bccu: goto label_218bcc;
        case 0x218bd0u: goto label_218bd0;
        case 0x218bd4u: goto label_218bd4;
        case 0x218bd8u: goto label_218bd8;
        case 0x218bdcu: goto label_218bdc;
        case 0x218be0u: goto label_218be0;
        case 0x218be4u: goto label_218be4;
        case 0x218be8u: goto label_218be8;
        case 0x218becu: goto label_218bec;
        case 0x218bf0u: goto label_218bf0;
        case 0x218bf4u: goto label_218bf4;
        case 0x218bf8u: goto label_218bf8;
        case 0x218bfcu: goto label_218bfc;
        case 0x218c00u: goto label_218c00;
        case 0x218c04u: goto label_218c04;
        case 0x218c08u: goto label_218c08;
        case 0x218c0cu: goto label_218c0c;
        case 0x218c10u: goto label_218c10;
        case 0x218c14u: goto label_218c14;
        case 0x218c18u: goto label_218c18;
        case 0x218c1cu: goto label_218c1c;
        case 0x218c20u: goto label_218c20;
        case 0x218c24u: goto label_218c24;
        case 0x218c28u: goto label_218c28;
        case 0x218c2cu: goto label_218c2c;
        case 0x218c30u: goto label_218c30;
        case 0x218c34u: goto label_218c34;
        case 0x218c38u: goto label_218c38;
        case 0x218c3cu: goto label_218c3c;
        case 0x218c40u: goto label_218c40;
        case 0x218c44u: goto label_218c44;
        case 0x218c48u: goto label_218c48;
        case 0x218c4cu: goto label_218c4c;
        case 0x218c50u: goto label_218c50;
        case 0x218c54u: goto label_218c54;
        case 0x218c58u: goto label_218c58;
        case 0x218c5cu: goto label_218c5c;
        case 0x218c60u: goto label_218c60;
        case 0x218c64u: goto label_218c64;
        case 0x218c68u: goto label_218c68;
        case 0x218c6cu: goto label_218c6c;
        case 0x218c70u: goto label_218c70;
        case 0x218c74u: goto label_218c74;
        case 0x218c78u: goto label_218c78;
        case 0x218c7cu: goto label_218c7c;
        case 0x218c80u: goto label_218c80;
        case 0x218c84u: goto label_218c84;
        case 0x218c88u: goto label_218c88;
        case 0x218c8cu: goto label_218c8c;
        case 0x218c90u: goto label_218c90;
        case 0x218c94u: goto label_218c94;
        case 0x218c98u: goto label_218c98;
        case 0x218c9cu: goto label_218c9c;
        case 0x218ca0u: goto label_218ca0;
        case 0x218ca4u: goto label_218ca4;
        case 0x218ca8u: goto label_218ca8;
        case 0x218cacu: goto label_218cac;
        case 0x218cb0u: goto label_218cb0;
        case 0x218cb4u: goto label_218cb4;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cbcu: goto label_218cbc;
        case 0x218cc0u: goto label_218cc0;
        case 0x218cc4u: goto label_218cc4;
        case 0x218cc8u: goto label_218cc8;
        case 0x218cccu: goto label_218ccc;
        case 0x218cd0u: goto label_218cd0;
        case 0x218cd4u: goto label_218cd4;
        case 0x218cd8u: goto label_218cd8;
        case 0x218cdcu: goto label_218cdc;
        case 0x218ce0u: goto label_218ce0;
        case 0x218ce4u: goto label_218ce4;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cecu: goto label_218cec;
        case 0x218cf0u: goto label_218cf0;
        case 0x218cf4u: goto label_218cf4;
        case 0x218cf8u: goto label_218cf8;
        case 0x218cfcu: goto label_218cfc;
        case 0x218d00u: goto label_218d00;
        case 0x218d04u: goto label_218d04;
        case 0x218d08u: goto label_218d08;
        case 0x218d0cu: goto label_218d0c;
        case 0x218d10u: goto label_218d10;
        case 0x218d14u: goto label_218d14;
        case 0x218d18u: goto label_218d18;
        case 0x218d1cu: goto label_218d1c;
        case 0x218d20u: goto label_218d20;
        case 0x218d24u: goto label_218d24;
        case 0x218d28u: goto label_218d28;
        case 0x218d2cu: goto label_218d2c;
        case 0x218d30u: goto label_218d30;
        case 0x218d34u: goto label_218d34;
        case 0x218d38u: goto label_218d38;
        case 0x218d3cu: goto label_218d3c;
        case 0x218d40u: goto label_218d40;
        case 0x218d44u: goto label_218d44;
        case 0x218d48u: goto label_218d48;
        case 0x218d4cu: goto label_218d4c;
        case 0x218d50u: goto label_218d50;
        case 0x218d54u: goto label_218d54;
        case 0x218d58u: goto label_218d58;
        case 0x218d5cu: goto label_218d5c;
        case 0x218d60u: goto label_218d60;
        case 0x218d64u: goto label_218d64;
        case 0x218d68u: goto label_218d68;
        case 0x218d6cu: goto label_218d6c;
        case 0x218d70u: goto label_218d70;
        case 0x218d74u: goto label_218d74;
        case 0x218d78u: goto label_218d78;
        case 0x218d7cu: goto label_218d7c;
        case 0x218d80u: goto label_218d80;
        case 0x218d84u: goto label_218d84;
        case 0x218d88u: goto label_218d88;
        case 0x218d8cu: goto label_218d8c;
        case 0x218d90u: goto label_218d90;
        case 0x218d94u: goto label_218d94;
        case 0x218d98u: goto label_218d98;
        case 0x218d9cu: goto label_218d9c;
        case 0x218da0u: goto label_218da0;
        case 0x218da4u: goto label_218da4;
        case 0x218da8u: goto label_218da8;
        case 0x218dacu: goto label_218dac;
        case 0x218db0u: goto label_218db0;
        case 0x218db4u: goto label_218db4;
        case 0x218db8u: goto label_218db8;
        case 0x218dbcu: goto label_218dbc;
        case 0x218dc0u: goto label_218dc0;
        case 0x218dc4u: goto label_218dc4;
        case 0x218dc8u: goto label_218dc8;
        case 0x218dccu: goto label_218dcc;
        case 0x218dd0u: goto label_218dd0;
        case 0x218dd4u: goto label_218dd4;
        case 0x218dd8u: goto label_218dd8;
        case 0x218ddcu: goto label_218ddc;
        case 0x218de0u: goto label_218de0;
        case 0x218de4u: goto label_218de4;
        case 0x218de8u: goto label_218de8;
        case 0x218decu: goto label_218dec;
        case 0x218df0u: goto label_218df0;
        case 0x218df4u: goto label_218df4;
        case 0x218df8u: goto label_218df8;
        case 0x218dfcu: goto label_218dfc;
        case 0x218e00u: goto label_218e00;
        case 0x218e04u: goto label_218e04;
        case 0x218e08u: goto label_218e08;
        case 0x218e0cu: goto label_218e0c;
        case 0x218e10u: goto label_218e10;
        case 0x218e14u: goto label_218e14;
        case 0x218e18u: goto label_218e18;
        case 0x218e1cu: goto label_218e1c;
        case 0x218e20u: goto label_218e20;
        case 0x218e24u: goto label_218e24;
        case 0x218e28u: goto label_218e28;
        case 0x218e2cu: goto label_218e2c;
        case 0x218e30u: goto label_218e30;
        case 0x218e34u: goto label_218e34;
        case 0x218e38u: goto label_218e38;
        case 0x218e3cu: goto label_218e3c;
        case 0x218e40u: goto label_218e40;
        case 0x218e44u: goto label_218e44;
        case 0x218e48u: goto label_218e48;
        case 0x218e4cu: goto label_218e4c;
        case 0x218e50u: goto label_218e50;
        case 0x218e54u: goto label_218e54;
        case 0x218e58u: goto label_218e58;
        case 0x218e5cu: goto label_218e5c;
        case 0x218e60u: goto label_218e60;
        case 0x218e64u: goto label_218e64;
        case 0x218e68u: goto label_218e68;
        case 0x218e6cu: goto label_218e6c;
        case 0x218e70u: goto label_218e70;
        case 0x218e74u: goto label_218e74;
        case 0x218e78u: goto label_218e78;
        case 0x218e7cu: goto label_218e7c;
        case 0x218e80u: goto label_218e80;
        case 0x218e84u: goto label_218e84;
        case 0x218e88u: goto label_218e88;
        case 0x218e8cu: goto label_218e8c;
        case 0x218e90u: goto label_218e90;
        case 0x218e94u: goto label_218e94;
        case 0x218e98u: goto label_218e98;
        case 0x218e9cu: goto label_218e9c;
        case 0x218ea0u: goto label_218ea0;
        case 0x218ea4u: goto label_218ea4;
        case 0x218ea8u: goto label_218ea8;
        case 0x218eacu: goto label_218eac;
        case 0x218eb0u: goto label_218eb0;
        case 0x218eb4u: goto label_218eb4;
        case 0x218eb8u: goto label_218eb8;
        case 0x218ebcu: goto label_218ebc;
        case 0x218ec0u: goto label_218ec0;
        case 0x218ec4u: goto label_218ec4;
        case 0x218ec8u: goto label_218ec8;
        case 0x218eccu: goto label_218ecc;
        case 0x218ed0u: goto label_218ed0;
        case 0x218ed4u: goto label_218ed4;
        case 0x218ed8u: goto label_218ed8;
        case 0x218edcu: goto label_218edc;
        case 0x218ee0u: goto label_218ee0;
        case 0x218ee4u: goto label_218ee4;
        case 0x218ee8u: goto label_218ee8;
        case 0x218eecu: goto label_218eec;
        case 0x218ef0u: goto label_218ef0;
        case 0x218ef4u: goto label_218ef4;
        case 0x218ef8u: goto label_218ef8;
        case 0x218efcu: goto label_218efc;
        case 0x218f00u: goto label_218f00;
        case 0x218f04u: goto label_218f04;
        case 0x218f08u: goto label_218f08;
        case 0x218f0cu: goto label_218f0c;
        case 0x218f10u: goto label_218f10;
        case 0x218f14u: goto label_218f14;
        case 0x218f18u: goto label_218f18;
        case 0x218f1cu: goto label_218f1c;
        case 0x218f20u: goto label_218f20;
        case 0x218f24u: goto label_218f24;
        case 0x218f28u: goto label_218f28;
        case 0x218f2cu: goto label_218f2c;
        case 0x218f30u: goto label_218f30;
        case 0x218f34u: goto label_218f34;
        case 0x218f38u: goto label_218f38;
        case 0x218f3cu: goto label_218f3c;
        case 0x218f40u: goto label_218f40;
        case 0x218f44u: goto label_218f44;
        case 0x218f48u: goto label_218f48;
        case 0x218f4cu: goto label_218f4c;
        case 0x218f50u: goto label_218f50;
        case 0x218f54u: goto label_218f54;
        case 0x218f58u: goto label_218f58;
        case 0x218f5cu: goto label_218f5c;
        case 0x218f60u: goto label_218f60;
        case 0x218f64u: goto label_218f64;
        case 0x218f68u: goto label_218f68;
        case 0x218f6cu: goto label_218f6c;
        case 0x218f70u: goto label_218f70;
        case 0x218f74u: goto label_218f74;
        case 0x218f78u: goto label_218f78;
        case 0x218f7cu: goto label_218f7c;
        case 0x218f80u: goto label_218f80;
        case 0x218f84u: goto label_218f84;
        case 0x218f88u: goto label_218f88;
        case 0x218f8cu: goto label_218f8c;
        case 0x218f90u: goto label_218f90;
        case 0x218f94u: goto label_218f94;
        case 0x218f98u: goto label_218f98;
        case 0x218f9cu: goto label_218f9c;
        case 0x218fa0u: goto label_218fa0;
        case 0x218fa4u: goto label_218fa4;
        case 0x218fa8u: goto label_218fa8;
        case 0x218facu: goto label_218fac;
        case 0x218fb0u: goto label_218fb0;
        case 0x218fb4u: goto label_218fb4;
        case 0x218fb8u: goto label_218fb8;
        case 0x218fbcu: goto label_218fbc;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fc4u: goto label_218fc4;
        case 0x218fc8u: goto label_218fc8;
        case 0x218fccu: goto label_218fcc;
        case 0x218fd0u: goto label_218fd0;
        case 0x218fd4u: goto label_218fd4;
        case 0x218fd8u: goto label_218fd8;
        case 0x218fdcu: goto label_218fdc;
        case 0x218fe0u: goto label_218fe0;
        case 0x218fe4u: goto label_218fe4;
        case 0x218fe8u: goto label_218fe8;
        case 0x218fecu: goto label_218fec;
        case 0x218ff0u: goto label_218ff0;
        case 0x218ff4u: goto label_218ff4;
        case 0x218ff8u: goto label_218ff8;
        case 0x218ffcu: goto label_218ffc;
        case 0x219000u: goto label_219000;
        case 0x219004u: goto label_219004;
        case 0x219008u: goto label_219008;
        case 0x21900cu: goto label_21900c;
        case 0x219010u: goto label_219010;
        case 0x219014u: goto label_219014;
        default: break;
    }

    ctx->pc = 0x218b20u;

label_218b20:
    // 0x218b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_218b24:
    // 0x218b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_218b28:
    // 0x218b28: 0x8f8291b4  lw          $v0, -0x6E4C($gp)
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939060)));
label_218b2c:
    // 0x218b2c: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x218b2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_218b30:
    // 0x218b30: 0x10200135  beqz        $at, . + 4 + (0x135 << 2)
label_218b34:
    if (ctx->pc == 0x218B34u) {
        ctx->pc = 0x218B34u;
            // 0x218b34: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x218B38u;
        goto label_218b38;
    }
    ctx->pc = 0x218B30u;
    {
        const bool branch_taken_0x218b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B30u;
            // 0x218b34: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b30) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218B38u;
label_218b38:
    // 0x218b38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_218b3c:
    // 0x218b3c: 0x2463a300  addiu       $v1, $v1, -0x5D00
    ctx->pc = 0x218b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
label_218b40:
    // 0x218b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218b44:
    // 0x218b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x218b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218b48:
    // 0x218b48: 0x400008  jr          $v0
label_218b4c:
    if (ctx->pc == 0x218B4Cu) {
        ctx->pc = 0x218B50u;
        goto label_218b50;
    }
    ctx->pc = 0x218B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218B50u: goto label_218b50;
            case 0x218B64u: goto label_218b64;
            case 0x218B90u: goto label_218b90;
            case 0x218E50u: goto label_218e50;
            case 0x218E74u: goto label_218e74;
            case 0x218EE4u: goto label_218ee4;
            case 0x218F38u: goto label_218f38;
            case 0x218F60u: goto label_218f60;
            case 0x218FC4u: goto label_218fc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218B50u;
label_218b50:
    // 0x218b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218b54:
    // 0x218b54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218b58:
    // 0x218b58: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_218b5c:
    // 0x218b5c: 0xc052d48  jal         func_14B520
label_218b60:
    if (ctx->pc == 0x218B60u) {
        ctx->pc = 0x218B60u;
            // 0x218b60: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->pc = 0x218B64u;
        goto label_218b64;
    }
    ctx->pc = 0x218B5Cu;
    SET_GPR_U32(ctx, 31, 0x218B64u);
    ctx->pc = 0x218B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B5Cu;
            // 0x218b60: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B64u; }
        if (ctx->pc != 0x218B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B64u; }
        if (ctx->pc != 0x218B64u) { return; }
    }
    ctx->pc = 0x218B64u;
label_218b64:
    // 0x218b64: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218b68:
    // 0x218b68: 0xc085800  jal         func_216000
label_218b6c:
    if (ctx->pc == 0x218B6Cu) {
        ctx->pc = 0x218B6Cu;
            // 0x218b6c: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218B70u;
        goto label_218b70;
    }
    ctx->pc = 0x218B68u;
    SET_GPR_U32(ctx, 31, 0x218B70u);
    ctx->pc = 0x218B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B68u;
            // 0x218b6c: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (runtime->hasFunction(0x216000u)) {
        auto targetFn = runtime->lookupFunction(0x216000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B70u; }
        if (ctx->pc != 0x218B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CAquariumFv_0x216000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B70u; }
        if (ctx->pc != 0x218B70u) { return; }
    }
    ctx->pc = 0x218B70u;
label_218b70:
    // 0x218b70: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218b74:
    // 0x218b74: 0xc05f65c  jal         func_17D970
label_218b78:
    if (ctx->pc == 0x218B78u) {
        ctx->pc = 0x218B78u;
            // 0x218b78: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218B7Cu;
        goto label_218b7c;
    }
    ctx->pc = 0x218B74u;
    SET_GPR_U32(ctx, 31, 0x218B7Cu);
    ctx->pc = 0x218B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B74u;
            // 0x218b78: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B7Cu; }
        if (ctx->pc != 0x218B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B7Cu; }
        if (ctx->pc != 0x218B7Cu) { return; }
    }
    ctx->pc = 0x218B7Cu;
label_218b7c:
    // 0x218b7c: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
label_218b80:
    if (ctx->pc == 0x218B80u) {
        ctx->pc = 0x218B80u;
            // 0x218b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x218B84u;
        goto label_218b84;
    }
    ctx->pc = 0x218B7Cu;
    {
        const bool branch_taken_0x218b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B7Cu;
            // 0x218b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b7c) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218B84u;
label_218b84:
    // 0x218b84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218b88:
    // 0x218b88: 0x1000011f  b           . + 4 + (0x11F << 2)
label_218b8c:
    if (ctx->pc == 0x218B8Cu) {
        ctx->pc = 0x218B8Cu;
            // 0x218b8c: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->pc = 0x218B90u;
        goto label_218b90;
    }
    ctx->pc = 0x218B88u;
    {
        const bool branch_taken_0x218b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B88u;
            // 0x218b8c: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b88) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218B90u;
label_218b90:
    // 0x218b90: 0x8f8291c4  lw          $v0, -0x6E3C($gp)
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939076)));
label_218b94:
    // 0x218b94: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_218b98:
    if (ctx->pc == 0x218B98u) {
        ctx->pc = 0x218B98u;
            // 0x218b98: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x218B9Cu;
        goto label_218b9c;
    }
    ctx->pc = 0x218B94u;
    {
        const bool branch_taken_0x218b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B94u;
            // 0x218b98: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b94) {
            ctx->pc = 0x218D0Cu;
            goto label_218d0c;
        }
    }
    ctx->pc = 0x218B9Cu;
label_218b9c:
    // 0x218b9c: 0xc052ca0  jal         func_14B280
label_218ba0:
    if (ctx->pc == 0x218BA0u) {
        ctx->pc = 0x218BA0u;
            // 0x218ba0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218BA4u;
        goto label_218ba4;
    }
    ctx->pc = 0x218B9Cu;
    SET_GPR_U32(ctx, 31, 0x218BA4u);
    ctx->pc = 0x218BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B9Cu;
            // 0x218ba0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BA4u; }
        if (ctx->pc != 0x218BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BA4u; }
        if (ctx->pc != 0x218BA4u) { return; }
    }
    ctx->pc = 0x218BA4u;
label_218ba4:
    // 0x218ba4: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x218ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_218ba8:
    // 0x218ba8: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218bac:
    // 0x218bac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x218bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_218bb0:
    // 0x218bb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218bb4:
    // 0x218bb4: 0x0  nop
    ctx->pc = 0x218bb4u;
    // NOP
label_218bb8:
    // 0x218bb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x218bb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_218bbc:
    // 0x218bbc: 0xc04c67c  jal         func_1319F0
label_218bc0:
    if (ctx->pc == 0x218BC0u) {
        ctx->pc = 0x218BC0u;
            // 0x218bc0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x218BC4u;
        goto label_218bc4;
    }
    ctx->pc = 0x218BBCu;
    SET_GPR_U32(ctx, 31, 0x218BC4u);
    ctx->pc = 0x218BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218BBCu;
            // 0x218bc0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BC4u; }
        if (ctx->pc != 0x218BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BC4u; }
        if (ctx->pc != 0x218BC4u) { return; }
    }
    ctx->pc = 0x218BC4u;
label_218bc4:
    // 0x218bc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218bc8:
    // 0x218bc8: 0xc052cc0  jal         func_14B300
label_218bcc:
    if (ctx->pc == 0x218BCCu) {
        ctx->pc = 0x218BCCu;
            // 0x218bcc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218BD0u;
        goto label_218bd0;
    }
    ctx->pc = 0x218BC8u;
    SET_GPR_U32(ctx, 31, 0x218BD0u);
    ctx->pc = 0x218BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218BC8u;
            // 0x218bcc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BD0u; }
        if (ctx->pc != 0x218BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BD0u; }
        if (ctx->pc != 0x218BD0u) { return; }
    }
    ctx->pc = 0x218BD0u;
label_218bd0:
    // 0x218bd0: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x218bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_218bd4:
    // 0x218bd4: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218bd8:
    // 0x218bd8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x218bd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_218bdc:
    // 0x218bdc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x218bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_218be0:
    // 0x218be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218be4:
    // 0x218be4: 0xc04c67c  jal         func_1319F0
label_218be8:
    if (ctx->pc == 0x218BE8u) {
        ctx->pc = 0x218BE8u;
            // 0x218be8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x218BECu;
        goto label_218bec;
    }
    ctx->pc = 0x218BE4u;
    SET_GPR_U32(ctx, 31, 0x218BECu);
    ctx->pc = 0x218BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218BE4u;
            // 0x218be8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BECu; }
        if (ctx->pc != 0x218BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BECu; }
        if (ctx->pc != 0x218BECu) { return; }
    }
    ctx->pc = 0x218BECu;
label_218bec:
    // 0x218bec: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218bf0:
    // 0x218bf0: 0xc052cb0  jal         func_14B2C0
label_218bf4:
    if (ctx->pc == 0x218BF4u) {
        ctx->pc = 0x218BF4u;
            // 0x218bf4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218BF8u;
        goto label_218bf8;
    }
    ctx->pc = 0x218BF0u;
    SET_GPR_U32(ctx, 31, 0x218BF8u);
    ctx->pc = 0x218BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218BF0u;
            // 0x218bf4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BF8u; }
        if (ctx->pc != 0x218BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BF8u; }
        if (ctx->pc != 0x218BF8u) { return; }
    }
    ctx->pc = 0x218BF8u;
label_218bf8:
    // 0x218bf8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_218bfc:
    // 0x218bfc: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218c00:
    // 0x218c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218c04:
    // 0x218c04: 0xc04c694  jal         func_131A50
label_218c08:
    if (ctx->pc == 0x218C08u) {
        ctx->pc = 0x218C08u;
            // 0x218c08: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x218C0Cu;
        goto label_218c0c;
    }
    ctx->pc = 0x218C04u;
    SET_GPR_U32(ctx, 31, 0x218C0Cu);
    ctx->pc = 0x218C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C04u;
            // 0x218c08: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C0Cu; }
        if (ctx->pc != 0x218C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C0Cu; }
        if (ctx->pc != 0x218C0Cu) { return; }
    }
    ctx->pc = 0x218C0Cu;
label_218c0c:
    // 0x218c0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218c10:
    // 0x218c10: 0xc052cd0  jal         func_14B340
label_218c14:
    if (ctx->pc == 0x218C14u) {
        ctx->pc = 0x218C14u;
            // 0x218c14: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218C18u;
        goto label_218c18;
    }
    ctx->pc = 0x218C10u;
    SET_GPR_U32(ctx, 31, 0x218C18u);
    ctx->pc = 0x218C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C10u;
            // 0x218c14: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C18u; }
        if (ctx->pc != 0x218C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C18u; }
        if (ctx->pc != 0x218C18u) { return; }
    }
    ctx->pc = 0x218C18u;
label_218c18:
    // 0x218c18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x218c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_218c1c:
    // 0x218c1c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218c20:
    // 0x218c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218c24:
    // 0x218c24: 0xc04c688  jal         func_131A20
label_218c28:
    if (ctx->pc == 0x218C28u) {
        ctx->pc = 0x218C28u;
            // 0x218c28: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x218C2Cu;
        goto label_218c2c;
    }
    ctx->pc = 0x218C24u;
    SET_GPR_U32(ctx, 31, 0x218C2Cu);
    ctx->pc = 0x218C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C24u;
            // 0x218c28: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A20u;
    if (runtime->hasFunction(0x131A20u)) {
        auto targetFn = runtime->lookupFunction(0x131A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C2Cu; }
        if (ctx->pc != 0x218C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDistance__15mgCCameraFollowFf_0x131a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C2Cu; }
        if (ctx->pc != 0x218C2Cu) { return; }
    }
    ctx->pc = 0x218C2Cu;
label_218c2c:
    // 0x218c2c: 0xc04c690  jal         func_131A40
label_218c30:
    if (ctx->pc == 0x218C30u) {
        ctx->pc = 0x218C30u;
            // 0x218c30: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218C34u;
        goto label_218c34;
    }
    ctx->pc = 0x218C2Cu;
    SET_GPR_U32(ctx, 31, 0x218C34u);
    ctx->pc = 0x218C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C2Cu;
            // 0x218c30: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C34u; }
        if (ctx->pc != 0x218C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C34u; }
        if (ctx->pc != 0x218C34u) { return; }
    }
    ctx->pc = 0x218C34u;
label_218c34:
    // 0x218c34: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_218c38:
    // 0x218c38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218c3c:
    // 0x218c3c: 0x0  nop
    ctx->pc = 0x218c3cu;
    // NOP
label_218c40:
    // 0x218c40: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x218c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218c44:
    // 0x218c44: 0x0  nop
    ctx->pc = 0x218c44u;
    // NOP
label_218c48:
    // 0x218c48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_218c4c:
    if (ctx->pc == 0x218C4Cu) {
        ctx->pc = 0x218C50u;
        goto label_218c50;
    }
    ctx->pc = 0x218C48u;
    {
        const bool branch_taken_0x218c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218c48) {
            ctx->pc = 0x218C60u;
            goto label_218c60;
        }
    }
    ctx->pc = 0x218C50u;
label_218c50:
    // 0x218c50: 0xc04c68c  jal         func_131A30
label_218c54:
    if (ctx->pc == 0x218C54u) {
        ctx->pc = 0x218C54u;
            // 0x218c54: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218C58u;
        goto label_218c58;
    }
    ctx->pc = 0x218C50u;
    SET_GPR_U32(ctx, 31, 0x218C58u);
    ctx->pc = 0x218C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C50u;
            // 0x218c54: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C58u; }
        if (ctx->pc != 0x218C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C58u; }
        if (ctx->pc != 0x218C58u) { return; }
    }
    ctx->pc = 0x218C58u;
label_218c58:
    // 0x218c58: 0x1000000d  b           . + 4 + (0xD << 2)
label_218c5c:
    if (ctx->pc == 0x218C5Cu) {
        ctx->pc = 0x218C5Cu;
            // 0x218c5c: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218C60u;
        goto label_218c60;
    }
    ctx->pc = 0x218C58u;
    {
        const bool branch_taken_0x218c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C58u;
            // 0x218c5c: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c58) {
            ctx->pc = 0x218C90u;
            goto label_218c90;
        }
    }
    ctx->pc = 0x218C60u;
label_218c60:
    // 0x218c60: 0xc04c690  jal         func_131A40
label_218c64:
    if (ctx->pc == 0x218C64u) {
        ctx->pc = 0x218C64u;
            // 0x218c64: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218C68u;
        goto label_218c68;
    }
    ctx->pc = 0x218C60u;
    SET_GPR_U32(ctx, 31, 0x218C68u);
    ctx->pc = 0x218C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C60u;
            // 0x218c64: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C68u; }
        if (ctx->pc != 0x218C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C68u; }
        if (ctx->pc != 0x218C68u) { return; }
    }
    ctx->pc = 0x218C68u;
label_218c68:
    // 0x218c68: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x218c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_218c6c:
    // 0x218c6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218c70:
    // 0x218c70: 0x0  nop
    ctx->pc = 0x218c70u;
    // NOP
label_218c74:
    // 0x218c74: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x218c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218c78:
    // 0x218c78: 0x0  nop
    ctx->pc = 0x218c78u;
    // NOP
label_218c7c:
    // 0x218c7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_218c80:
    if (ctx->pc == 0x218C80u) {
        ctx->pc = 0x218C84u;
        goto label_218c84;
    }
    ctx->pc = 0x218C7Cu;
    {
        const bool branch_taken_0x218c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218c7c) {
            ctx->pc = 0x218C8Cu;
            goto label_218c8c;
        }
    }
    ctx->pc = 0x218C84u;
label_218c84:
    // 0x218c84: 0xc04c68c  jal         func_131A30
label_218c88:
    if (ctx->pc == 0x218C88u) {
        ctx->pc = 0x218C88u;
            // 0x218c88: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218C8Cu;
        goto label_218c8c;
    }
    ctx->pc = 0x218C84u;
    SET_GPR_U32(ctx, 31, 0x218C8Cu);
    ctx->pc = 0x218C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C84u;
            // 0x218c88: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C8Cu; }
        if (ctx->pc != 0x218C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C8Cu; }
        if (ctx->pc != 0x218C8Cu) { return; }
    }
    ctx->pc = 0x218C8Cu;
label_218c8c:
    // 0x218c8c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218c90:
    // 0x218c90: 0xc04c684  jal         func_131A10
label_218c94:
    if (ctx->pc == 0x218C94u) {
        ctx->pc = 0x218C98u;
        goto label_218c98;
    }
    ctx->pc = 0x218C90u;
    SET_GPR_U32(ctx, 31, 0x218C98u);
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C98u; }
        if (ctx->pc != 0x218C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C98u; }
        if (ctx->pc != 0x218C98u) { return; }
    }
    ctx->pc = 0x218C98u;
label_218c98:
    // 0x218c98: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x218c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
label_218c9c:
    // 0x218c9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218ca0:
    // 0x218ca0: 0x0  nop
    ctx->pc = 0x218ca0u;
    // NOP
label_218ca4:
    // 0x218ca4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x218ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218ca8:
    // 0x218ca8: 0x0  nop
    ctx->pc = 0x218ca8u;
    // NOP
label_218cac:
    // 0x218cac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_218cb0:
    if (ctx->pc == 0x218CB0u) {
        ctx->pc = 0x218CB4u;
        goto label_218cb4;
    }
    ctx->pc = 0x218CACu;
    {
        const bool branch_taken_0x218cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218cac) {
            ctx->pc = 0x218CC4u;
            goto label_218cc4;
        }
    }
    ctx->pc = 0x218CB4u;
label_218cb4:
    // 0x218cb4: 0xc04c680  jal         func_131A00
label_218cb8:
    if (ctx->pc == 0x218CB8u) {
        ctx->pc = 0x218CB8u;
            // 0x218cb8: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218CBCu;
        goto label_218cbc;
    }
    ctx->pc = 0x218CB4u;
    SET_GPR_U32(ctx, 31, 0x218CBCu);
    ctx->pc = 0x218CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218CB4u;
            // 0x218cb8: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CBCu; }
        if (ctx->pc != 0x218CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CBCu; }
        if (ctx->pc != 0x218CBCu) { return; }
    }
    ctx->pc = 0x218CBCu;
label_218cbc:
    // 0x218cbc: 0x1000000d  b           . + 4 + (0xD << 2)
label_218cc0:
    if (ctx->pc == 0x218CC0u) {
        ctx->pc = 0x218CC0u;
            // 0x218cc0: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218CC4u;
        goto label_218cc4;
    }
    ctx->pc = 0x218CBCu;
    {
        const bool branch_taken_0x218cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218CBCu;
            // 0x218cc0: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cbc) {
            ctx->pc = 0x218CF4u;
            goto label_218cf4;
        }
    }
    ctx->pc = 0x218CC4u;
label_218cc4:
    // 0x218cc4: 0xc04c684  jal         func_131A10
label_218cc8:
    if (ctx->pc == 0x218CC8u) {
        ctx->pc = 0x218CC8u;
            // 0x218cc8: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218CCCu;
        goto label_218ccc;
    }
    ctx->pc = 0x218CC4u;
    SET_GPR_U32(ctx, 31, 0x218CCCu);
    ctx->pc = 0x218CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218CC4u;
            // 0x218cc8: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CCCu; }
        if (ctx->pc != 0x218CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CCCu; }
        if (ctx->pc != 0x218CCCu) { return; }
    }
    ctx->pc = 0x218CCCu;
label_218ccc:
    // 0x218ccc: 0x3c024383  lui         $v0, 0x4383
    ctx->pc = 0x218cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17283 << 16));
label_218cd0:
    // 0x218cd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218cd4:
    // 0x218cd4: 0x0  nop
    ctx->pc = 0x218cd4u;
    // NOP
label_218cd8:
    // 0x218cd8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x218cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218cdc:
    // 0x218cdc: 0x0  nop
    ctx->pc = 0x218cdcu;
    // NOP
label_218ce0:
    // 0x218ce0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_218ce4:
    if (ctx->pc == 0x218CE4u) {
        ctx->pc = 0x218CE8u;
        goto label_218ce8;
    }
    ctx->pc = 0x218CE0u;
    {
        const bool branch_taken_0x218ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218ce0) {
            ctx->pc = 0x218CF0u;
            goto label_218cf0;
        }
    }
    ctx->pc = 0x218CE8u;
label_218ce8:
    // 0x218ce8: 0xc04c680  jal         func_131A00
label_218cec:
    if (ctx->pc == 0x218CECu) {
        ctx->pc = 0x218CECu;
            // 0x218cec: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218CF0u;
        goto label_218cf0;
    }
    ctx->pc = 0x218CE8u;
    SET_GPR_U32(ctx, 31, 0x218CF0u);
    ctx->pc = 0x218CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218CE8u;
            // 0x218cec: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CF0u; }
        if (ctx->pc != 0x218CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CF0u; }
        if (ctx->pc != 0x218CF0u) { return; }
    }
    ctx->pc = 0x218CF0u;
label_218cf0:
    // 0x218cf0: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218cf4:
    // 0x218cf4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_218cf8:
    // 0x218cf8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_218cfc:
    // 0x218cfc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x218cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218d00:
    // 0x218d00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x218d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_218d04:
    // 0x218d04: 0xc04c564  jal         func_131590
label_218d08:
    if (ctx->pc == 0x218D08u) {
        ctx->pc = 0x218D0Cu;
        goto label_218d0c;
    }
    ctx->pc = 0x218D04u;
    SET_GPR_U32(ctx, 31, 0x218D0Cu);
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D0Cu; }
        if (ctx->pc != 0x218D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D0Cu; }
        if (ctx->pc != 0x218D0Cu) { return; }
    }
    ctx->pc = 0x218D0Cu;
label_218d0c:
    // 0x218d0c: 0x8f8391c4  lw          $v1, -0x6E3C($gp)
    ctx->pc = 0x218d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939076)));
label_218d10:
    // 0x218d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218d14:
    // 0x218d14: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_218d18:
    if (ctx->pc == 0x218D18u) {
        ctx->pc = 0x218D18u;
            // 0x218d18: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x218D1Cu;
        goto label_218d1c;
    }
    ctx->pc = 0x218D14u;
    {
        const bool branch_taken_0x218d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x218D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218D14u;
            // 0x218d18: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d14) {
            ctx->pc = 0x218DECu;
            goto label_218dec;
        }
    }
    ctx->pc = 0x218D1Cu;
label_218d1c:
    // 0x218d1c: 0xc052ca0  jal         func_14B280
label_218d20:
    if (ctx->pc == 0x218D20u) {
        ctx->pc = 0x218D20u;
            // 0x218d20: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218D24u;
        goto label_218d24;
    }
    ctx->pc = 0x218D1Cu;
    SET_GPR_U32(ctx, 31, 0x218D24u);
    ctx->pc = 0x218D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D1Cu;
            // 0x218d20: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D24u; }
        if (ctx->pc != 0x218D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D24u; }
        if (ctx->pc != 0x218D24u) { return; }
    }
    ctx->pc = 0x218D24u;
label_218d24:
    // 0x218d24: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x218d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_218d28:
    // 0x218d28: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218d2c:
    // 0x218d2c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x218d2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_218d30:
    // 0x218d30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x218d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_218d34:
    // 0x218d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218d38:
    // 0x218d38: 0xc04c67c  jal         func_1319F0
label_218d3c:
    if (ctx->pc == 0x218D3Cu) {
        ctx->pc = 0x218D3Cu;
            // 0x218d3c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x218D40u;
        goto label_218d40;
    }
    ctx->pc = 0x218D38u;
    SET_GPR_U32(ctx, 31, 0x218D40u);
    ctx->pc = 0x218D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D38u;
            // 0x218d3c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D40u; }
        if (ctx->pc != 0x218D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D40u; }
        if (ctx->pc != 0x218D40u) { return; }
    }
    ctx->pc = 0x218D40u;
label_218d40:
    // 0x218d40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218d44:
    // 0x218d44: 0xc052cb0  jal         func_14B2C0
label_218d48:
    if (ctx->pc == 0x218D48u) {
        ctx->pc = 0x218D48u;
            // 0x218d48: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218D4Cu;
        goto label_218d4c;
    }
    ctx->pc = 0x218D44u;
    SET_GPR_U32(ctx, 31, 0x218D4Cu);
    ctx->pc = 0x218D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D44u;
            // 0x218d48: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D4Cu; }
        if (ctx->pc != 0x218D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D4Cu; }
        if (ctx->pc != 0x218D4Cu) { return; }
    }
    ctx->pc = 0x218D4Cu;
label_218d4c:
    // 0x218d4c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_218d50:
    // 0x218d50: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218d54:
    // 0x218d54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218d58:
    // 0x218d58: 0xc04c694  jal         func_131A50
label_218d5c:
    if (ctx->pc == 0x218D5Cu) {
        ctx->pc = 0x218D5Cu;
            // 0x218d5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x218D60u;
        goto label_218d60;
    }
    ctx->pc = 0x218D58u;
    SET_GPR_U32(ctx, 31, 0x218D60u);
    ctx->pc = 0x218D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D58u;
            // 0x218d5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D60u; }
        if (ctx->pc != 0x218D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D60u; }
        if (ctx->pc != 0x218D60u) { return; }
    }
    ctx->pc = 0x218D60u;
label_218d60:
    // 0x218d60: 0xc04c690  jal         func_131A40
label_218d64:
    if (ctx->pc == 0x218D64u) {
        ctx->pc = 0x218D64u;
            // 0x218d64: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218D68u;
        goto label_218d68;
    }
    ctx->pc = 0x218D60u;
    SET_GPR_U32(ctx, 31, 0x218D68u);
    ctx->pc = 0x218D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D60u;
            // 0x218d64: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D68u; }
        if (ctx->pc != 0x218D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D68u; }
        if (ctx->pc != 0x218D68u) { return; }
    }
    ctx->pc = 0x218D68u;
label_218d68:
    // 0x218d68: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x218d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_218d6c:
    // 0x218d6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218d70:
    // 0x218d70: 0x0  nop
    ctx->pc = 0x218d70u;
    // NOP
label_218d74:
    // 0x218d74: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x218d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218d78:
    // 0x218d78: 0x0  nop
    ctx->pc = 0x218d78u;
    // NOP
label_218d7c:
    // 0x218d7c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_218d80:
    if (ctx->pc == 0x218D80u) {
        ctx->pc = 0x218D84u;
        goto label_218d84;
    }
    ctx->pc = 0x218D7Cu;
    {
        const bool branch_taken_0x218d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218d7c) {
            ctx->pc = 0x218D94u;
            goto label_218d94;
        }
    }
    ctx->pc = 0x218D84u;
label_218d84:
    // 0x218d84: 0xc04c68c  jal         func_131A30
label_218d88:
    if (ctx->pc == 0x218D88u) {
        ctx->pc = 0x218D88u;
            // 0x218d88: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218D8Cu;
        goto label_218d8c;
    }
    ctx->pc = 0x218D84u;
    SET_GPR_U32(ctx, 31, 0x218D8Cu);
    ctx->pc = 0x218D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D84u;
            // 0x218d88: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D8Cu; }
        if (ctx->pc != 0x218D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D8Cu; }
        if (ctx->pc != 0x218D8Cu) { return; }
    }
    ctx->pc = 0x218D8Cu;
label_218d8c:
    // 0x218d8c: 0x1000000d  b           . + 4 + (0xD << 2)
label_218d90:
    if (ctx->pc == 0x218D90u) {
        ctx->pc = 0x218D90u;
            // 0x218d90: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218D94u;
        goto label_218d94;
    }
    ctx->pc = 0x218D8Cu;
    {
        const bool branch_taken_0x218d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218D8Cu;
            // 0x218d90: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d8c) {
            ctx->pc = 0x218DC4u;
            goto label_218dc4;
        }
    }
    ctx->pc = 0x218D94u;
label_218d94:
    // 0x218d94: 0xc04c690  jal         func_131A40
label_218d98:
    if (ctx->pc == 0x218D98u) {
        ctx->pc = 0x218D98u;
            // 0x218d98: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218D9Cu;
        goto label_218d9c;
    }
    ctx->pc = 0x218D94u;
    SET_GPR_U32(ctx, 31, 0x218D9Cu);
    ctx->pc = 0x218D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D94u;
            // 0x218d98: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D9Cu; }
        if (ctx->pc != 0x218D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D9Cu; }
        if (ctx->pc != 0x218D9Cu) { return; }
    }
    ctx->pc = 0x218D9Cu;
label_218d9c:
    // 0x218d9c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x218d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_218da0:
    // 0x218da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218da4:
    // 0x218da4: 0x0  nop
    ctx->pc = 0x218da4u;
    // NOP
label_218da8:
    // 0x218da8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x218da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218dac:
    // 0x218dac: 0x0  nop
    ctx->pc = 0x218dacu;
    // NOP
label_218db0:
    // 0x218db0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_218db4:
    if (ctx->pc == 0x218DB4u) {
        ctx->pc = 0x218DB8u;
        goto label_218db8;
    }
    ctx->pc = 0x218DB0u;
    {
        const bool branch_taken_0x218db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218db0) {
            ctx->pc = 0x218DC0u;
            goto label_218dc0;
        }
    }
    ctx->pc = 0x218DB8u;
label_218db8:
    // 0x218db8: 0xc04c68c  jal         func_131A30
label_218dbc:
    if (ctx->pc == 0x218DBCu) {
        ctx->pc = 0x218DBCu;
            // 0x218dbc: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218DC0u;
        goto label_218dc0;
    }
    ctx->pc = 0x218DB8u;
    SET_GPR_U32(ctx, 31, 0x218DC0u);
    ctx->pc = 0x218DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DB8u;
            // 0x218dbc: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC0u; }
        if (ctx->pc != 0x218DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC0u; }
        if (ctx->pc != 0x218DC0u) { return; }
    }
    ctx->pc = 0x218DC0u;
label_218dc0:
    // 0x218dc0: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218dc4:
    // 0x218dc4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_218dc8:
    // 0x218dc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218dcc:
    // 0x218dcc: 0xc04c680  jal         func_131A00
label_218dd0:
    if (ctx->pc == 0x218DD0u) {
        ctx->pc = 0x218DD4u;
        goto label_218dd4;
    }
    ctx->pc = 0x218DCCu;
    SET_GPR_U32(ctx, 31, 0x218DD4u);
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DD4u; }
        if (ctx->pc != 0x218DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DD4u; }
        if (ctx->pc != 0x218DD4u) { return; }
    }
    ctx->pc = 0x218DD4u;
label_218dd4:
    // 0x218dd4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_218dd8:
    // 0x218dd8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x218dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_218ddc:
    // 0x218ddc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x218ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218de0:
    // 0x218de0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x218de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_218de4:
    // 0x218de4: 0xc04c564  jal         func_131590
label_218de8:
    if (ctx->pc == 0x218DE8u) {
        ctx->pc = 0x218DE8u;
            // 0x218de8: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218DECu;
        goto label_218dec;
    }
    ctx->pc = 0x218DE4u;
    SET_GPR_U32(ctx, 31, 0x218DECu);
    ctx->pc = 0x218DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DE4u;
            // 0x218de8: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DECu; }
        if (ctx->pc != 0x218DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DECu; }
        if (ctx->pc != 0x218DECu) { return; }
    }
    ctx->pc = 0x218DECu;
label_218dec:
    // 0x218dec: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218df0:
    // 0x218df0: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x218df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_218df4:
    // 0x218df4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_218df8:
    // 0x218df8: 0x320f809  jalr        $t9
label_218dfc:
    if (ctx->pc == 0x218DFCu) {
        ctx->pc = 0x218DFCu;
            // 0x218dfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218E00u;
        goto label_218e00;
    }
    ctx->pc = 0x218DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x218E00u);
        ctx->pc = 0x218DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218DF8u;
            // 0x218dfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218E00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218E00u; }
            if (ctx->pc != 0x218E00u) { return; }
        }
        }
    }
    ctx->pc = 0x218E00u;
label_218e00:
    // 0x218e00: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218e04:
    // 0x218e04: 0xc085800  jal         func_216000
label_218e08:
    if (ctx->pc == 0x218E08u) {
        ctx->pc = 0x218E08u;
            // 0x218e08: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218E0Cu;
        goto label_218e0c;
    }
    ctx->pc = 0x218E04u;
    SET_GPR_U32(ctx, 31, 0x218E0Cu);
    ctx->pc = 0x218E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E04u;
            // 0x218e08: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (runtime->hasFunction(0x216000u)) {
        auto targetFn = runtime->lookupFunction(0x216000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E0Cu; }
        if (ctx->pc != 0x218E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CAquariumFv_0x216000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E0Cu; }
        if (ctx->pc != 0x218E0Cu) { return; }
    }
    ctx->pc = 0x218E0Cu;
label_218e0c:
    // 0x218e0c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_218e10:
    if (ctx->pc == 0x218E10u) {
        ctx->pc = 0x218E14u;
        goto label_218e14;
    }
    ctx->pc = 0x218E0Cu;
    {
        const bool branch_taken_0x218e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e0c) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218E14u;
label_218e14:
    // 0x218e14: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218e18:
    // 0x218e18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x218e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218e1c:
    // 0x218e1c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x218e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_218e20:
    // 0x218e20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x218e20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_218e24:
    // 0x218e24: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x218e24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_218e28:
    // 0x218e28: 0xc05f610  jal         func_17D840
label_218e2c:
    if (ctx->pc == 0x218E2Cu) {
        ctx->pc = 0x218E2Cu;
            // 0x218e2c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218E30u;
        goto label_218e30;
    }
    ctx->pc = 0x218E28u;
    SET_GPR_U32(ctx, 31, 0x218E30u);
    ctx->pc = 0x218E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E28u;
            // 0x218e2c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E30u; }
        if (ctx->pc != 0x218E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E30u; }
        if (ctx->pc != 0x218E30u) { return; }
    }
    ctx->pc = 0x218E30u;
label_218e30:
    // 0x218e30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x218e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218e34:
    // 0x218e34: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218e38:
    // 0x218e38: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x218e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_218e3c:
    // 0x218e3c: 0xaf8291b4  sw          $v0, -0x6E4C($gp)
    ctx->pc = 0x218e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
label_218e40:
    // 0x218e40: 0xc052c70  jal         func_14B1C0
label_218e44:
    if (ctx->pc == 0x218E44u) {
        ctx->pc = 0x218E44u;
            // 0x218e44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218E48u;
        goto label_218e48;
    }
    ctx->pc = 0x218E40u;
    SET_GPR_U32(ctx, 31, 0x218E48u);
    ctx->pc = 0x218E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E40u;
            // 0x218e44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1C0u;
    if (runtime->hasFunction(0x14B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E48u; }
        if (ctx->pc != 0x218E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyLock__8CGamePadFi_0x14b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E48u; }
        if (ctx->pc != 0x218E48u) { return; }
    }
    ctx->pc = 0x218E48u;
label_218e48:
    // 0x218e48: 0x1000006f  b           . + 4 + (0x6F << 2)
label_218e4c:
    if (ctx->pc == 0x218E4Cu) {
        ctx->pc = 0x218E50u;
        goto label_218e50;
    }
    ctx->pc = 0x218E48u;
    {
        const bool branch_taken_0x218e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e48) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218E50u;
label_218e50:
    // 0x218e50: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218e54:
    // 0x218e54: 0xc085800  jal         func_216000
label_218e58:
    if (ctx->pc == 0x218E58u) {
        ctx->pc = 0x218E58u;
            // 0x218e58: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218E5Cu;
        goto label_218e5c;
    }
    ctx->pc = 0x218E54u;
    SET_GPR_U32(ctx, 31, 0x218E5Cu);
    ctx->pc = 0x218E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E54u;
            // 0x218e58: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (runtime->hasFunction(0x216000u)) {
        auto targetFn = runtime->lookupFunction(0x216000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E5Cu; }
        if (ctx->pc != 0x218E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CAquariumFv_0x216000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E5Cu; }
        if (ctx->pc != 0x218E5Cu) { return; }
    }
    ctx->pc = 0x218E5Cu;
label_218e5c:
    // 0x218e5c: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218e60:
    // 0x218e60: 0xc05f65c  jal         func_17D970
label_218e64:
    if (ctx->pc == 0x218E64u) {
        ctx->pc = 0x218E64u;
            // 0x218e64: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218E68u;
        goto label_218e68;
    }
    ctx->pc = 0x218E60u;
    SET_GPR_U32(ctx, 31, 0x218E68u);
    ctx->pc = 0x218E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E60u;
            // 0x218e64: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E68u; }
        if (ctx->pc != 0x218E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E68u; }
        if (ctx->pc != 0x218E68u) { return; }
    }
    ctx->pc = 0x218E68u;
label_218e68:
    // 0x218e68: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_218e6c:
    if (ctx->pc == 0x218E6Cu) {
        ctx->pc = 0x218E6Cu;
            // 0x218e6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x218E70u;
        goto label_218e70;
    }
    ctx->pc = 0x218E68u;
    {
        const bool branch_taken_0x218e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218E68u;
            // 0x218e6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e68) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218E70u;
label_218e70:
    // 0x218e70: 0xaf8291b4  sw          $v0, -0x6E4C($gp)
    ctx->pc = 0x218e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
label_218e74:
    // 0x218e74: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218e78:
    // 0x218e78: 0xc084a88  jal         func_212A20
label_218e7c:
    if (ctx->pc == 0x218E7Cu) {
        ctx->pc = 0x218E7Cu;
            // 0x218e7c: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218E80u;
        goto label_218e80;
    }
    ctx->pc = 0x218E78u;
    SET_GPR_U32(ctx, 31, 0x218E80u);
    ctx->pc = 0x218E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E78u;
            // 0x218e7c: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    if (runtime->hasFunction(0x212A20u)) {
        auto targetFn = runtime->lookupFunction(0x212A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E80u; }
        if (ctx->pc != 0x218E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CAquariumFv_0x212a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E80u; }
        if (ctx->pc != 0x218E80u) { return; }
    }
    ctx->pc = 0x218E80u;
label_218e80:
    // 0x218e80: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218e84:
    // 0x218e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218e88:
    // 0x218e88: 0xc052c70  jal         func_14B1C0
label_218e8c:
    if (ctx->pc == 0x218E8Cu) {
        ctx->pc = 0x218E8Cu;
            // 0x218e8c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218E90u;
        goto label_218e90;
    }
    ctx->pc = 0x218E88u;
    SET_GPR_U32(ctx, 31, 0x218E90u);
    ctx->pc = 0x218E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E88u;
            // 0x218e8c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1C0u;
    if (runtime->hasFunction(0x14B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E90u; }
        if (ctx->pc != 0x218E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyLock__8CGamePadFi_0x14b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E90u; }
        if (ctx->pc != 0x218E90u) { return; }
    }
    ctx->pc = 0x218E90u;
label_218e90:
    // 0x218e90: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218e94:
    // 0x218e94: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x218e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_218e98:
    // 0x218e98: 0xc052d44  jal         func_14B510
label_218e9c:
    if (ctx->pc == 0x218E9Cu) {
        ctx->pc = 0x218E9Cu;
            // 0x218e9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218EA0u;
        goto label_218ea0;
    }
    ctx->pc = 0x218E98u;
    SET_GPR_U32(ctx, 31, 0x218EA0u);
    ctx->pc = 0x218E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E98u;
            // 0x218e9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EA0u; }
        if (ctx->pc != 0x218EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EA0u; }
        if (ctx->pc != 0x218EA0u) { return; }
    }
    ctx->pc = 0x218EA0u;
label_218ea0:
    // 0x218ea0: 0x8f8291cc  lw          $v0, -0x6E34($gp)
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_218ea4:
    // 0x218ea4: 0xc050e40  jal         func_143900
label_218ea8:
    if (ctx->pc == 0x218EA8u) {
        ctx->pc = 0x218EA8u;
            // 0x218ea8: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->pc = 0x218EACu;
        goto label_218eac;
    }
    ctx->pc = 0x218EA4u;
    SET_GPR_U32(ctx, 31, 0x218EACu);
    ctx->pc = 0x218EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EA4u;
            // 0x218ea8: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EACu; }
        if (ctx->pc != 0x218EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EACu; }
        if (ctx->pc != 0x218EACu) { return; }
    }
    ctx->pc = 0x218EACu;
label_218eac:
    // 0x218eac: 0x8f8291cc  lw          $v0, -0x6E34($gp)
    ctx->pc = 0x218eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_218eb0:
    // 0x218eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218eb4:
    // 0x218eb4: 0xc050e04  jal         func_143810
label_218eb8:
    if (ctx->pc == 0x218EB8u) {
        ctx->pc = 0x218EB8u;
            // 0x218eb8: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x218EBCu;
        goto label_218ebc;
    }
    ctx->pc = 0x218EB4u;
    SET_GPR_U32(ctx, 31, 0x218EBCu);
    ctx->pc = 0x218EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EB4u;
            // 0x218eb8: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143810u;
    if (runtime->hasFunction(0x143810u)) {
        auto targetFn = runtime->lookupFunction(0x143810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EBCu; }
        if (ctx->pc != 0x218EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiP13mgPOINT_LIGHT_0x143810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EBCu; }
        if (ctx->pc != 0x218EBCu) { return; }
    }
    ctx->pc = 0x218EBCu;
label_218ebc:
    // 0x218ebc: 0x8f8491cc  lw          $a0, -0x6E34($gp)
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_218ec0:
    // 0x218ec0: 0xc050dd0  jal         func_143740
label_218ec4:
    if (ctx->pc == 0x218EC4u) {
        ctx->pc = 0x218EC4u;
            // 0x218ec4: 0x24850040  addiu       $a1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x218EC8u;
        goto label_218ec8;
    }
    ctx->pc = 0x218EC0u;
    SET_GPR_U32(ctx, 31, 0x218EC8u);
    ctx->pc = 0x218EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EC0u;
            // 0x218ec4: 0x24850040  addiu       $a1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EC8u; }
        if (ctx->pc != 0x218EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EC8u; }
        if (ctx->pc != 0x218EC8u) { return; }
    }
    ctx->pc = 0x218EC8u;
label_218ec8:
    // 0x218ec8: 0xc0942d4  jal         func_250B50
label_218ecc:
    if (ctx->pc == 0x218ECCu) {
        ctx->pc = 0x218ED0u;
        goto label_218ed0;
    }
    ctx->pc = 0x218EC8u;
    SET_GPR_U32(ctx, 31, 0x218ED0u);
    ctx->pc = 0x250B50u;
    if (runtime->hasFunction(0x250B50u)) {
        auto targetFn = runtime->lookupFunction(0x250B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218ED0u; }
        if (ctx->pc != 0x218ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReStartEnvSoundMenu__Fv_0x250b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218ED0u; }
        if (ctx->pc != 0x218ED0u) { return; }
    }
    ctx->pc = 0x218ED0u;
label_218ed0:
    // 0x218ed0: 0xc78c9224  lwc1        $f12, -0x6DDC($gp)
    ctx->pc = 0x218ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_218ed4:
    // 0x218ed4: 0xc0a98e8  jal         func_2A63A0
label_218ed8:
    if (ctx->pc == 0x218ED8u) {
        ctx->pc = 0x218ED8u;
            // 0x218ed8: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->pc = 0x218EDCu;
        goto label_218edc;
    }
    ctx->pc = 0x218ED4u;
    SET_GPR_U32(ctx, 31, 0x218EDCu);
    ctx->pc = 0x218ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218ED4u;
            // 0x218ed8: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EDCu; }
        if (ctx->pc != 0x218EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EDCu; }
        if (ctx->pc != 0x218EDCu) { return; }
    }
    ctx->pc = 0x218EDCu;
label_218edc:
    // 0x218edc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_218ee0:
    if (ctx->pc == 0x218EE0u) {
        ctx->pc = 0x218EE0u;
            // 0x218ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218EE4u;
        goto label_218ee4;
    }
    ctx->pc = 0x218EDCu;
    {
        const bool branch_taken_0x218edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218EDCu;
            // 0x218ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218edc) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218EE4u;
label_218ee4:
    // 0x218ee4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218ee8:
    // 0x218ee8: 0xc085800  jal         func_216000
label_218eec:
    if (ctx->pc == 0x218EECu) {
        ctx->pc = 0x218EECu;
            // 0x218eec: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218EF0u;
        goto label_218ef0;
    }
    ctx->pc = 0x218EE8u;
    SET_GPR_U32(ctx, 31, 0x218EF0u);
    ctx->pc = 0x218EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EE8u;
            // 0x218eec: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (runtime->hasFunction(0x216000u)) {
        auto targetFn = runtime->lookupFunction(0x216000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EF0u; }
        if (ctx->pc != 0x218EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CAquariumFv_0x216000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EF0u; }
        if (ctx->pc != 0x218EF0u) { return; }
    }
    ctx->pc = 0x218EF0u;
label_218ef0:
    // 0x218ef0: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218ef4:
    // 0x218ef4: 0xc05f65c  jal         func_17D970
label_218ef8:
    if (ctx->pc == 0x218EF8u) {
        ctx->pc = 0x218EF8u;
            // 0x218ef8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218EFCu;
        goto label_218efc;
    }
    ctx->pc = 0x218EF4u;
    SET_GPR_U32(ctx, 31, 0x218EFCu);
    ctx->pc = 0x218EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218EF4u;
            // 0x218ef8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EFCu; }
        if (ctx->pc != 0x218EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EFCu; }
        if (ctx->pc != 0x218EFCu) { return; }
    }
    ctx->pc = 0x218EFCu;
label_218efc:
    // 0x218efc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_218f00:
    if (ctx->pc == 0x218F00u) {
        ctx->pc = 0x218F04u;
        goto label_218f04;
    }
    ctx->pc = 0x218EFCu;
    {
        const bool branch_taken_0x218efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218efc) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218F04u;
label_218f04:
    // 0x218f04: 0x87838270  lh          $v1, -0x7D90($gp)
    ctx->pc = 0x218f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935152)));
label_218f08:
    // 0x218f08: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218f0c:
    // 0x218f0c: 0x8f82920c  lw          $v0, -0x6DF4($gp)
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_218f10:
    // 0x218f10: 0x2484c530  addiu       $a0, $a0, -0x3AD0
    ctx->pc = 0x218f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
label_218f14:
    // 0x218f14: 0xc084dc4  jal         func_213710
label_218f18:
    if (ctx->pc == 0x218F18u) {
        ctx->pc = 0x218F18u;
            // 0x218f18: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x218F1Cu;
        goto label_218f1c;
    }
    ctx->pc = 0x218F14u;
    SET_GPR_U32(ctx, 31, 0x218F1Cu);
    ctx->pc = 0x218F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F14u;
            // 0x218f18: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213710u;
    if (runtime->hasFunction(0x213710u)) {
        auto targetFn = runtime->lookupFunction(0x213710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F1Cu; }
        if (ctx->pc != 0x218F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SettingAqua__9CAquariumFv_0x213710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F1Cu; }
        if (ctx->pc != 0x218F1Cu) { return; }
    }
    ctx->pc = 0x218F1Cu;
label_218f1c:
    // 0x218f1c: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218f20:
    // 0x218f20: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x218f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_218f24:
    // 0x218f24: 0xc05f5fc  jal         func_17D7F0
label_218f28:
    if (ctx->pc == 0x218F28u) {
        ctx->pc = 0x218F28u;
            // 0x218f28: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218F2Cu;
        goto label_218f2c;
    }
    ctx->pc = 0x218F24u;
    SET_GPR_U32(ctx, 31, 0x218F2Cu);
    ctx->pc = 0x218F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F24u;
            // 0x218f28: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F2Cu; }
        if (ctx->pc != 0x218F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F2Cu; }
        if (ctx->pc != 0x218F2Cu) { return; }
    }
    ctx->pc = 0x218F2Cu;
label_218f2c:
    // 0x218f2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_218f30:
    // 0x218f30: 0x10000035  b           . + 4 + (0x35 << 2)
label_218f34:
    if (ctx->pc == 0x218F34u) {
        ctx->pc = 0x218F34u;
            // 0x218f34: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->pc = 0x218F38u;
        goto label_218f38;
    }
    ctx->pc = 0x218F30u;
    {
        const bool branch_taken_0x218f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F30u;
            // 0x218f34: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f30) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218F38u;
label_218f38:
    // 0x218f38: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218f3c:
    // 0x218f3c: 0xc085800  jal         func_216000
label_218f40:
    if (ctx->pc == 0x218F40u) {
        ctx->pc = 0x218F40u;
            // 0x218f40: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218F44u;
        goto label_218f44;
    }
    ctx->pc = 0x218F3Cu;
    SET_GPR_U32(ctx, 31, 0x218F44u);
    ctx->pc = 0x218F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F3Cu;
            // 0x218f40: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (runtime->hasFunction(0x216000u)) {
        auto targetFn = runtime->lookupFunction(0x216000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F44u; }
        if (ctx->pc != 0x218F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CAquariumFv_0x216000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F44u; }
        if (ctx->pc != 0x218F44u) { return; }
    }
    ctx->pc = 0x218F44u;
label_218f44:
    // 0x218f44: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218f48:
    // 0x218f48: 0xc05f65c  jal         func_17D970
label_218f4c:
    if (ctx->pc == 0x218F4Cu) {
        ctx->pc = 0x218F4Cu;
            // 0x218f4c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218F50u;
        goto label_218f50;
    }
    ctx->pc = 0x218F48u;
    SET_GPR_U32(ctx, 31, 0x218F50u);
    ctx->pc = 0x218F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F48u;
            // 0x218f4c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F50u; }
        if (ctx->pc != 0x218F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F50u; }
        if (ctx->pc != 0x218F50u) { return; }
    }
    ctx->pc = 0x218F50u;
label_218f50:
    // 0x218f50: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_218f54:
    if (ctx->pc == 0x218F54u) {
        ctx->pc = 0x218F54u;
            // 0x218f54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x218F58u;
        goto label_218f58;
    }
    ctx->pc = 0x218F50u;
    {
        const bool branch_taken_0x218f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F50u;
            // 0x218f54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f50) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218F58u;
label_218f58:
    // 0x218f58: 0x1000002b  b           . + 4 + (0x2B << 2)
label_218f5c:
    if (ctx->pc == 0x218F5Cu) {
        ctx->pc = 0x218F5Cu;
            // 0x218f5c: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->pc = 0x218F60u;
        goto label_218f60;
    }
    ctx->pc = 0x218F58u;
    {
        const bool branch_taken_0x218f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F58u;
            // 0x218f5c: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f58) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218F60u;
label_218f60:
    // 0x218f60: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218f64:
    // 0x218f64: 0xc085800  jal         func_216000
label_218f68:
    if (ctx->pc == 0x218F68u) {
        ctx->pc = 0x218F68u;
            // 0x218f68: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218F6Cu;
        goto label_218f6c;
    }
    ctx->pc = 0x218F64u;
    SET_GPR_U32(ctx, 31, 0x218F6Cu);
    ctx->pc = 0x218F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F64u;
            // 0x218f68: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (runtime->hasFunction(0x216000u)) {
        auto targetFn = runtime->lookupFunction(0x216000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F6Cu; }
        if (ctx->pc != 0x218F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CAquariumFv_0x216000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F6Cu; }
        if (ctx->pc != 0x218F6Cu) { return; }
    }
    ctx->pc = 0x218F6Cu;
label_218f6c:
    // 0x218f6c: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218f70:
    // 0x218f70: 0xc05f65c  jal         func_17D970
label_218f74:
    if (ctx->pc == 0x218F74u) {
        ctx->pc = 0x218F74u;
            // 0x218f74: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218F78u;
        goto label_218f78;
    }
    ctx->pc = 0x218F70u;
    SET_GPR_U32(ctx, 31, 0x218F78u);
    ctx->pc = 0x218F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F70u;
            // 0x218f74: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F78u; }
        if (ctx->pc != 0x218F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F78u; }
        if (ctx->pc != 0x218F78u) { return; }
    }
    ctx->pc = 0x218F78u;
label_218f78:
    // 0x218f78: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_218f7c:
    if (ctx->pc == 0x218F7Cu) {
        ctx->pc = 0x218F7Cu;
            // 0x218f7c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x218F80u;
        goto label_218f80;
    }
    ctx->pc = 0x218F78u;
    {
        const bool branch_taken_0x218f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F78u;
            // 0x218f7c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f78) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218F80u;
label_218f80:
    // 0x218f80: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_218f84:
    // 0x218f84: 0xc052d44  jal         func_14B510
label_218f88:
    if (ctx->pc == 0x218F88u) {
        ctx->pc = 0x218F88u;
            // 0x218f88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x218F8Cu;
        goto label_218f8c;
    }
    ctx->pc = 0x218F84u;
    SET_GPR_U32(ctx, 31, 0x218F8Cu);
    ctx->pc = 0x218F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F84u;
            // 0x218f88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F8Cu; }
        if (ctx->pc != 0x218F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F8Cu; }
        if (ctx->pc != 0x218F8Cu) { return; }
    }
    ctx->pc = 0x218F8Cu;
label_218f8c:
    // 0x218f8c: 0xc08cb30  jal         func_232CC0
label_218f90:
    if (ctx->pc == 0x218F90u) {
        ctx->pc = 0x218F90u;
            // 0x218f90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218F94u;
        goto label_218f94;
    }
    ctx->pc = 0x218F8Cu;
    SET_GPR_U32(ctx, 31, 0x218F94u);
    ctx->pc = 0x218F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218F8Cu;
            // 0x218f90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F94u; }
        if (ctx->pc != 0x218F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F94u; }
        if (ctx->pc != 0x218F94u) { return; }
    }
    ctx->pc = 0x218F94u;
label_218f94:
    // 0x218f94: 0x8f8591b8  lw          $a1, -0x6E48($gp)
    ctx->pc = 0x218f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939064)));
label_218f98:
    // 0x218f98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_218f9c:
    // 0x218f9c: 0xac20c434  sw          $zero, -0x3BCC($at)
    ctx->pc = 0x218f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951988), GPR_U32(ctx, 0));
label_218fa0:
    // 0x218fa0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218fa4:
    // 0x218fa4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_218fa8:
    // 0x218fa8: 0x2484c410  addiu       $a0, $a0, -0x3BF0
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951952));
label_218fac:
    // 0x218fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218fb0:
    // 0x218fb0: 0xc0c2bdc  jal         func_30AF70
label_218fb4:
    if (ctx->pc == 0x218FB4u) {
        ctx->pc = 0x218FB4u;
            // 0x218fb4: 0xac20c42c  sw          $zero, -0x3BD4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294951980), GPR_U32(ctx, 0));
        ctx->pc = 0x218FB8u;
        goto label_218fb8;
    }
    ctx->pc = 0x218FB0u;
    SET_GPR_U32(ctx, 31, 0x218FB8u);
    ctx->pc = 0x218FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FB0u;
            // 0x218fb4: 0xac20c42c  sw          $zero, -0x3BD4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294951980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF70u;
    if (runtime->hasFunction(0x30AF70u)) {
        auto targetFn = runtime->lookupFunction(0x30AF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FB8u; }
        if (ctx->pc != 0x218FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistInit__FP9mgCMemoryPii_0x30af70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FB8u; }
        if (ctx->pc != 0x218FB8u) { return; }
    }
    ctx->pc = 0x218FB8u;
label_218fb8:
    // 0x218fb8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218fbc:
    // 0x218fbc: 0x10000012  b           . + 4 + (0x12 << 2)
label_218fc0:
    if (ctx->pc == 0x218FC0u) {
        ctx->pc = 0x218FC0u;
            // 0x218fc0: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->pc = 0x218FC4u;
        goto label_218fc4;
    }
    ctx->pc = 0x218FBCu;
    {
        const bool branch_taken_0x218fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FBCu;
            // 0x218fc0: 0xaf8291b4  sw          $v0, -0x6E4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fbc) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218FC4u;
label_218fc4:
    // 0x218fc4: 0xc0c2d3c  jal         func_30B4F0
label_218fc8:
    if (ctx->pc == 0x218FC8u) {
        ctx->pc = 0x218FCCu;
        goto label_218fcc;
    }
    ctx->pc = 0x218FC4u;
    SET_GPR_U32(ctx, 31, 0x218FCCu);
    ctx->pc = 0x30B4F0u;
    if (runtime->hasFunction(0x30B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x30B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FCCu; }
        if (ctx->pc != 0x218FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistKey__Fv_0x30b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FCCu; }
        if (ctx->pc != 0x218FCCu) { return; }
    }
    ctx->pc = 0x218FCCu;
label_218fcc:
    // 0x218fcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_218fd0:
    if (ctx->pc == 0x218FD0u) {
        ctx->pc = 0x218FD0u;
            // 0x218fd0: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x218FD4u;
        goto label_218fd4;
    }
    ctx->pc = 0x218FCCu;
    {
        const bool branch_taken_0x218fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FCCu;
            // 0x218fd0: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218fcc) {
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218FD4u;
label_218fd4:
    // 0x218fd4: 0xc084dc4  jal         func_213710
label_218fd8:
    if (ctx->pc == 0x218FD8u) {
        ctx->pc = 0x218FD8u;
            // 0x218fd8: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218FDCu;
        goto label_218fdc;
    }
    ctx->pc = 0x218FD4u;
    SET_GPR_U32(ctx, 31, 0x218FDCu);
    ctx->pc = 0x218FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FD4u;
            // 0x218fd8: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213710u;
    if (runtime->hasFunction(0x213710u)) {
        auto targetFn = runtime->lookupFunction(0x213710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FDCu; }
        if (ctx->pc != 0x218FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SettingAqua__9CAquariumFv_0x213710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FDCu; }
        if (ctx->pc != 0x218FDCu) { return; }
    }
    ctx->pc = 0x218FDCu;
label_218fdc:
    // 0x218fdc: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218fe0:
    // 0x218fe0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_218fe4:
    // 0x218fe4: 0xc05f5fc  jal         func_17D7F0
label_218fe8:
    if (ctx->pc == 0x218FE8u) {
        ctx->pc = 0x218FE8u;
            // 0x218fe8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218FECu;
        goto label_218fec;
    }
    ctx->pc = 0x218FE4u;
    SET_GPR_U32(ctx, 31, 0x218FECu);
    ctx->pc = 0x218FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FE4u;
            // 0x218fe8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FECu; }
        if (ctx->pc != 0x218FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FECu; }
        if (ctx->pc != 0x218FECu) { return; }
    }
    ctx->pc = 0x218FECu;
label_218fec:
    // 0x218fec: 0xc08cb30  jal         func_232CC0
label_218ff0:
    if (ctx->pc == 0x218FF0u) {
        ctx->pc = 0x218FF0u;
            // 0x218ff0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x218FF4u;
        goto label_218ff4;
    }
    ctx->pc = 0x218FECu;
    SET_GPR_U32(ctx, 31, 0x218FF4u);
    ctx->pc = 0x218FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FECu;
            // 0x218ff0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FF4u; }
        if (ctx->pc != 0x218FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FF4u; }
        if (ctx->pc != 0x218FF4u) { return; }
    }
    ctx->pc = 0x218FF4u;
label_218ff4:
    // 0x218ff4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x218ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_218ff8:
    // 0x218ff8: 0xc052d48  jal         func_14B520
label_218ffc:
    if (ctx->pc == 0x218FFCu) {
        ctx->pc = 0x218FFCu;
            // 0x218ffc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x219000u;
        goto label_219000;
    }
    ctx->pc = 0x218FF8u;
    SET_GPR_U32(ctx, 31, 0x219000u);
    ctx->pc = 0x218FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FF8u;
            // 0x218ffc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219000u; }
        if (ctx->pc != 0x219000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219000u; }
        if (ctx->pc != 0x219000u) { return; }
    }
    ctx->pc = 0x219000u;
label_219000:
    // 0x219000: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x219000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_219004:
    // 0x219004: 0xaf8291b4  sw          $v0, -0x6E4C($gp)
    ctx->pc = 0x219004u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
label_219008:
    // 0x219008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21900c:
    // 0x21900c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21900cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_219010:
    // 0x219010: 0x3e00008  jr          $ra
label_219014:
    if (ctx->pc == 0x219014u) {
        ctx->pc = 0x219014u;
            // 0x219014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x219018u;
        goto label_fallthrough_0x219010;
    }
    ctx->pc = 0x219010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219010u;
            // 0x219014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x219010:
    ctx->pc = 0x219018u;
}
