#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextRootNormal__9CAquaFishFv
// Address: 0x20db80 - 0x20de00
void NextRootNormal__9CAquaFishFv_0x20db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextRootNormal__9CAquaFishFv_0x20db80");
#endif

    switch (ctx->pc) {
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        case 0x20db98u: goto label_20db98;
        case 0x20db9cu: goto label_20db9c;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dba4u: goto label_20dba4;
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb0u: goto label_20dbb0;
        case 0x20dbb4u: goto label_20dbb4;
        case 0x20dbb8u: goto label_20dbb8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbc0u: goto label_20dbc0;
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbc8u: goto label_20dbc8;
        case 0x20dbccu: goto label_20dbcc;
        case 0x20dbd0u: goto label_20dbd0;
        case 0x20dbd4u: goto label_20dbd4;
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dbdcu: goto label_20dbdc;
        case 0x20dbe0u: goto label_20dbe0;
        case 0x20dbe4u: goto label_20dbe4;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dbecu: goto label_20dbec;
        case 0x20dbf0u: goto label_20dbf0;
        case 0x20dbf4u: goto label_20dbf4;
        case 0x20dbf8u: goto label_20dbf8;
        case 0x20dbfcu: goto label_20dbfc;
        case 0x20dc00u: goto label_20dc00;
        case 0x20dc04u: goto label_20dc04;
        case 0x20dc08u: goto label_20dc08;
        case 0x20dc0cu: goto label_20dc0c;
        case 0x20dc10u: goto label_20dc10;
        case 0x20dc14u: goto label_20dc14;
        case 0x20dc18u: goto label_20dc18;
        case 0x20dc1cu: goto label_20dc1c;
        case 0x20dc20u: goto label_20dc20;
        case 0x20dc24u: goto label_20dc24;
        case 0x20dc28u: goto label_20dc28;
        case 0x20dc2cu: goto label_20dc2c;
        case 0x20dc30u: goto label_20dc30;
        case 0x20dc34u: goto label_20dc34;
        case 0x20dc38u: goto label_20dc38;
        case 0x20dc3cu: goto label_20dc3c;
        case 0x20dc40u: goto label_20dc40;
        case 0x20dc44u: goto label_20dc44;
        case 0x20dc48u: goto label_20dc48;
        case 0x20dc4cu: goto label_20dc4c;
        case 0x20dc50u: goto label_20dc50;
        case 0x20dc54u: goto label_20dc54;
        case 0x20dc58u: goto label_20dc58;
        case 0x20dc5cu: goto label_20dc5c;
        case 0x20dc60u: goto label_20dc60;
        case 0x20dc64u: goto label_20dc64;
        case 0x20dc68u: goto label_20dc68;
        case 0x20dc6cu: goto label_20dc6c;
        case 0x20dc70u: goto label_20dc70;
        case 0x20dc74u: goto label_20dc74;
        case 0x20dc78u: goto label_20dc78;
        case 0x20dc7cu: goto label_20dc7c;
        case 0x20dc80u: goto label_20dc80;
        case 0x20dc84u: goto label_20dc84;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dc90u: goto label_20dc90;
        case 0x20dc94u: goto label_20dc94;
        case 0x20dc98u: goto label_20dc98;
        case 0x20dc9cu: goto label_20dc9c;
        case 0x20dca0u: goto label_20dca0;
        case 0x20dca4u: goto label_20dca4;
        case 0x20dca8u: goto label_20dca8;
        case 0x20dcacu: goto label_20dcac;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dcb4u: goto label_20dcb4;
        case 0x20dcb8u: goto label_20dcb8;
        case 0x20dcbcu: goto label_20dcbc;
        case 0x20dcc0u: goto label_20dcc0;
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcc8u: goto label_20dcc8;
        case 0x20dcccu: goto label_20dccc;
        case 0x20dcd0u: goto label_20dcd0;
        case 0x20dcd4u: goto label_20dcd4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dce0u: goto label_20dce0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dcecu: goto label_20dcec;
        case 0x20dcf0u: goto label_20dcf0;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dcf8u: goto label_20dcf8;
        case 0x20dcfcu: goto label_20dcfc;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd08u: goto label_20dd08;
        case 0x20dd0cu: goto label_20dd0c;
        case 0x20dd10u: goto label_20dd10;
        case 0x20dd14u: goto label_20dd14;
        case 0x20dd18u: goto label_20dd18;
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd20u: goto label_20dd20;
        case 0x20dd24u: goto label_20dd24;
        case 0x20dd28u: goto label_20dd28;
        case 0x20dd2cu: goto label_20dd2c;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd34u: goto label_20dd34;
        case 0x20dd38u: goto label_20dd38;
        case 0x20dd3cu: goto label_20dd3c;
        case 0x20dd40u: goto label_20dd40;
        case 0x20dd44u: goto label_20dd44;
        case 0x20dd48u: goto label_20dd48;
        case 0x20dd4cu: goto label_20dd4c;
        case 0x20dd50u: goto label_20dd50;
        case 0x20dd54u: goto label_20dd54;
        case 0x20dd58u: goto label_20dd58;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20dd60u: goto label_20dd60;
        case 0x20dd64u: goto label_20dd64;
        case 0x20dd68u: goto label_20dd68;
        case 0x20dd6cu: goto label_20dd6c;
        case 0x20dd70u: goto label_20dd70;
        case 0x20dd74u: goto label_20dd74;
        case 0x20dd78u: goto label_20dd78;
        case 0x20dd7cu: goto label_20dd7c;
        case 0x20dd80u: goto label_20dd80;
        case 0x20dd84u: goto label_20dd84;
        case 0x20dd88u: goto label_20dd88;
        case 0x20dd8cu: goto label_20dd8c;
        case 0x20dd90u: goto label_20dd90;
        case 0x20dd94u: goto label_20dd94;
        case 0x20dd98u: goto label_20dd98;
        case 0x20dd9cu: goto label_20dd9c;
        case 0x20dda0u: goto label_20dda0;
        case 0x20dda4u: goto label_20dda4;
        case 0x20dda8u: goto label_20dda8;
        case 0x20ddacu: goto label_20ddac;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20ddb4u: goto label_20ddb4;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20ddc0u: goto label_20ddc0;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddc8u: goto label_20ddc8;
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddd0u: goto label_20ddd0;
        case 0x20ddd4u: goto label_20ddd4;
        case 0x20ddd8u: goto label_20ddd8;
        case 0x20dddcu: goto label_20dddc;
        case 0x20dde0u: goto label_20dde0;
        case 0x20dde4u: goto label_20dde4;
        case 0x20dde8u: goto label_20dde8;
        case 0x20ddecu: goto label_20ddec;
        case 0x20ddf0u: goto label_20ddf0;
        case 0x20ddf4u: goto label_20ddf4;
        case 0x20ddf8u: goto label_20ddf8;
        case 0x20ddfcu: goto label_20ddfc;
        default: break;
    }

    ctx->pc = 0x20db80u;

label_20db80:
    // 0x20db80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_20db84:
    // 0x20db84: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_20db88:
    // 0x20db88: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x20db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_20db8c:
    // 0x20db8c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_20db90:
    // 0x20db90: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20db94:
    // 0x20db94: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20db98:
    // 0x20db98: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x20db98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20db9c:
    // 0x20db9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20dba0:
    // 0x20dba0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20dba4:
    // 0x20dba4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20dba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20dba8:
    // 0x20dba8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20dbac:
    // 0x20dbac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20dbb0:
    // 0x20dbb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20dbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20dbb4:
    // 0x20dbb4: 0xc0941b0  jal         func_2506C0
label_20dbb8:
    if (ctx->pc == 0x20DBB8u) {
        ctx->pc = 0x20DBB8u;
            // 0x20dbb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x20DBBCu;
        goto label_20dbbc;
    }
    ctx->pc = 0x20DBB4u;
    SET_GPR_U32(ctx, 31, 0x20DBBCu);
    ctx->pc = 0x20DBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBB4u;
            // 0x20dbb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBBCu; }
        if (ctx->pc != 0x20DBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBBCu; }
        if (ctx->pc != 0x20DBBCu) { return; }
    }
    ctx->pc = 0x20DBBCu;
label_20dbbc:
    // 0x20dbbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20dbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dbc0:
    // 0x20dbc0: 0xc0941b0  jal         func_2506C0
label_20dbc4:
    if (ctx->pc == 0x20DBC4u) {
        ctx->pc = 0x20DBC4u;
            // 0x20dbc4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20DBC8u;
        goto label_20dbc8;
    }
    ctx->pc = 0x20DBC0u;
    SET_GPR_U32(ctx, 31, 0x20DBC8u);
    ctx->pc = 0x20DBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBC0u;
            // 0x20dbc4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBC8u; }
        if (ctx->pc != 0x20DBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBC8u; }
        if (ctx->pc != 0x20DBC8u) { return; }
    }
    ctx->pc = 0x20DBC8u;
label_20dbc8:
    // 0x20dbc8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x20dbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20dbcc:
    // 0x20dbcc: 0xc0941b0  jal         func_2506C0
label_20dbd0:
    if (ctx->pc == 0x20DBD0u) {
        ctx->pc = 0x20DBD0u;
            // 0x20dbd0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20DBD4u;
        goto label_20dbd4;
    }
    ctx->pc = 0x20DBCCu;
    SET_GPR_U32(ctx, 31, 0x20DBD4u);
    ctx->pc = 0x20DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBCCu;
            // 0x20dbd0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBD4u; }
        if (ctx->pc != 0x20DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBD4u; }
        if (ctx->pc != 0x20DBD4u) { return; }
    }
    ctx->pc = 0x20DBD4u;
label_20dbd4:
    // 0x20dbd4: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x20dbd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20dbd8:
    // 0x20dbd8: 0xc0941b0  jal         func_2506C0
label_20dbdc:
    if (ctx->pc == 0x20DBDCu) {
        ctx->pc = 0x20DBDCu;
            // 0x20dbdc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x20DBE0u;
        goto label_20dbe0;
    }
    ctx->pc = 0x20DBD8u;
    SET_GPR_U32(ctx, 31, 0x20DBE0u);
    ctx->pc = 0x20DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBD8u;
            // 0x20dbdc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBE0u; }
        if (ctx->pc != 0x20DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBE0u; }
        if (ctx->pc != 0x20DBE0u) { return; }
    }
    ctx->pc = 0x20DBE0u;
label_20dbe0:
    // 0x20dbe0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20dbe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dbe4:
    // 0x20dbe4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_20dbe8:
    // 0x20dbe8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20dbec:
    // 0x20dbec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20dbf0:
    // 0x20dbf0: 0xc0941c0  jal         func_250700
label_20dbf4:
    if (ctx->pc == 0x20DBF4u) {
        ctx->pc = 0x20DBF8u;
        goto label_20dbf8;
    }
    ctx->pc = 0x20DBF0u;
    SET_GPR_U32(ctx, 31, 0x20DBF8u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBF8u; }
        if (ctx->pc != 0x20DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBF8u; }
        if (ctx->pc != 0x20DBF8u) { return; }
    }
    ctx->pc = 0x20DBF8u;
label_20dbf8:
    // 0x20dbf8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x20dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_20dbfc:
    // 0x20dbfc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20dc00:
    // 0x20dc00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20dc04:
    // 0x20dc04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20dc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20dc08:
    // 0x20dc08: 0xc0941b0  jal         func_2506C0
label_20dc0c:
    if (ctx->pc == 0x20DC0Cu) {
        ctx->pc = 0x20DC0Cu;
            // 0x20dc0c: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x20DC10u;
        goto label_20dc10;
    }
    ctx->pc = 0x20DC08u;
    SET_GPR_U32(ctx, 31, 0x20DC10u);
    ctx->pc = 0x20DC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC08u;
            // 0x20dc0c: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC10u; }
        if (ctx->pc != 0x20DC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC10u; }
        if (ctx->pc != 0x20DC10u) { return; }
    }
    ctx->pc = 0x20DC10u;
label_20dc10:
    // 0x20dc10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20dc14:
    // 0x20dc14: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x20dc14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dc18:
    // 0x20dc18: 0xa6c20910  sh          $v0, 0x910($s6)
    ctx->pc = 0x20dc18u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2320), (uint16_t)GPR_U32(ctx, 2));
label_20dc1c:
    // 0x20dc1c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_20dc20:
    if (ctx->pc == 0x20DC20u) {
        ctx->pc = 0x20DC20u;
            // 0x20dc20: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DC24u;
        goto label_20dc24;
    }
    ctx->pc = 0x20DC1Cu;
    {
        const bool branch_taken_0x20dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC1Cu;
            // 0x20dc20: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc1c) {
            ctx->pc = 0x20DD50u;
            goto label_20dd50;
        }
    }
    ctx->pc = 0x20DC24u;
label_20dc24:
    // 0x20dc24: 0xc083250  jal         func_20C940
label_20dc28:
    if (ctx->pc == 0x20DC28u) {
        ctx->pc = 0x20DC28u;
            // 0x20dc28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DC2Cu;
        goto label_20dc2c;
    }
    ctx->pc = 0x20DC24u;
    SET_GPR_U32(ctx, 31, 0x20DC2Cu);
    ctx->pc = 0x20DC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC24u;
            // 0x20dc28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C940u;
    if (runtime->hasFunction(0x20C940u)) {
        auto targetFn = runtime->lookupFunction(0x20C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC2Cu; }
        if (ctx->pc != 0x20DC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get_aquarium_paul_table_xz__Fii_0x20c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC2Cu; }
        if (ctx->pc != 0x20DC2Cu) { return; }
    }
    ctx->pc = 0x20DC2Cu;
label_20dc2c:
    // 0x20dc2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20dc2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dc30:
    // 0x20dc30: 0xc047a42  jal         func_11E908
label_20dc34:
    if (ctx->pc == 0x20DC34u) {
        ctx->pc = 0x20DC34u;
            // 0x20dc34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x20DC38u;
        goto label_20dc38;
    }
    ctx->pc = 0x20DC30u;
    SET_GPR_U32(ctx, 31, 0x20DC38u);
    ctx->pc = 0x20DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC30u;
            // 0x20dc34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC38u; }
        if (ctx->pc != 0x20DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC38u; }
        if (ctx->pc != 0x20DC38u) { return; }
    }
    ctx->pc = 0x20DC38u;
label_20dc38:
    // 0x20dc38: 0xc0941c0  jal         func_250700
label_20dc3c:
    if (ctx->pc == 0x20DC3Cu) {
        ctx->pc = 0x20DC3Cu;
            // 0x20dc3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20DC40u;
        goto label_20dc40;
    }
    ctx->pc = 0x20DC38u;
    SET_GPR_U32(ctx, 31, 0x20DC40u);
    ctx->pc = 0x20DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC38u;
            // 0x20dc3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC40u; }
        if (ctx->pc != 0x20DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC40u; }
        if (ctx->pc != 0x20DC40u) { return; }
    }
    ctx->pc = 0x20DC40u;
label_20dc40:
    // 0x20dc40: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20dc44:
    // 0x20dc44: 0x2d7a821  addu        $s5, $s6, $s7
    ctx->pc = 0x20dc44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_20dc48:
    // 0x20dc48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20dc48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20dc4c:
    // 0x20dc4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dc50:
    // 0x20dc50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20dc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20dc54:
    // 0x20dc54: 0xc047a42  jal         func_11E908
label_20dc58:
    if (ctx->pc == 0x20DC58u) {
        ctx->pc = 0x20DC58u;
            // 0x20dc58: 0xe6a00710  swc1        $f0, 0x710($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1808), bits); }
        ctx->pc = 0x20DC5Cu;
        goto label_20dc5c;
    }
    ctx->pc = 0x20DC54u;
    SET_GPR_U32(ctx, 31, 0x20DC5Cu);
    ctx->pc = 0x20DC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC54u;
            // 0x20dc58: 0xe6a00710  swc1        $f0, 0x710($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1808), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC5Cu; }
        if (ctx->pc != 0x20DC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC5Cu; }
        if (ctx->pc != 0x20DC5Cu) { return; }
    }
    ctx->pc = 0x20DC5Cu;
label_20dc5c:
    // 0x20dc5c: 0xc0941c0  jal         func_250700
label_20dc60:
    if (ctx->pc == 0x20DC60u) {
        ctx->pc = 0x20DC60u;
            // 0x20dc60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20DC64u;
        goto label_20dc64;
    }
    ctx->pc = 0x20DC5Cu;
    SET_GPR_U32(ctx, 31, 0x20DC64u);
    ctx->pc = 0x20DC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC5Cu;
            // 0x20dc60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC64u; }
        if (ctx->pc != 0x20DC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC64u; }
        if (ctx->pc != 0x20DC64u) { return; }
    }
    ctx->pc = 0x20DC64u;
label_20dc64:
    // 0x20dc64: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20dc68:
    // 0x20dc68: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x20dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20dc6c:
    // 0x20dc6c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dc70:
    // 0x20dc70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20dc70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20dc74:
    // 0x20dc74: 0xe6a00718  swc1        $f0, 0x718($s5)
    ctx->pc = 0x20dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1816), bits); }
label_20dc78:
    // 0x20dc78: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x20dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_20dc7c:
    // 0x20dc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dc80:
    // 0x20dc80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dc84:
    // 0x20dc84: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_20dc88:
    if (ctx->pc == 0x20DC88u) {
        ctx->pc = 0x20DC88u;
            // 0x20dc88: 0xe6a00714  swc1        $f0, 0x714($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1812), bits); }
        ctx->pc = 0x20DC8Cu;
        goto label_20dc8c;
    }
    ctx->pc = 0x20DC84u;
    {
        const bool branch_taken_0x20dc84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC84u;
            // 0x20dc88: 0xe6a00714  swc1        $f0, 0x714($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc84) {
            ctx->pc = 0x20DCBCu;
            goto label_20dcbc;
        }
    }
    ctx->pc = 0x20DC8Cu;
label_20dc8c:
    // 0x20dc8c: 0xc0941b0  jal         func_2506C0
label_20dc90:
    if (ctx->pc == 0x20DC90u) {
        ctx->pc = 0x20DC90u;
            // 0x20dc90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20DC94u;
        goto label_20dc94;
    }
    ctx->pc = 0x20DC8Cu;
    SET_GPR_U32(ctx, 31, 0x20DC94u);
    ctx->pc = 0x20DC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC8Cu;
            // 0x20dc90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC94u; }
        if (ctx->pc != 0x20DC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC94u; }
        if (ctx->pc != 0x20DC94u) { return; }
    }
    ctx->pc = 0x20DC94u;
label_20dc94:
    // 0x20dc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20dc98:
    // 0x20dc98: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x20dc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20dc9c:
    // 0x20dc9c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x20dc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_20dca0:
    // 0x20dca0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_20dca4:
    if (ctx->pc == 0x20DCA4u) {
        ctx->pc = 0x20DCA4u;
            // 0x20dca4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20DCA8u;
        goto label_20dca8;
    }
    ctx->pc = 0x20DCA0u;
    {
        const bool branch_taken_0x20dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCA0u;
            // 0x20dca4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dca0) {
            ctx->pc = 0x20DCF4u;
            goto label_20dcf4;
        }
    }
    ctx->pc = 0x20DCA8u;
label_20dca8:
    // 0x20dca8: 0xc0941b0  jal         func_2506C0
label_20dcac:
    if (ctx->pc == 0x20DCACu) {
        ctx->pc = 0x20DCACu;
            // 0x20dcac: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x20DCB0u;
        goto label_20dcb0;
    }
    ctx->pc = 0x20DCA8u;
    SET_GPR_U32(ctx, 31, 0x20DCB0u);
    ctx->pc = 0x20DCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCA8u;
            // 0x20dcac: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCB0u; }
        if (ctx->pc != 0x20DCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCB0u; }
        if (ctx->pc != 0x20DCB0u) { return; }
    }
    ctx->pc = 0x20DCB0u;
label_20dcb0:
    // 0x20dcb0: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_20dcb4:
    // 0x20dcb4: 0x1000000f  b           . + 4 + (0xF << 2)
label_20dcb8:
    if (ctx->pc == 0x20DCB8u) {
        ctx->pc = 0x20DCB8u;
            // 0x20dcb8: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x20DCBCu;
        goto label_20dcbc;
    }
    ctx->pc = 0x20DCB4u;
    {
        const bool branch_taken_0x20dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCB4u;
            // 0x20dcb8: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcb4) {
            ctx->pc = 0x20DCF4u;
            goto label_20dcf4;
        }
    }
    ctx->pc = 0x20DCBCu;
label_20dcbc:
    // 0x20dcbc: 0x0  nop
    ctx->pc = 0x20dcbcu;
    // NOP
label_20dcc0:
    // 0x20dcc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dcc4:
    // 0x20dcc4: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_20dcc8:
    if (ctx->pc == 0x20DCC8u) {
        ctx->pc = 0x20DCC8u;
            // 0x20dcc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20DCCCu;
        goto label_20dccc;
    }
    ctx->pc = 0x20DCC4u;
    {
        const bool branch_taken_0x20dcc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCC4u;
            // 0x20dcc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcc4) {
            ctx->pc = 0x20DCF4u;
            goto label_20dcf4;
        }
    }
    ctx->pc = 0x20DCCCu;
label_20dccc:
    // 0x20dccc: 0xc0941b0  jal         func_2506C0
label_20dcd0:
    if (ctx->pc == 0x20DCD0u) {
        ctx->pc = 0x20DCD4u;
        goto label_20dcd4;
    }
    ctx->pc = 0x20DCCCu;
    SET_GPR_U32(ctx, 31, 0x20DCD4u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCD4u; }
        if (ctx->pc != 0x20DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCD4u; }
        if (ctx->pc != 0x20DCD4u) { return; }
    }
    ctx->pc = 0x20DCD4u;
label_20dcd4:
    // 0x20dcd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20dcd8:
    // 0x20dcd8: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x20dcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20dcdc:
    // 0x20dcdc: 0x1e200005  bgtz        $s1, . + 4 + (0x5 << 2)
label_20dce0:
    if (ctx->pc == 0x20DCE0u) {
        ctx->pc = 0x20DCE0u;
            // 0x20dce0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20DCE4u;
        goto label_20dce4;
    }
    ctx->pc = 0x20DCDCu;
    {
        const bool branch_taken_0x20dcdc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x20DCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCDCu;
            // 0x20dce0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcdc) {
            ctx->pc = 0x20DCF4u;
            goto label_20dcf4;
        }
    }
    ctx->pc = 0x20DCE4u;
label_20dce4:
    // 0x20dce4: 0xc0941b0  jal         func_2506C0
label_20dce8:
    if (ctx->pc == 0x20DCE8u) {
        ctx->pc = 0x20DCE8u;
            // 0x20dce8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DCECu;
        goto label_20dcec;
    }
    ctx->pc = 0x20DCE4u;
    SET_GPR_U32(ctx, 31, 0x20DCECu);
    ctx->pc = 0x20DCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCE4u;
            // 0x20dce8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCECu; }
        if (ctx->pc != 0x20DCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCECu; }
        if (ctx->pc != 0x20DCECu) { return; }
    }
    ctx->pc = 0x20DCECu;
label_20dcec:
    // 0x20dcec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20dcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dcf0:
    // 0x20dcf0: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x20dcf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_20dcf4:
    // 0x20dcf4: 0x0  nop
    ctx->pc = 0x20dcf4u;
    // NOP
label_20dcf8:
    // 0x20dcf8: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
label_20dcfc:
    if (ctx->pc == 0x20DCFCu) {
        ctx->pc = 0x20DD00u;
        goto label_20dd00;
    }
    ctx->pc = 0x20DCF8u;
    {
        const bool branch_taken_0x20dcf8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x20dcf8) {
            ctx->pc = 0x20DD04u;
            goto label_20dd04;
        }
    }
    ctx->pc = 0x20DD00u;
label_20dd00:
    // 0x20dd00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20dd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd04:
    // 0x20dd04: 0x0  nop
    ctx->pc = 0x20dd04u;
    // NOP
label_20dd08:
    // 0x20dd08: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x20dd08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_20dd0c:
    // 0x20dd0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20dd10:
    if (ctx->pc == 0x20DD10u) {
        ctx->pc = 0x20DD14u;
        goto label_20dd14;
    }
    ctx->pc = 0x20DD0Cu;
    {
        const bool branch_taken_0x20dd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dd0c) {
            ctx->pc = 0x20DD18u;
            goto label_20dd18;
        }
    }
    ctx->pc = 0x20DD14u;
label_20dd14:
    // 0x20dd14: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x20dd14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20dd18:
    // 0x20dd18: 0xc0941b0  jal         func_2506C0
label_20dd1c:
    if (ctx->pc == 0x20DD1Cu) {
        ctx->pc = 0x20DD1Cu;
            // 0x20dd1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20DD20u;
        goto label_20dd20;
    }
    ctx->pc = 0x20DD18u;
    SET_GPR_U32(ctx, 31, 0x20DD20u);
    ctx->pc = 0x20DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD18u;
            // 0x20dd1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD20u; }
        if (ctx->pc != 0x20DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD20u; }
        if (ctx->pc != 0x20DD20u) { return; }
    }
    ctx->pc = 0x20DD20u;
label_20dd20:
    // 0x20dd20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20dd24:
    // 0x20dd24: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x20dd24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20dd28:
    // 0x20dd28: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
label_20dd2c:
    if (ctx->pc == 0x20DD2Cu) {
        ctx->pc = 0x20DD30u;
        goto label_20dd30;
    }
    ctx->pc = 0x20DD28u;
    {
        const bool branch_taken_0x20dd28 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x20dd28) {
            ctx->pc = 0x20DD34u;
            goto label_20dd34;
        }
    }
    ctx->pc = 0x20DD30u;
label_20dd30:
    // 0x20dd30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20dd30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd34:
    // 0x20dd34: 0x0  nop
    ctx->pc = 0x20dd34u;
    // NOP
label_20dd38:
    // 0x20dd38: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x20dd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_20dd3c:
    // 0x20dd3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20dd40:
    if (ctx->pc == 0x20DD40u) {
        ctx->pc = 0x20DD44u;
        goto label_20dd44;
    }
    ctx->pc = 0x20DD3Cu;
    {
        const bool branch_taken_0x20dd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dd3c) {
            ctx->pc = 0x20DD48u;
            goto label_20dd48;
        }
    }
    ctx->pc = 0x20DD44u;
label_20dd44:
    // 0x20dd44: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20dd48:
    // 0x20dd48: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x20dd48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_20dd4c:
    // 0x20dd4c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_20dd50:
    // 0x20dd50: 0x86c20910  lh          $v0, 0x910($s6)
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2320)));
label_20dd54:
    // 0x20dd54: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x20dd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20dd58:
    // 0x20dd58: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_20dd5c:
    if (ctx->pc == 0x20DD5Cu) {
        ctx->pc = 0x20DD5Cu;
            // 0x20dd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DD60u;
        goto label_20dd60;
    }
    ctx->pc = 0x20DD58u;
    {
        const bool branch_taken_0x20dd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD58u;
            // 0x20dd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd58) {
            ctx->pc = 0x20DC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20dc24;
        }
    }
    ctx->pc = 0x20DD60u;
label_20dd60:
    // 0x20dd60: 0xa6c00912  sh          $zero, 0x912($s6)
    ctx->pc = 0x20dd60u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2322), (uint16_t)GPR_U32(ctx, 0));
label_20dd64:
    // 0x20dd64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20dd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20dd68:
    // 0x20dd68: 0xaec00914  sw          $zero, 0x914($s6)
    ctx->pc = 0x20dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2324), GPR_U32(ctx, 0));
label_20dd6c:
    // 0x20dd6c: 0x7ac20710  lq          $v0, 0x710($s6)
    ctx->pc = 0x20dd6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 1808)));
label_20dd70:
    // 0x20dd70: 0x7ec20660  sq          $v0, 0x660($s6)
    ctx->pc = 0x20dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 1632), GPR_VEC(ctx, 2));
label_20dd74:
    // 0x20dd74: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20dd78:
    // 0x20dd78: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20dd7c:
    // 0x20dd7c: 0x320f809  jalr        $t9
label_20dd80:
    if (ctx->pc == 0x20DD80u) {
        ctx->pc = 0x20DD80u;
            // 0x20dd80: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x20DD84u;
        goto label_20dd84;
    }
    ctx->pc = 0x20DD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20DD84u);
        ctx->pc = 0x20DD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD7Cu;
            // 0x20dd80: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20DD84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20DD84u; }
            if (ctx->pc != 0x20DD84u) { return; }
        }
        }
    }
    ctx->pc = 0x20DD84u;
label_20dd84:
    // 0x20dd84: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_20dd88:
    // 0x20dd88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20dd8c:
    // 0x20dd8c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x20dd8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20dd90:
    // 0x20dd90: 0x320f809  jalr        $t9
label_20dd94:
    if (ctx->pc == 0x20DD94u) {
        ctx->pc = 0x20DD94u;
            // 0x20dd94: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x20DD98u;
        goto label_20dd98;
    }
    ctx->pc = 0x20DD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20DD98u);
        ctx->pc = 0x20DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD90u;
            // 0x20dd94: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20DD98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20DD98u; }
            if (ctx->pc != 0x20DD98u) { return; }
        }
        }
    }
    ctx->pc = 0x20DD98u;
label_20dd98:
    // 0x20dd98: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_20dd9c:
    // 0x20dd9c: 0x26c50660  addiu       $a1, $s6, 0x660
    ctx->pc = 0x20dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1632));
label_20dda0:
    // 0x20dda0: 0xc041c3e  jal         func_1070F8
label_20dda4:
    if (ctx->pc == 0x20DDA4u) {
        ctx->pc = 0x20DDA4u;
            // 0x20dda4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x20DDA8u;
        goto label_20dda8;
    }
    ctx->pc = 0x20DDA0u;
    SET_GPR_U32(ctx, 31, 0x20DDA8u);
    ctx->pc = 0x20DDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDA0u;
            // 0x20dda4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDA8u; }
        if (ctx->pc != 0x20DDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDA8u; }
        if (ctx->pc != 0x20DDA8u) { return; }
    }
    ctx->pc = 0x20DDA8u;
label_20dda8:
    // 0x20dda8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_20ddac:
    // 0x20ddac: 0xc041be0  jal         func_106F80
label_20ddb0:
    if (ctx->pc == 0x20DDB0u) {
        ctx->pc = 0x20DDB0u;
            // 0x20ddb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DDB4u;
        goto label_20ddb4;
    }
    ctx->pc = 0x20DDACu;
    SET_GPR_U32(ctx, 31, 0x20DDB4u);
    ctx->pc = 0x20DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDACu;
            // 0x20ddb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDB4u; }
        if (ctx->pc != 0x20DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDB4u; }
        if (ctx->pc != 0x20DDB4u) { return; }
    }
    ctx->pc = 0x20DDB4u;
label_20ddb4:
    // 0x20ddb4: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x20ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20ddb8:
    // 0x20ddb8: 0xc047c76  jal         func_11F1D8
label_20ddbc:
    if (ctx->pc == 0x20DDBCu) {
        ctx->pc = 0x20DDBCu;
            // 0x20ddbc: 0xc7ac00b0  lwc1        $f12, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20DDC0u;
        goto label_20ddc0;
    }
    ctx->pc = 0x20DDB8u;
    SET_GPR_U32(ctx, 31, 0x20DDC0u);
    ctx->pc = 0x20DDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDB8u;
            // 0x20ddbc: 0xc7ac00b0  lwc1        $f12, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDC0u; }
        if (ctx->pc != 0x20DDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDC0u; }
        if (ctx->pc != 0x20DDC0u) { return; }
    }
    ctx->pc = 0x20DDC0u;
label_20ddc0:
    // 0x20ddc0: 0xc04c374  jal         func_130DD0
label_20ddc4:
    if (ctx->pc == 0x20DDC4u) {
        ctx->pc = 0x20DDC4u;
            // 0x20ddc4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20DDC8u;
        goto label_20ddc8;
    }
    ctx->pc = 0x20DDC0u;
    SET_GPR_U32(ctx, 31, 0x20DDC8u);
    ctx->pc = 0x20DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDC0u;
            // 0x20ddc4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDC8u; }
        if (ctx->pc != 0x20DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDC8u; }
        if (ctx->pc != 0x20DDC8u) { return; }
    }
    ctx->pc = 0x20DDC8u;
label_20ddc8:
    // 0x20ddc8: 0xe6c00684  swc1        $f0, 0x684($s6)
    ctx->pc = 0x20ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1668), bits); }
label_20ddcc:
    // 0x20ddcc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20ddccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20ddd0:
    // 0x20ddd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20ddd4:
    // 0x20ddd4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20ddd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20ddd8:
    // 0x20ddd8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20ddd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20dddc:
    // 0x20dddc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20dddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20dde0:
    // 0x20dde0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20dde0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20dde4:
    // 0x20dde4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20dde4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20dde8:
    // 0x20dde8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20dde8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ddec:
    // 0x20ddec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ddecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ddf0:
    // 0x20ddf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ddf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ddf4:
    // 0x20ddf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ddf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ddf8:
    // 0x20ddf8: 0x3e00008  jr          $ra
label_20ddfc:
    if (ctx->pc == 0x20DDFCu) {
        ctx->pc = 0x20DDFCu;
            // 0x20ddfc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x20DE00u;
        goto label_fallthrough_0x20ddf8;
    }
    ctx->pc = 0x20DDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDF8u;
            // 0x20ddfc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20ddf8:
    ctx->pc = 0x20DE00u;
}
